# Get_Next_Line Projesi Anlatımı

Bu proje, dosya okuma işlemi sırasında her çağrıda bir satır okumayı amaçlar. Bu işlev, `BUFFER_SIZE` adlı bir sabit kullanarak verileri tamponlamak ve işlemek için kullanılır.

## Proje Açıklaması

- "get_next_line" işlevi, belirtilen dosyadan satır satır veri okumayı hedefler.
- Dosyadan veri okunurken, işlev çağrısı arasında kaldığı yerden devam eder.
- `BUFFER_SIZE` sabiti, bellekte veriyi geçici olarak saklamak için kullanılır.

## Ayağa Kaldırma Adımları

1. Öncelikle projenin kaynak kodlarını indirin.

2. İndirdiğiniz kaynak kodlarını bir dizine çıkarın.

3. Terminale gidin ve projenin ana dizinine gidin:

    ```bash
    cd /path/to/get_next_line
    ```

4. Projeyi derlemek için aşağıdaki komutları kullanabilirsiniz:

    ```bash
    gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c -o gnl
    ```

    Bu komut, projeyi derleyecek ve "gnl" adlı bir yürütülebilir dosya oluşturacaktır.

5. Derleme tamamlandıktan sonra projeyi kullanmak için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    ./gnl
    ```

    Bu komut, derlenmiş "gnl" programını çalıştıracaktır.

6. Projeyi temizlemek için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    rm gnl
    ```

    Bu komut, derlenmiş yürütülebilir dosyayı kaldıracaktır.

Bu adımları izleyerek "get_next_line" projesini derleyebilir ve çalıştırabilirsiniz.
