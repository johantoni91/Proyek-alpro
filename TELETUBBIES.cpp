#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <iomanip>
#include<stdlib.h>
#include <iostream>
#define z 3
using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ulang();
void pengurangan();
void perkalian();
void transpose();
void determinan();
void invers();
void penjumlahan();
int main()
    {
        system("color a");
        char pilihan;
        char Nama[2000];
        char Kelas[2];
        char ordo[4];
        int a;

        Sleep(1500);
        gotoxy(22,5);cout<<"H";
        Sleep(1000);
        gotoxy(23,5);cout<<"AR";
        Sleep(0200);
        gotoxy(25,5);cout<<"A";
        Sleep(0700);
        gotoxy(26,5);cout<<"P";
        Sleep(0700);
        gotoxy(27,5);cout<<" ";
        Sleep(0700);
        gotoxy(28,5);cout<<"T";
        Sleep(0700);
        gotoxy(29,5);cout<<"U";
        Sleep(0700);
        gotoxy(30,5);cout<<"N";
        Sleep(0700);
        gotoxy(31,5);cout<<"GGU";
        Sleep(0700);
        gotoxy(34,5);cout<<" ";
        Sleep(0700);
        gotoxy(36,5);cout<<"..";
        Sleep(0700);
        gotoxy(38,5);cout<<".";
        Sleep(0700);
        gotoxy(39,5);cout<<"...";
        Sleep(0700);
        gotoxy(42,5);cout<<"....";
        Sleep (0700);
        gotoxy(19,6);cout<<"==";
        Sleep (0700);
        gotoxy(21,6);cout<<"=";
        Sleep (0700);
        gotoxy(22,6);cout<<"===";
        Sleep (0700);
        gotoxy(25,6);cout<<"===";
        Sleep (0700);
        gotoxy(28,6);cout<<"====";
        Sleep (0700);
        gotoxy(32,6);cout<<"==";
        Sleep (0700);
        gotoxy(34,6);cout<<"====";
        Sleep (0700);
        gotoxy(38,6);cout<<"======";
        Sleep (0700);
        gotoxy(44,6);cout<<"===";
        Sleep (0700);
        gotoxy(47,6);cout<<"===";
        system("cls");
        ulang:
        cout<<"Sebelum memulai program yang telah kami buat, silahkan masukkan data diri anda dengan valid"<<endl;
        cout<<"Nama    : "; cin.ignore(); cin.getline(Nama,2000);
        printf("Kelas   : "); cin>>Kelas;
        system("cls");
        if (strcmp(Kelas,"2E")==0 && strcmp(Nama,Nama)==0)
        {
            do{
        printf("                                      SELAMAT DATANG DI TELETUBBIES                                  \n");
        printf("=====================================================================================================\n");
        printf("             Dalam program yang kami buat, anda hanya dapat menghitung matriks ordo 3x3              \n");
        printf("                                    (Dimohon input angkanya saja)                                    \n\n");
        printf("    1. Penjumlahan\n");
        printf("    2. Pengurangan\n");
        printf("    3. Invers\n");
        printf("    4. Determinan\n");
        printf("    5. Perkalian\n");
        printf("    6. Transpose\n");
        printf("\n      pilihan = "); cin>>a;
        system("cls");
        switch(a)
        {
        case 1:
            cout<<endl;
            penjumlahan();
        break;

        case 2:
            cout<<endl;
            pengurangan();
            break;

        case 3:
            cout<<endl;
            invers();
        break;

        case 4:
            cout<<endl;
            determinan();
            break;

        case 5:
            cout<<endl;
            perkalian();
            break;

        case 6:
            cout<<endl;
            transpose();
            break;

        default:
            cout<<endl;
            cout<<"\nSilahkan input data sesuai daftar diatas ;)"<<endl;
        break;
        }
        cout<<"\n Ingin Mengulang Program ? (Y/N) : ";
            cin>>pilihan;
            system("cls");
        }
        while((pilihan=='Y')||(pilihan=='y'));
        }
            else{
                    printf("\n\tMohon maap, aplikasi ini khusus untuk kelas 2E");
                    printf("\n\t\t(dimohon tulis kelas dengan huruf kapital, contoh : 2E)\n");
                    goto ulang;
                    system("cls");}
        cout<<"\nTERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI DENGAN BAIK ;)\n"<<endl;
        getch();
        system("pause");
    }

void penjumlahan()
{
    int A[3][3],B[3][3],C[3][3],D[3][3],E[3][3],i=0,j=0;
    cout<<"\n\tPenjumlahan Matriks 3x3"<<endl;
    cout<<"INPUT MATRIKS A :"<<endl;

    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<"Input elemen baris ke-"<<i+1<<"kolom ke-"<<j+1<<" : ";cin>>A[i][j];
        }
    }
        cout<<endl;cout<<"\nINPUT MATRIKS B"<<endl;

    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<"Input baris ke-"<<i+1<<"kolom ke-"<<j+1<<" : ";cin>>B[i][j];
        }
    }
    cout<<endl<<"================================================"<<endl<<endl;

    cout<<"Tampilan Matriks A : "<<endl<<endl;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<" "<<A[i][j];
        }
    cout<<endl;
    }

    cout<<"Tampilan Matriks B : "<<endl<<endl;

    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<" "<<B[i][j];
        }
    cout<<endl;
        }

    cout<<endl<<"Hasil :"<<endl<<endl;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<" "; C[i][j]=A[i][j]+B[i][j];
        cout<<C[i][j];
    }
        cout<<endl;
    }
}

void invers()
{
    int a[3][3], b, c;
    int det;
    double inv[3][3];
    long kov[3][3], adj[3][3];
   system("color 0a");
   cout << "Invers Matriks 3X3\n";
   cout<<"INPUT MATRIKS :"<<endl;
   for (b = 1; b <= 3; b++) {
         for (c = 1; c <= 3; c++) {
             cout << "Masukkan Angka dari Baris ke " << b << " Kolom ke " << c << " = ";
             cin >> a[b][c];
         }
     }
     cout<<"\n"<<endl;
     cout << "Matriks A = \n";
     for (b = 1; b <= 3; b++) {
         for (c = 1; c <= 3; c++) {
             cout << a[b][c] << "\t";
         }
         cout << endl;
     } /*Mencari Determinan Dengan Sarrus*/
     det = ((a[1][1] * a[2][2] * a[3][3]) + (a[1][2] * a[2][3] * a[3][1]) + (a[1][3] * a[2][1] * a[3][2])) - ((a[3][1] * a[2][2] * a[1][3]) + (a[3][2] * a[2][3] * a[1][1]) + (a[3][3] * a[2][1] * a[1][2]));
     cout << "Determinan Matriks Tersebut = " << det <<"\n"<< endl; /*Mencari kofaktor*/
     kov[1][1] = (a[2][2] * a[3][3]) - (a[3][2] * a[2][3]);
     kov[1][2] = ((a[2][1] * a[3][3]) - (a[3][1] * a[2][3])) * -1;
     kov[1][3] = (a[2][1] * a[3][2]) - (a[3][1] * a[2][2]);
     kov[2][1] = ((a[1][2] * a[3][3]) - (a[3][2] * a[1][3])) * -1;
     kov[2][2] = (a[1][1] * a[3][3]) - (a[3][1] * a[1][3]);
     kov[2][3] = ((a[1][1] * a[3][2]) - (a[3][1] * a[1][2])) * -1;
     kov[3][1] = (a[1][2] * a[2][3]) - (a[2][2] * a[1][3]);
     kov[3][2] = ((a[1][1] * a[2][3]) - (a[2][1] * a[1][3])) * -1;
     kov[3][3] = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);
     cout<<endl;
     cout << "Kofaktor A = \n";
     for (b = 1; b <= 3; b++) {
         for (c = 1; c <= 3; c++) {
             cout << kov[b][c] << "\t";
         }
         cout << endl;
     } /*Mencari Adjoin*/
     cout<<endl;
     cout << "Adjoin Dari Kofaktor A = \n";
     for (b = 1; b <= 3; b++) {
         for (c = 1; c <= 3; c++) {
             adj[b][c] = kov[c][b];
             cout << adj[b][c] << "\t";
         }
         cout << endl;
     } /*Mencari Invers*/
     cout<<endl;
     cout << "Invers Dari Matriks A = \n";
     for (b = 1; b <= 3; b++) {
         for (c = 1; c <= 3; c++) {
             inv[b][c] = (1 / det) * adj[b][c];
             cout << inv[b][c] << "\t";
         }
         cout << endl;
     }
     cout<<endl;
}

void determinan()
{
    int i,j,matriks[3][3]={{0,6,4},{1,1,6},{0,0,1}},det;
    cout<<"\t\t\tDeterminan Matriks 3x3"<<endl<<endl<<endl;
    for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
                {
                    cout<<" Input matriks baris ke "<<i<<" kolom ke "<<j<<" = ";cin>>matriks[i-1][j-1];
                }
        }
    cout<<endl<<endl;
    cout<<" Tampilan matriks yang terinput :"<<endl;
    for(i=1;i<=3;i++)
        {
            cout<<endl<<" ";
    for(int j=1;j<=3;j++)
        {
            cout<<matriks[i-1][j-1]<<" ";
        }
        }

    det /*Determinan Dengan Metode Sarrus*/
    =matriks[0][0]*matriks[1][1]*matriks[2][2]
    +matriks[0][1]*matriks[1][2]*matriks[2][0]
    +matriks[0][2]*matriks[1][0]*matriks[2][1]
    -matriks[0][2]*matriks[1][1]*matriks[2][0]
    -matriks[0][0]*matriks[1][2]*matriks[2][1]
    -matriks[0][1]*matriks[1][0]*matriks[2][2];

    cout<<"\n\n Nilai determinan adalah : "<<det<<endl;
}

void transpose()
{
    int A[10][10],b,c,baris,kolom;
    char pil;
    cout<<"\n"<<endl;
    cout<<"\n\tTranspose Matriks"<<endl;
    cout<<endl;
    for (b=0;b<3;b++)
        {
            for (c=0;c<3;c++)
                {
                    cout<<"Matriks ["<<b+1<<","<<c+1<<"] = ";
                    cin>>A[b][c];
                }
        }
    cout<<endl<<endl;
    cout<<"Matriks Awal : "<<endl<<endl;
    for (b=0;b<3;b++)
        {
            for (c=0;c<3;c++)
                {
                    cout<<" "<<A[b][c]<<" ";
                }
            cout<<endl<<endl;
        }
    cout<<" Matriks Transpose : "<<endl<<endl;
    for (b=0;b<3;b++)
        {
            for (c=0;c<3;c++)
                {
                    cout<<" "<<A[c][b]<<" ";
                }
            cout<<endl;
            cout<<endl;
        }
}

void perkalian()
{
    int A[z][z]={0},B[z][z]={0},C[z][z]={0},D[z][z]={0},E[z][z]={0},i=0,j=0;
    cout<<"Perkalian Matriks 3x3"<<endl;
    cout<<"INPUT MATRIKS A"<<endl;

    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<"Input elemen baris ke-"<<i+1<<"kolom ke-"<<j+1<<" : ";cin>>A[i][j];
        }
    }
        cout<<endl;cout<<"INPUT MATRIKS B"<<endl;

    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<"Input elemen baris ke-"<<i+1<<"kolom ke-"<<j+1<<" : ";cin>>B[i][j];
        }
    }
    cout<<endl<<"================================================"<<endl<<endl;

    cout<<"Tampilan Matriks A : "<<endl<<endl;
    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<" "<<A[i][j];
        }
    cout<<endl;
    }

    cout<<"Tampilan Matriks B : "<<endl<<endl;

    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<" "<<B[i][j];
        }
    cout<<endl;
        }
    cout<<endl<<"Hasil Pekalian matriks A dengan matriks B :"<<endl<<endl;
    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
    for(int x=0;x<z;x++){
        E[i][j]=E[i][j]+A[i][x]*B[x][j];
    }
        cout<<" "<<E[i][j]<<"\t";
    }
        cout<<endl;
    }
}

void pengurangan()
{
    int A[z][z]={0},B[z][z]={0},C[z][z]={0},D[z][z]={0},E[z][z]={0},i=0,j=0;
    cout<<"INPUT MATRIKS A"<<endl;

    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<"Input elemen baris ke-"<<i+1<<"kolom ke-"<<j+1<<" : ";cin>>A[i][j];
        }
    }
        cout<<endl;cout<<"\nINPUT MATRIKS B"<<endl;

    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<"Input elemen baris ke-"<<i+1<<"kolom ke-"<<j+1<<" : ";cin>>B[i][j];
        }
    }
    cout<<endl<<"================================================"<<endl<<endl;

    cout<<"Tampilan Matriks A : "<<endl<<endl;
    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<" "<<A[i][j];
        }
    cout<<endl;
    }

    cout<<"Tampilan Matriks B : "<<endl<<endl;

    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        cout<<" "<<B[i][j];
        }
    cout<<endl;
        }
    cout<<endl<<"Pengurangan matriks A dengan matriks B :"<<endl<<endl;
    for(i=0;i<z;i++){
    for(j=0;j<z;j++){
        D[i][j]=A[i][j]-B[i][j];
        cout<<"  "<<D[i][j]<<"\t";
    }
        cout<<endl;
    }
}
