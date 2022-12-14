#include <iostream> //header
#include <stdio.h>  //header input/output
#include <stdlib.h> //header yang berfungsi untuk operasi pembanding dan operasi konversi
#include <string.h> // header yang digunakan untuk menangani string
#include <conio.h>  //header kebanyakan digunakan pada compiler berbasis MS-DOS untuk membuat antarmuka konsol.
#include <ctime>    //header mengkonvesi nilai yang dihasilkan dari pemangilan fungsi time() ke dalam bentuk string.
#include <time.h>   //header  header yang berisi fungsi-fungsi, makro dan tipe untuk memanipulasi waktu.
using namespace std;

int main()
{
start:
    string siap,
        nama_player,
        ulangi,
        lagi,
        pil;
    int player_score = 0, com_score = 0, rounds = 0, ronde;
    cout << "\n\n\n\n"
         << endl;
    cout << "\t\t=================================================================================" << endl
         << endl;
    cout << "\t\t\t\t\t\t     Kamu Siap" << endl;
    cout << "\t\t\t\t\tUntuk Bermain Batu Kertas Gunting ? " << endl;
    cout << "\t\t=================================================================================" << endl;
    cout << "\t\t\t\t\t\t     [y/t] ? ";
    cin >> siap;
    system("cls");
    if (siap == "y")
    {
    name:
        cout << "Masukan nama anda : ";
        cin >> nama_player;
        system("cls");
        cout << nama_player << " berapa ronde anda ingin bermain ? : ";
        cin >> rounds;
        if (rounds > 0)
        {
            for (int ronde = 1; ronde <= rounds; ronde++)
            {
            kedua:
                system("cls");
                srand(time(NULL));     // fungsi untuk menampilkan waktu
                int com = rand() % 10; // fungsi nilai random sisa bagi 10
                cout << "___________________________________" << endl
                     << endl;
                cout << " ================================" << endl;
                cout << "  \tSelamat Datang " << nama_player << endl;
                cout << "  Di Game Batu, Kertas, Gunting " << endl;
                cout << " ================================" << endl;
                cout << "Ronde ke : " << ronde << "/" << rounds << endl;
                cout << nama_player << " Score = " << player_score << endl;
                cout << "Computer Score = " << com_score << endl;
                cout << "  Pilihlah dari keempat ini : " << endl;
                cout << "    1. Batu\n    2. Kertas\n    3. Gunting\n    4. Keluar" << endl;
                cout << "  Tulis Pilihanmu : ";
                cin >> pil;
                if (pil == "batu" || pil == "Batu" || pil == "1")
                {
                    cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "  Kamu pilih = BATU  " << endl;

                    if (com <= 3 && com >= 1)
                    {
                        cout << "  COM pilih = BATU  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "   ==> SERI ! <==   " << endl;
                    }
                    else if (com <= 6 && com >= 4)
                    {
                        cout << "  COM pilih = KERTAS  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << " ==> KAMU KALAH ! <==" << endl;
                        player_score--;
                        com_score++;
                    }
                    else
                    {
                        cout << "  COM pilih = GUNTING  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "  ==> KAMU MENANG ! <==  " << endl;
                        player_score++;
                        com_score--;
                    }
                }
                else if (pil == "kertas" || pil == "Kertas" || pil == "2")
                {
                    cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "  Kamu pilih = KERTAS  " << endl;

                    if (com <= 3 && com >= 1)
                    {
                        cout << "  COM pilih = KERTAS  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "    ==> SERI ! <==   " << endl;
                    }
                    else if (com <= 6 && com >= 4)
                    {
                        cout << "  COM pilih = GUNTING  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << " ==> KAMU KALAH ! <==  " << endl;
                        player_score--;
                        com_score++;
                    }
                    else
                    {
                        cout << "  COM pilih = BATU  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << " ==> KAMU MENANG ! <== " << endl;
                        player_score++;
                        com_score--;
                    }
                }
                else if (pil == "gunting" || pil == "Gunting" || pil == "3")
                {
                    cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "  Kamu pilih = GUNTING  " << endl;

                    if (com <= 3 && com >= 1)
                    {
                        cout << "  COM pilih = GUNTING  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "    ==> SERI ! <==   " << endl;
                    }
                    else if (com <= 6 && com >= 4)
                    {
                        cout << "  COM pilih = BATU  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << " ==> KAMU KALAH ! <==  " << endl;
                        player_score--;
                        com_score++;
                    }
                    else
                    {
                        cout << "  COM pilih = KERTAS  " << endl;
                        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << " ==> KAMU MENANG ! <== " << endl;
                        player_score++;
                        com_score--;
                    }
                }
                else if (pil == "keluar" || pil == "Keluar" || pil == "4")
                {
                exit:
                    system("cls");
                    cout << "\n Terimakasih, Sudah Bermain :) " << endl;
                    cout << "      Bermain Lagi Yah        " << endl;
                    getch();
                    return 0;
                }
                else
                {
                    cout << "___________________________________" << endl
                         << endl;
                    cout << " Inputan Salah ! Silahkan Ulangi Kembali " << endl;
                    cout << "        ==> Tekan ENTER <==" << endl;
                    getch();
                    system("cls");
                    goto kedua;
                }
                cout << "___________________________________" << endl
                     << endl;
                cout << " Tekan ENTER ";
                getch();
                system("cls");
            }
        }
        else if (rounds == 0)
        {
            cout << "Anda tidak memasukan ronde!! ";
            system("cls");
            goto start;
        }
        else
        {
            cout << "Input salah!! ";
            system("cls");
            goto start;
        }
        cout << "___________________________________" << endl;
        cout << "Hasil : " << endl;
        cout << nama_player << " Mendapatkan score : " << player_score << endl;
        cout << "Computer mendapatkan score : " << com_score << endl;
        if (player_score < com_score)
        {
            cout << "Maaf " << nama_player << ", Kamu KALAH!" << endl;
        }
        else if (player_score > com_score)
        {
            cout << "Selamat " << nama_player << ", kamu MENANG" << endl;
        }
        else
        {
            cout << "DRAW! Score kalian sama" << endl;
        }
        cout << "___________________________________" << endl
             << endl;
        cout << " Tekan ENTER ";
        getch();
        system("cls");
        cout << "___________________________________" << endl;
        cout << " ================================" << endl;
        cout << " Main Lagi [y/t] ? ";
        cin >> lagi;
        if (lagi == "y")
        {
            system("cls");
            goto start;
        }
        else if (lagi == "t")
        {
            system("cls");
            cout << "\n Terimakasih, Sudah Bermain :) " << endl;
            cout << "      Bermain Lagi Yah        " << endl;
            getch();
            return 0;
            getch();
        }
        else
        {
            cout << "\n\n\n\n"
                 << endl;
            cout << "============================================================================" << endl;
            cout << "                      **** Inputan Salah ! ****" << endl;
            cout << "                              Ulangi ?" << endl;
            cout << "============================================================================" << endl;
            cout << "                                 y ? ";
            cin >> ulangi;
            if (ulangi == "y")
            {
                system("cls");
                goto start;
            }
            else
            {
                system("cls");
                cout << "\n Terimakasih, Sudah Bermain :) " << endl;
                cout << "      Bermain Lagi Yah        " << endl;
                getch();
                return 0;
                getch();
            }
        }
    }
    else if (siap == "t")
    {
    keluar:
        system("cls");
        cout << "\n\n\n\n"
             << endl;
        cout << "============================================================================" << endl;
        cout << "                  Kamu Telah Keluar Dari Permainan" << endl;
        cout << "============================================================================" << endl;
        cout << "                             Tekan ENTER ";
        getch();
        system("cls");
        return 0;
    }
    else
    {
        cout << "\n\n\n\n"
             << endl;
        cout << "============================================================================" << endl;
        cout << "                      **** Inputan Salah ! ****" << endl;
        cout << "                              Ulangi ?" << endl;
        cout << "============================================================================" << endl;
        cout << "                                 y ? ";
        cin >> ulangi;
        if (ulangi == "y")
        {
            system("cls");
            goto start;
        }
        else
        {
            goto keluar;
        }
    }
    return 0;
}