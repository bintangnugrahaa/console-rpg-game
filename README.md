# Game RPG Konsol

Proyek ini adalah game RPG sederhana berbasis konsol yang ditulis dalam bahasa C++ dan sedikit bahasa C. Game ini memungkinkan pemain untuk membuat karakter, melawan monster, dan mengumpulkan pengalaman serta emas.

## Daftar Isi

- [Fitur Utama](#fitur-utama)
- [Struktur Proyek](#struktur-proyek)
- [Memulai](#memulai)
- [Cara Bermain](#cara-bermain)
- [Kredit](#kredit)
- [Kontribusi](#kontribusi)
- [Kontak](#kontak)
- [Catatan](#catatan)

## Fitur Utama

- Membuat karakter dengan berbagai kelas yang memiliki atribut unik.
- Melawan monster dengan pilihan untuk menyerang atau melarikan diri.
- Mengumpulkan pengalaman dan emas dari pertempuran.
- Mengobati karakter menggunakan emas.
- Menyimpan dan melanjutkan permainan.

## Struktur Proyek

- `main.cpp`: Berkas utama yang mengelola alur permainan dan berisi fungsi `main()`.
- `classes.h`: Mendefinisikan struktur untuk kelas karakter.
- `monsters.h`: Mendefinisikan struktur untuk monster dalam game.
- `character.h`: Mendefinisikan struktur untuk karakter pemain.
- `gameplay.h`: Berisi deklarasi fungsi yang mengelola permainan, seperti `fight()`, `newGame()`, dll.
- `file_handling.h`: Berisi deklarasi fungsi yang menangani penyimpanan dan pengambilan data dari berkas.
- `user_interface.h`: Berisi deklarasi fungsi untuk menampilkan menu dan status kepada pemain.

## Memulai

Untuk mengompilasi dan menjalankan game, ikuti langkah-langkah berikut:

1. Buka terminal atau command prompt.
2. Navigasi ke direktori proyek.
3. Kompilasi kode menggunakan kompiler C++. Contoh:
   
   ```shell
   g++ main.c -o main
   ./main
   ```

   ## Cara Bermain

1. Pilih Mode Permainan:

   - Pilih "New Game" untuk memulai petualangan baru.
   - Pilih "Continue" untuk melanjutkan permainan yang sudah ada.

2. Pembuatan Karakter:

   - Jika memulai permainan baru, berikan nama untuk karakter Anda.
   - Pilih kelas untuk karakter Anda: Warrior, Rogue, atau Archer.

3. Menu Utama Permainan:

   - Setelah pembuatan karakter, Anda akan masuk ke menu utama.
   - Menu utama menampilkan status karakter Anda dan tindakan yang tersedia.

4. Melawan Monster:

   - Pilih untuk melawan monster dari menu utama.
   - Terlibat dalam pertempuran di menu pertempuran.
   - Pilih menyerang atau melarikan diri dari monster.
   - Menangkan pertempuran untuk mendapatkan pengalaman dan emas.

5. Menyembuhkan Karakter Anda:

   - Habiskan emas untuk mengembalikan kesehatan karakter Anda sepenuhnya.

6. Menyimpan Perkembangan:

   - Kapan pun dalam permainan, Anda dapat menyimpan perkembangan Anda.
   - Pilih opsi "Save" di menu utama.

7. Keluar dari Permainan:

   - Setelah selesai bermain, pilih opsi "Quit" untuk keluar.

## Kredit

- Ide dan implementasi: Muhammad Bintang Nugraha

## Kontribusi

Kontribusi untuk proyek ini sangat diharapkan. Jika Anda memiliki ide untuk perbaikan, silakan buka isu atau kirim permintaan tarik.

## Kontak

Untuk pertanyaan atau informasi lebih lanjut, silakan hubungi penulis proyek:

- Nama: Muhammad Bintang Nugraha
- Email: djakarta1973@gmail.com

## Catatan

- Proyek ini dikembangkan untuk tujuan pendidikan dan hiburan.
- Program ini dijalankan dalam lingkungan konsol/command prompt.
- Pastikan Anda memiliki kompiler C++/C yang sesuai untuk menjalankan program ini.

