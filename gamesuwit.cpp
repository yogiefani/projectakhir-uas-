#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

string siap, ulangi, nama_player, player, ulangi_ronde, lagi;
int rounds = 0, player_score = 0, com_score = 0, ronde;
void start(), end(), eror(), createname(), startgame(), ingame(), batu(), gunting(), kertas(), erorinput(), result();

int main()
{
    start();
    if (siap == "y")
    {
        createname();
        startgame();
        result();
    }
    else if (siap == "t")
    {
        end();
    }
    else
    {
        eror();
    }
    return 0;
}

// memulai permainan
void start()
{
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
}

// membuat nama
void createname()
{
    cout << "\t\t=================================================================================" << endl
         << endl;
    cout << "\t\t\t\t\t  Masukan Nama Anda = ";
    cin.ignore(1, '\n');
    getline(cin, nama_player);
    system("cls");
}

// mulai permainan
void startgame()
{
    cout << "\t\t=================================================================================" << endl
         << endl;
    cout << "\t\t\t\t  Masukan berapa ronde permainan = ";
    cin >> rounds;
    system("cls");
    if (rounds > 0)
    {
        for (ronde = 1; ronde <= rounds; ronde++)
        {
            ingame();
        }
    }
    else if (rounds == 0)
    {
        erorinput();
    }
    else
    {
        erorinput();
    }
}

// dalam game
void ingame()
{
    system("cls");
    cout << "___________________________________" << endl
         << endl;
    cout << " ================================" << endl;
    cout << "  \t Selamat Datang " << endl;
    cout << "\t " << nama_player << endl;
    cout << "  Di Game Batu, Gunting, Kertas " << endl;
    cout << " ================================" << endl;
    cout << "Ronde ke : " << ronde << "/" << rounds << endl;
    cout << nama_player << " Score = " << player_score << endl;
    cout << "Computer Score = " << com_score << endl;
    cout << "  Pilihlah dari keempat ini : " << endl;
    cout << "    1. Batu\n    2. Gunting\n    3. Kertas\n    4. Keluar" << endl;
    cout << "  Tulis Pilihanmu : ";
    cin >> player;
    int com = (rand() % 3) + 1;
    if (player == "batu" || player == "Batu" || player == "1")
    {
        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "  Kamu pilih = BATU  " << endl;

        if (com == 1)
        {
            cout << "  COM pilih = BATU  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "   ==> SERI ! <==   " << endl;
            getch();
        }
        else if (com == 2)
        {
            cout << "  COM pilih = GUNTING  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "  ==> KAMU MENANG ! <==  " << endl;
            player_score++;
            com_score--;
            getch();
        }
        else
        {
            cout << "  COM pilih = KERTAS  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << " ==> KAMU KALAH ! <==" << endl;
            player_score--;
            com_score++;
            getch();
        }
    }
    else if (player == "gunting" || player == "Gunting" || player == "2")
    {
        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "  Kamu pilih = GUNTING  " << endl;

        if (com == 1)
        {
            cout << "  COM pilih = BATU  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << " ==> KAMU KALAH ! <==" << endl;
            player_score--;
            com_score++;
            getch();
        }
        else if (com == 2)
        {
            cout << "  COM pilih = GUNTING  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "   ==> SERI ! <==   " << endl;
            getch();
        }
        else
        {
            cout << "  COM pilih = KERTAS  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "  ==> KAMU MENANG ! <==  " << endl;
            player_score++;
            com_score--;
            getch();
        }
    }
    else if (player == "kertas" || player == "Kertas" || player == "3")
    {
        cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "  Kamu pilih = KERTAS  " << endl;

        if (com == 1)
        {
            cout << "  COM pilih = BATU  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "  ==> KAMU MENANG ! <==  " << endl;
            player_score++;
            com_score--;
            getch();
        }
        else if (com == 2)
        {
            cout << "  COM pilih = GUNTING  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << " ==> KAMU KALAH ! <==" << endl;
            player_score--;
            com_score++;
            getch();
        }
        else
        {
            cout << "  COM pilih = KERTAS  " << endl;
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "   ==> SERI ! <==   " << endl;
            getch();
        }
    }
    else if (player == "keluar" || player == "Keluar" || player == "4")
    {
        system("cls");
        cout << "\n Terimakasih, Sudah Bermain :) " << endl;
        cout << "      Bermain Lagi Yah        " << endl;
        getch();
        system("cls");
    }
    else
    {
        cout << "___________________________________" << endl
             << endl;
        cout << " Inputan Salah ! Silahkan Ulangi Kembali " << endl;
        cout << "        ==> Tekan ENTER <==" << endl;
        getch();
        system("cls");
        ingame();
    }
}

// permainan selesai
void end()
{
    system("cls");
    cout << "\n\n\n\n"
         << endl;
    cout << "\t\t\t============================================================================" << endl;
    cout << "\t\t\t                  Kamu Telah Keluar Dari Permainan" << endl;
    cout << "\t\t\t============================================================================" << endl;
    cout << "\t\t\t                             Tekan ENTER ";
    getch();
    system("cls");
}

// jika inputan ronde = 0
void erorinput()
{
    cout << "\n\n\n\n"
         << endl;
    cout << "\t\t\t============================================================================" << endl;
    cout << "\t\t\t                      **** Inputan Kosong ! ****" << endl;
    cout << "\t\t\t                              Ulangi ?" << endl;
    cout << "\t\t\t============================================================================" << endl;
    cout << "\t\t\t                                 y/t ? ";
    cin >> ulangi_ronde;
    if (ulangi_ronde == "y")
    {
        system("cls");
        startgame();
    }
    else
    {
        end();
    }
}

// jika inputan salah/eror
void eror()
{
    cout << "\n\n\n\n"
         << endl;
    cout << "\t\t\t============================================================================" << endl;
    cout << "\t\t\t                      **** Inputan Salah ! ****" << endl;
    cout << "\t\t\t                              Ulangi ?" << endl;
    cout << "\t\t\t============================================================================" << endl;
    cout << "\t\t\t                                 y ? ";
    cin >> ulangi;
    if (ulangi == "y")
    {
        system("cls");
    }
    else
    {
        end();
    }
}

// hasil pertandingan
void result()
{
    system("cls");
    cout << "___________________________________" << endl
         << endl;
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
    cout << "\n Terimakasih, Sudah Bermain :) " << endl;
    cout << "      Bermain Lagi Yah        " << endl;
    getch();
    system("cls");
}
