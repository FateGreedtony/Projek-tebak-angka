#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    char ulang;
    
    cout << "===== Game Tebak Angka =====" << endl;
    do {
        srand(time(0));
        int angkaRandom = rand() % 10 + 1;
        int tebakan;
        int percobaan = 0;    
        do{
            cout << "Masukkan tebakan mu dari angka 1-10!" << endl;
            cin >> tebakan;
            percobaan++;
    
            if(tebakan < angkaRandom){
                cout << "Salah! Angkanya tebakanny terlalu rendah! coba lagi!" << endl;
            } else if(tebakan > angkaRandom){
                cout << "Salah! Angka tebakan mu terlalu tinggi! coba lagi!" << endl;
            } else {
                cout << "Yeee, tebakan mu benar dipercobaan ke-" << percobaan << "! jawabannya adalah " << angkaRandom << endl;
            }
        } while(tebakan != angkaRandom);
        cout << "Mau main lagi? [Y/N]" << endl;
        cin >> ulang;
    } while(ulang == 'y' || ulang == 'Y');
    cout << "Okeh, silahkan datang lagi!" << endl;

    system("pause");
    return 0;
}