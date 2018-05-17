#include <stdio.h> //Deklarasi library yang digunakan yaitu standart input dan output
#include <string.h> //Deklarasi library yang digunakan yaitu untuk string

char simbol[119][4] = {"O", "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar",
                    "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr",
                    "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe",
                    "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Hf",
                    "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Ti", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac",
                    "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh",
                    "Hs", "Mt", "Ds", "Rg", "Uub", "Uut", "Uuq", "Uup", "Uuh", "Uus", "Uuo"};
                    //Deklarasi simbol-simbol yang digunakan sebagai char
char nomor [119][4] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18",
                    "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36",
                    "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54",
                    "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72",
                    "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90",
                    "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107",
                    "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118"};
                    //Deklarasi nomor yang digunakan sebagai char
char nama[119][100] = {"Apapun", "Hidrogen", "Helium", "Litium", "Berilium", "Boron", "Karbon", "Nitrogen", "Oksigen", "Fluor", "Neon",
                    "Natrium", "Magnesium", "Alumunium", "Silikon", "Fosfor", "Belerang", "Khlor", "Argon", "Kalium", "Kalsium",
                    "Scandium", "Titan", "Vanadium", "Krom", "Mangan", "Besi", "Kobal", "Nikel", "Tembaga", "Seng", "Galium",
                    "Germanium", "Arsen", "Selen", "Brom", "Kripton", "Rubidium", "Stronsium", "Litrium", "Sirkon", "Niobium",
                    "Molibden", "Teknesium", "Rutenium", "Rodium", "Palsdium", " Perak", "Kadmium", "Indium", "Timah", "Antimon",
                    "Telurium", "Yodium", "Xenon", "Serenium", "Barium", "Lintanium", "Serium", "Praseoium", "Neodium", "Samarium",
                    "Europium", "Gadolinium", "Terbium", "Disprosium", "Holmium", "Erbium", "Tulium", "Ytterbium", "Lutetium",
                    "Hafnium", "Tantalum", "Wolfram", "Remium", "Osmium", "Irdium", "Platiina", "Emas", "Raksa", "Talium", "Timbal",
                    "Bismut", "Polanium", "Astatin", "Radon", "Fransium", "Radium", "Aktinium", "Torium", "Protaktium", " Uranium",
                    "Neptunium", "Plutonium", "Americium", "Kurium", "Berkelium", "Kalifornium", "Einstenium", "Fernium", "Mendelevium",
                    "Nobelium", "Lawrencium", "Ruterforcium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meiterium", "Darmstadium",
                    "Roentgium", "Ununbium", "Ununtrium", "Ununquadium", "Ununpentium", "Ununhxeium", "Ununseptium", "Ununoctium"};
                    //Deklarasi nama-nama unsur yang digunakan sebagai char
char file[120][100]={"Apapun",
                "C:\Proyek Akhir\\1.txt", "C:\Proyek Akhir\\2.txt", "C:\Proyek Akhir\\3.txt", "C:\Proyek Akhir\\4.txt", "C:\Proyek Akhir\\5.txt",
                "C:\Proyek Akhir\\6.txt", "C:\Proyek Akhir\\7.txt", "C:\Proyek Akhir\\8.txt", "C:\Proyek Akhir\\9.txt", "C:\Proyek Akhir\\10.txt",
                "C:\Proyek Akhir\\11.txt", "C:\Proyek Akhir\\12.txt", "C:\Proyek Akhir\\13.txt", "C:\Proyek Akhir\\14.txt", "C:\Proyek Akhir\\15.txt",
                "C:\Proyek Akhir\\16.txt", "C:\Proyek Akhir\\17.txt", "C:\Proyek Akhir\\18.txt", "C:\Proyek Akhir\\19.txt", "C:\Proyek Akhir\\20.txt",
                "C:\Proyek Akhir\\21.txt", "C:\Proyek Akhir\\22.txt", "C:\Proyek Akhir\\23.txt", "C:\Proyek Akhir\\24.txt", "C:\Proyek Akhir\\25.txt",
                "C:\Proyek Akhir\\26.txt", "C:\Proyek Akhir\\27.txt", "C:\Proyek Akhir\\28.txt", "C:\Proyek Akhir\\29.txt", "C:\Proyek Akhir\\30.txt",
                "C:\Proyek Akhir\\31.txt", "C:\Proyek Akhir\\32.txt", "C:\Proyek Akhir\\33.txt", "C:\Proyek Akhir\\34.txt", "C:\Proyek Akhir\\35.txt",
                "C:\Proyek Akhir\\36.txt", "C:\Proyek Akhir\\37.txt", "C:\Proyek Akhir\\38.txt", "C:\Proyek Akhir\\39.txt", "C:\Proyek Akhir\\40.txt",
                "C:\Proyek Akhir\\41.txt", "C:\Proyek Akhir\\42.txt", "C:\Proyek Akhir\\43.txt", "C:\Proyek Akhir\\44.txt", "C:\Proyek Akhir\\45.txt",
                "C:\Proyek Akhir\\46.txt", "C:\Proyek Akhir\\47.txt", "C:\Proyek Akhir\\48.txt", "C:\Proyek Akhir\\49.txt", "C:\Proyek Akhir\\50.txt",
                "C:\Proyek Akhir\\51.txt", "C:\Proyek Akhir\\52.txt", "C:\Proyek Akhir\\53.txt", "C:\Proyek Akhir\\54.txt", "C:\Proyek Akhir\\55.txt",
                "C:\Proyek Akhir\\56.txt", "C:\Proyek Akhir\\57.txt", "C:\Proyek Akhir\\58.txt", "C:\Proyek Akhir\\59.txt", "C:\Proyek Akhir\\60.txt",
                "C:\Proyek Akhir\\61.txt", "C:\Proyek Akhir\\62.txt", "C:\Proyek Akhir\\63.txt", "C:\Proyek Akhir\\64.txt", "C:\Proyek Akhir\\65.txt",
                "C:\Proyek Akhir\\66.txt", "C:\Proyek Akhir\\67.txt", "C:\Proyek Akhir\\68.txt", "C:\Proyek Akhir\\69.txt", "C:\Proyek Akhir\\70.txt",
                "C:\Proyek Akhir\\71.txt", "C:\Proyek Akhir\\72.txt", "C:\Proyek Akhir\\73.txt", "C:\Proyek Akhir\\74.txt", "C:\Proyek Akhir\\75.txt",
                "C:\Proyek Akhir\\76.txt", "C:\Proyek Akhir\\77.txt", "C:\Proyek Akhir\\78.txt", "C:\Proyek Akhir\\79.txt", "C:\Proyek Akhir\\80.txt",
                "C:\Proyek Akhir\\81.txt", "C:\Proyek Akhir\\82.txt", "C:\Proyek Akhir\\83.txt", "C:\Proyek Akhir\\84.txt", "C:\Proyek Akhir\\85.txt",
                "C:\Proyek Akhir\\86.txt", "C:\Proyek Akhir\\87.txt", "C:\Proyek Akhir\\88.txt", "C:\Proyek Akhir\\89.txt", "C:\Proyek Akhir\\90.txt",
                "C:\Proyek Akhir\\91.txt", "C:\Proyek Akhir\\92.txt", "C:\Proyek Akhir\\93.txt", "C:\Proyek Akhir\\94.txt", "C:\Proyek Akhir\\95.txt",
                "C:\Proyek Akhir\\96.txt", "C:\Proyek Akhir\\97.txt", "C:\Proyek Akhir\\98.txt", "C:\Proyek Akhir\\99.txt", "C:\Proyek Akhir\\100.txt",
                "C:\Proyek Akhir\\101.txt", "C:\Proyek Akhir\\102.txt", "C:\Proyek Akhir\\103.txt", "C:\Proyek Akhir\\104.txt", "C:\Proyek Akhir\\105.txt",
                "C:\Proyek Akhir\\106.txt", "C:\Proyek Akhir\\107.txt", "C:\Proyek Akhir\\108.txt", "C:\Proyek Akhir\\109.txt", "C:\Proyek Akhir\\110.txt",
                "C:\Proyek Akhir\\111.txt", "C:\Proyek Akhir\\112.txt", "C:\Proyek Akhir\\113.txt", "C:\Proyek Akhir\\114.txt", "C:\Proyek Akhir\\115.txt",
                "C:\Proyek Akhir\\116.txt", "C:\Proyek Akhir\\117.txt", "C:\Proyek Akhir\\118.txt"};
                //Deklarasi nama-nama file yang digunakan sebagai char
char pilih[100]; //Deklarasi pilih sebagai char untuk pilihan menu utama
char namaUnsur[100]; //Deklarasi namaUnsur sebagai char untuk masukan nama unsur
char nomorUnsur[100]; //Deklarasi nomorUnsur sebagai char untuk masukan nomor unsur
char simbolUnsur[100]; //Deklarasi simbolUnsur sebagai char untuk masukan simbol unsur
int baris; //Deklarasi baris sebagai interger untuk menunjukkan baris ke berapa pada periodik tabel
char pilihanMenu[100]; //Deklarasi pilihanMenu sebagai char untuk pilihan menu setelah menu utama
int i; //Deklarasi i sebagai integer untuk simbol nilai yang akan di looping untuk char
int j; //Deklarasi j sebagai integer untuk simbol nilai yang akan di looping untuk integer
int t; //Deklarasi t sebagai integer untuk simbol tab
int s; //Deklarasi s sebagai integer untuk simbol spasi
int g; //Deklarasi g sebagai integer untuk simbol garis

void main() //Menu utaama pada program ini
{
    while(1) //Membuat looping tidak terbatas
    {
        system("cls"); //Menghapus layar
        printf("\n\n\t\tSelamat Datang di Program Smart Periodic Table"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\n\tPilih Menu di Bawah : "); //Membuat tulisan seperti yang tertulis disana
        printf("\n\n\t1. Periodik Tabel"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t2. Nomor Unsur"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t3. Simbol Unsur"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t4. Nama Unsur"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t5. Petunjuk"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t6. Keluar"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\n\tPilihan Anda : "); //Membuat tulisan seperti yang tertulis disana
        gets(pilih); //Meminta input dari user yang akan disimpan dalam bentuk char
        if(strcmp(pilih, "1") == 0) //Membuat kondisi jika input yang dimasukkan adalah 1
        {
            system("cls"); //Memnghapus layar
            tabelPeriodik(); //Menjalankan menu tabelPeriodik
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilih, "2") == 0) //Membuat kondisi jika input yang dimasukkan adalah 2
        {
            system("cls"); //Memnghapus layar
            nomorunsur(); //Menjalankan menu nomorunsur
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilih, "3") == 0) //Membuat kondisi jika input yang dimasukkan adalah 3
        {
            system("cls"); //Memnghapus layar
            simbolunsur(); //Menjalankan menu simbolunsur
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilih, "4") == 0) //Membuat kondisi jika input yang dimasukkan adalah 4
        {
            system("cls"); //Memnghapus layar
            namaunsur(); //Menjalankan menu namaunsur
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilih, "5") == 0) //Membuat kondisi jika input yang dimasukkan adalah 5
        {
            system("cls"); //Memnghapus layar
            printf("\n\n\tProgram Ini Adalah Program Smart Periodic Table"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\tBerikut Adalah Langkah-langkah Untuk Menggunakan Program Ini :"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\t1. Untuk Menampilkan Periodic Table, Pilih Menu 1. Periodic Table"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\t2. Untuk Menampilkan Data, Dapat Memasukkan Tiga Jenis Pilihan Yaitu :"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\t   a. Untuk Menampilkan Data Dengan Input Nomor Unsur Pilih Menu 2. Nomor Unsur"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\t   b. Untuk Menampilkan Data Dengan Input Simbol Unsur Pilih Menu 3. Simbol Unsur"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\t   c. Untuk Menampilkan Data Dengan Input Nama Unsur Pilih Menu 4. Nama Unsur"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\t3. Untuk Keluar Dari Program Pilih Menu 6. Keluar"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilih, "6") == 0) //Membuat kondisi jika input yang dimasukkan adalah 6
        {
            system("cls"); //Memnghapus layar
            printf("\n\n\n\tTerima Kasih Telah Menggunakan Program Ini\n\n"); //Membuat tulisan seperti yang tertulis disana
            break; //Keluar dari looping
        }
        else //Membuat kondisi jika input yang dimasukkan adalah selain 1-6
        {
            printf("\n\n\tPilihan Anda Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\tSilahkan Masukkan Pilihan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
    }
}

void tabelPeriodik() //Menu untuk membuat tabel periodik
{
    for(baris = 1 ; baris <= 9 ; baris++ ) //Mendeklarasikan looping dari baris 1 sampai baris 9
    {
        if(baris == 1) //Jika baris ke 1
        //Membuat kotak di baris pertama
        {
            printf("\n\t ");
            for(g = 1 ; g <= 10 ; g++)
            {
                if(g == 6)
                {
                    for(t =0 ; t <= 11 ; t++)
                    {
                        if(t == 11)
                        {
                            for(s = 0 ; s <= 14 ; s++)
                            {
                                printf(" ");
                            }
                        }
                        if(t!= 11)
                        {
                            printf("\t");
                        }
                    }
                }
                printf("_");
            }
            printf("\n\t|");
            for(j = 1 ; j <= 2 ; j++)
            {
                printf(" %s   |", nomor[j]); //Menampilkan nomor atom pada periodik tabel
                if(j == 1)
                {
                    for(t = 0 ; t <= 11 ; t++)
                    {
                        if(t == 11)
                        {
                            for(s = 0; s <= 14 ; s++)
                            {
                                if(s == 14)
                                {
                                    printf("|");
                                }
                                if(s != 14)
                                {
                                    printf(" ");
                                }
                            }
                        }
                        if(t != 11)
                        {
                            printf("\t");
                        }
                    }
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 2 ; i++)
            {
                if(i == 1)
                {
                    printf(" %s   |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                    for(t = 0 ; t <= 11 ; t++)
                    {
                        if(t == 11)
                        {
                            for(s = 0; s <= 14 ; s++)
                            {
                                if(s == 14)
                                {
                                    printf("|");
                                }
                                if(s != 14)
                                {
                                    printf(" ");
                                }
                            }
                        }
                        if(t != 11)
                        {
                            printf("\t");
                        }
                    }
                }
                else
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
        }
        else if(baris == 2) //Jika baris ke 2
        //Membuat kotak di baris pertama
        {
            printf("\n\t|");
            for(i = 1 ; i <= 8 ; i++)
            {
                if(i == 1)
                {
                    printf("_____|");
                }
                else if(i == 2)
                {
                    printf("_____");
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                    printf(" ");
                }
                else if(i == 7)
                {
                    printf("_____");
                }
                else if(i == 8)
                {
                printf("|_____|");
                }
                else
                {
                    printf("_____ ");
                }
            }
            printf("\n\t|");
            for(j = 3 ; j <= 10 ; j++)
            {
                if(j == 3)
                {
                    printf(" %s   |", nomor[j]); //Membuat kotak di baris pertama
                }
                else if(j == 4)
                {
                    printf(" %s   |", nomor[j]); //Membuat kotak di baris pertama
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(j == 10)
                {
                    printf("| %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
                else
                {
                    printf("| %s   ", nomor[j]); //Membuat kotak di baris pertama
                }
            }
            printf("\n\t|");
            for(i = 3 ; i <= 10 ; i++)
            {
                if(i == 3)
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else if(i == 4)
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 10)
                {
                    printf("| %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf("| %s   ", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 8 ; i++)
            {
                if(i == 1)
                {
                    printf("_____|");
                }
                else if(i == 2)
                {
                    printf("_____|");
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 8)
                {
                    printf("|_____|");
                }
                else
                {
                    printf("|_____");
                }
            }
        }
        else if(baris == 3) //Jika baris ke 3
        //Membuat kotak di baris pertama
        {
            printf("\n\t|");
            for(j = 11 ; j <= 18 ; j++)
            {
                if(j == 11)
                {
                    printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
                else if(j == 12)
                {
                    printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(j == 18)
                {
                    printf("| %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
                else
                {
                    printf("| %s  ", nomor[j]); //Membuat kotak di baris pertama
                }
            }
            printf("\n\t|");
            for(i = 11 ; i <= 18 ; i++)
            {
                if(i == 11)
                {
                    printf(" %s  |", simbol[i]); //Membuat kotak di baris pertama
                }
                else if(i == 12)
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                    for(t=0 ; t <=7 ; t++)
                    {
                        printf("\t");
                    }
                }
                else if(i == 15 || i == 16)
                {
                    printf("| %s   ", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else if(i == 18)
                {
                    printf("| %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf("| %s  ", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 8 ; i++)
            {
                if(i == 1)
                {
                    printf("_____|");
                }
                else if(i == 2)
                {
                    printf("_____|");
                    for(t=0 ; t <=9 ; t++)
                    {
                        if(t == 9)
                        {
                            printf("_____");
                        }
                        else
                        {
                            printf("_____ ");
                        }
                    }
                }
                else if(i == 8)
                {
                    printf("|_____|");
                }
                else
                {
                    printf("|_____");
                }
            }
        }
        else if(baris == 4) //Jika baris ke 4
        //Membuat kotak di baris pertama
        {
            printf("\n\t|");
            for(j = 19; j <= 36; j++)
            {
                printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
            }
            printf("\n\t|");
            for (i = 19 ; i <= 36 ; i++)
            {
                if(i == 19 || i == 23)
                {
                    printf(" %s   |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 5) //Jika baris ke 5
        //Membuat kotak di baris pertama
        {
            printf("\n\t|");
            for(j = 37; j <= 54; j++)
            {
                printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
            }
            printf("\n\t|");
            for (i = 37 ; i <= 54 ; i++)
            {
                if(i == 39 || i ==53)
                {
                    printf(" %s   |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 6) //Jika baris ke 6
        //Membuat kotak di baris pertama
        {
            printf("\n\t|");
            for(j = 55; j <= 86; j++)
            {
                if(j == 57)
                {
                    printf("     |");
                }
                else if(j>=58 && j<=71)
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
                else
                {
                    printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
            }
            printf("\n\t|");
            for (i = 55 ; i <= 86 ; i++)
            {
                if(i == 57)
                {
                    printf("57-71|");
                }
                else if(i>=58 && i<=71)
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
                else if(i == 74)
                {
                    printf(" %s   |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 7) //Jika baris ke 7
        //Membuat kotak di baris pertama
        {
            printf("\n\t|");
            for(j = 87; j <= 118; j++)
            {
                if(j == 89)
                {
                    printf(" 89- |");
                }
                else if(j>=90 && j<=103)
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
                else if(j == 87 || j == 88)
                {
                    printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
                else if(j >= 100 && j <= 118)
                {
                    printf(" %s |", nomor[j]); //Membuat kotak di baris pertama
                }
                else
                {
                    printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
            }
            printf("\n\t|");
            for (i = 87 ; i <= 118 ; i++)
            {
                if(i == 89)
                {
                    printf(" 103 |");
                }
                else if(i>=90 && i<=103)
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
                else if (i >= 87 && i <= 111)
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf(" %s |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t|");
            for(i = 1 ; i <= 18 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 8) //Jika baris ke 8
        //Membuat kotak di baris pertama
        {
            printf("\n\n");
            printf("\n\t\t\t  ");
            for(i = 1 ; i <= 15 ; i++)
            {
                printf(" _____");
            }
            printf("\n\t\t\t  |");
            for(j = 57; j <= 71; j++)
            {
                printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
            }
            printf("\n\t\t\t  |");
            for (i = 57 ; i <= 71 ; i++)
            {
                printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
            }
            printf("\n\t\t\t  |");
            for(i = 1 ; i <= 15 ; i++)
            {
                printf("_____|");
            }
        }
        else if(baris == 9) //Jika baris ke 9
        //Membuat kotak di baris pertama
        {
            printf("\n\t\t\t  |");
            for(j = 89; j <= 103; j++)
            {
                if(j >= 100)
                {
                    printf(" %s |", nomor[j]); //Membuat kotak di baris pertama
                }
                else
                {
                    printf(" %s  |", nomor[j]); //Membuat kotak di baris pertama
                }
            }
            printf("\n\t\t\t  |");
            for (i = 89 ; i <= 103 ; i++)
            {
                if(i == 92)
                {
                    printf(" %s   |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
                else
                {
                    printf(" %s  |", simbol[i]); //Menampilkan simbol unsur pada periodik tabel
                }
            }
            printf("\n\t\t\t  |");
            for(i = 1 ; i <= 15 ; i++)
            {
                printf("_____|");
            }
        }
    }
}

void nomorunsur() //Menu nomor unsur untuk menjalankan program jika user memasukkan nomor unsur
{
    while(1) // Membuat looping tidak terbatas
    {
        system("cls"); //Memnghapus layar
        printf("\n\n\tSilahkan Pilih Menu di Bawah : "); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t1. Masukkan Unsur"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t2. Kembali ke Menu Utama"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\tPilihan Anda : "); //Membuat tulisan seperti yang tertulis disana
        gets(pilihanMenu); //Meminta input dari user yang akan disimpan dalam bentuk char
        if(strcmp(pilihanMenu, "1") == 0) //Membuat kondisi jika input yang dimasukkan adalah 1
        {
            system("cls"); //Memnghapus layar
            printf("\n\n\tContoh Nomor Unsur : 1"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\n\tMasukkan Nomor Unsur : "); //Membuat tulisan seperti yang tertulis disana
            gets(nomorUnsur); //Meminta input dari user yang akan disimpan dalam bentuk char
            for(i = 1 ; i <= 118 ; i++) //Membuat looping untuk i dari 1 sampai 118
            {
                if(strcmp(nomor[i], nomorUnsur) == 0) //Jika input dari user sama dengan nomor unsur yang telah dideklarasikan
                {
                    printf("\n\n\tUnsur Dengan Nomor Unsur %s Adalah %s", nomor[i], nama[i]); //Membuat tulisan seperti yang tertulis disana
                    txt(); //Menjalankan menu txt
                    getch(); //Menunda layar sampai user menekan enter
                    return nomorunsur(); //Kembali ke awal menu nomorunsur
                }
                else //Jika input dari user tidak sama dengan nomor unsur yang telah dideklarasikan
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
            }
            printf("\n\n\tNomor Unsur Yang Anda Masukkan Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\tSilahkan Masukkan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilihanMenu, "2") == 0) //Membuat kondisi jika input yang dimasukkan adalah 2
        {
            printf("\n\n\tTekan Enter"); //Membuat tulisan seperti yang tertulis disana
            break; //Keluar dari looping
        }
        else //Membuat kondisi jika input yang dimasukkan adalah selain 1 dan 2
        {
            printf("\n\n\tPilihan Anda Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\tSilahkan Masukkan Pilihan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
    }
}

void simbolunsur() //Menu simbol unsur untuk menjalankan program jika user memasukkan simbol unsur
{
    while(1) // Membuat looping tidak terbatas
    {
        system("cls"); //Memnghapus layar
        printf("\n\n\tSilahkan Pilih Menu di Bawah : "); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t1. Masukkan Unsur"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t2. Kembali ke Menu Utama"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\tPilihan Anda : "); //Membuat tulisan seperti yang tertulis disana
        gets(pilihanMenu); //Meminta input dari user yang akan disimpan dalam bentuk char
        if(strcmp(pilihanMenu, "1") == 0) //Membuat kondisi jika input yang dimasukkan adalah 1
        {
            system("cls"); //Memnghapus layar
            printf("\n\n\tContoh Simbol Unsur : H"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\n\tMasukkan Simbol Unsur : "); //Membuat tulisan seperti yang tertulis disana
            gets(simbolUnsur); //Meminta input dari user yang akan disimpan dalam bentuk char
            for(i = 1 ; i <= 118 ; i++) //Membuat looping untuk i dari 1 sampai 118
            {
                if(strcmp(simbol[i], simbolUnsur) == 0) //Jika input dari user sama dengan nomor unsur yang telah dideklarasikan
                {
                    printf("\n\n\tUnsur Dengan Simbol Unsur %s adalah %s", simbol[i], nama[i]);
                    txt(); //Menjalankan menu txt
                    getch(); //Menunda layar sampai user menekan enter
                    return simbolunsur(); //Kembali ke awal menu simbolunsur
                }
                else //Jika input dari user tidak sama dengan nomor unsur yang telah dideklarasikan
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
            }
            printf("\n\n\tSimbol Yang Anda Masukkan Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\tSilahkan Masukkan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menahan layar sampai user menekan enter
        }
        else if(strcmp(pilihanMenu, "2") == 0) //Membuat kondisi jika input yang dimasukkan adalah 2
        {
            printf("\n\n\tTekan Enter"); //Membuat tulisan seperti yang tertulis disana
            break; //Keluar dari looping
        }
        else //Membuat kondisi jika input yang dimasukkan adalah selain 1 dan 2
        {
            printf("\n\n\tPilihan Anda Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\tSilahkan Masukkan Pilihan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
    }
}

void namaunsur() //Menu nomor unsur untuk menjalankan program jika user memasukkan nama unsur
{
    while(1) // Membuat looping tidak terbatas
    {
        system("cls"); //Memnghapus layar
        printf("\n\n\tSilahkan Pilih Menu di Bawah : "); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t1. Masukkan Unsur"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\t2. Kembali ke Menu Utama"); //Membuat tulisan seperti yang tertulis disana
        printf("\n\tPilihan Anda : "); //Membuat tulisan seperti yang tertulis disana
        gets(pilihanMenu); //Meminta input dari user yang akan disimpan dalam bentuk char
        if(strcmp(pilihanMenu, "1") == 0) //Membuat kondisi jika input yang dimasukkan adalah 1
        {
            system("cls"); //Memnghapus layar
            printf("\n\n\tContoh Nama Unsur : Hidrogen"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\n\tMasukkan Nama Unsur : "); //Membuat tulisan seperti yang tertulis disana
            gets(namaUnsur); //Meminta input dari user dan disimpan dalam bentuk char
            for(i = 1; i <= 118 ; i++) //Membuat looping untuk i dari 1 sampai 118
            {
                if(strcmp(nama[i], namaUnsur) == 0) //Jika input dari user sama dengan nomor unsur yang telah dideklarasikan
                {
                    printf("\n\n\tUnsur Dengan Nama %s Adalah", nama[i]); //Membuat tulisan seperti yang tertulis disana
                    txt(); //Menjalankan menu txt
                    getch(); //Menunda layar sampai user menekan enter
                    return namaunsur(); //Kembali ke awal menu namaunsur
                }
                else //Jika input dari user tidak sama dengan nomor unsur yang telah dideklarasikan
                {
                    continue; //Melanjutkan ke looping selanjutnya
                }
            }
            printf("\n\n\tNama Unsur Yang Anda Masukkan Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\n\tSilahkan Masukkan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
        else if(strcmp(pilihanMenu, "2") == 0) //Membuat kondisi jika input yang dimasukkan adalah 2
        {
            printf("\n\n\tTekan Enter"); //Membuat tulisan seperti yang tertulis disana
            break; //Keluar dari looping
        }
        else //Membuat kondisi jika input yang dimasukkan adalah selain 1 dan 2
        {
            printf("\n\n\tPilihan Anda Salah"); //Membuat tulisan seperti yang tertulis disana
            printf("\n\tSilahkan Masukkan Pilihan Kembali"); //Membuat tulisan seperti yang tertulis disana
            getch(); //Menunda layar sampai user menekan enter
        }
    }
}

void txt() //Menu txt untuk membuka file dalam bentuk txt yang akan dibaca dan ditampilkan pada program
{
    char nama[100]; //Mendeklarasikan nama sebagai char untuk setiap barisan dari data yang akan diambil
    FILE * data = fopen(file[i], "r"); //Membuka file data untuk nama file ke i seperti yang telah dideklarikan
    printf("\n\n"); //Membuat baris baru dari setiap kalimat yang ditampilkan
    while(fgets(nama, 100, data) != NULL) // Mendeklarasikan untuk mengambil setiap baris pada file sampai habis
    {
        printf("\t%s", nama); //Menampilkan data yang telah diambil
    }
    fclose(data); //Menutup kembali file
}
