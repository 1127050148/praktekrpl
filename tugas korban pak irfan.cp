#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    int b,d,bb,dd;
    
    cout << "Jumlah jiwa dalam satu keluarga = 5 jiwa\n\n";
    cout << "Berapa jumlah balita dalam satu keluarga? ";
    cin >> b;
    cout << "Berapa jumlah jiwa yang berumur diatas balita? ";
    cin >> d;
    
    if ((bb=7000)&&(dd=12000))
    cout << "Banyaknya biaya yang diterima keluarga korban gempa dalam sebulan adalah = Rp. "<<((b*bb)+(d*dd))*30<<",-"<<endl;
    cout << "Jadi, banyaknya biaya yang dikeluarkan pemerintah dalam 5 bulan untuk 1 keluarga adalah = Rp. "<<(((b*bb)+(d*dd))*30)*5<<",-"<<endl;
    
    getch();
    }
