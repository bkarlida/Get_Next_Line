/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:38:19 by bkarlida          #+#    #+#             */
/*   Updated: 2022/12/26 17:41:43 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	len;

	while (s1 == NULL)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	len = (ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	k = 0;
	j = 0;
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (nstr == NULL)
		return (0);
	while (s1[i])
		nstr[i++] = s1[j++];
	while (s2[k])
		nstr[i++] = s2[k++];
	nstr[i] = '\0';
	free(s1);
	return (nstr);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	c = (unsigned char)c;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == 0)
		return (&str[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
