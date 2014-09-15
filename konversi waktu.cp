#include <iostream>
#include <conio.h>
using namespace std;
int main () {
    int waktu,a,d,m,j;
    
    cout << "Konversi Waktu\n";
    cout << "\n\n";
    cout << "Masukan Waktu yang Anda Inginkan...= ";
    cin >> waktu;
    cout << "\n\n";
    
    d=waktu;
    cout << "Detik..= "<<d<<"Detik"<<endl;
    
    m=waktu/60;
    cout << "Menit..= "<<m<<"Menit"<<endl;
    
    j=waktu/3600;
    cout << "Jam..= "<<j<<"Jam"<<endl;
    cout << "\n";
    
    j=waktu/3600;
    a=waktu%3600;
    m=a/60;
    d=waktu%60;
    
    cout << " "<<j<<":"<<m<<":"<<d<<endl;
    
    getch ();
    }
