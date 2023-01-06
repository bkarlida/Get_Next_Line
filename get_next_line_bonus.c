/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 04:20:55 by bkarlida          #+#    #+#             */
/*   Updated: 2022/12/27 04:21:02 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_readonly(char *str, int fd)
{
	char	*b;
	int		c;

	c = 1;
	b = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (b == 0)
		return (0);
	while (!(ft_strchr(str, '\n')) && c != 0)
	{
		c = read(fd, b, BUFFER_SIZE);
		if (c == -1)
		{
			free(b);
			return (0);
		}
		b[c] = '\0';
		str = ft_strjoin(str, b);
	}
	free(b);
	return (str);
}

char	*ft_line(char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	ptr = malloc(sizeof(char) * (i + 2));
	if (ptr == 0)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_next_line(char *str)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == 0)
	{
		free(str);
		return (0);
	}
	ptr = malloc(sizeof(char) * (ft_strlen(str) - i) + 1);
	if (ptr == 0)
		return (0);
	i++;
	while (str[i] != '\0')
		ptr[j++] = str[i++];
	ptr[j] = '\0';
	free(str);
	return (ptr);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str[fd] = ft_readonly(str[fd], fd);
	if (!str[fd])
		return (0);
	line = ft_line(str[fd]);
	str[fd] = ft_next_line(str[fd]);
	return (line);
}
