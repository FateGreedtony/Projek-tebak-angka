#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int angkaRandom = rand() % 10 + 1;
    int tebakan;
    int percobaan = 0;
    char ulang;
    

    cout << "===== Game Tebak Angka =====" << endl;
    do{
        cout << "Masukkan tebakan mu dari angka 1-10!" << endl;
        cin >> tebakan;
        percobaan++;

        if(tebakan < angkaRandom){
            cout << "Salah! Angkanya tebakanmy terlalu rendah!" << endl;
        } else if(tebakan > angkaRandom){
            cout << "Salah! Angka tebakan mu terlalu tinggi!" << endl;
        } else {
            cout << "Yeee, tebakan mu benar dipercobaan ke-" << percobaan << "! jawabannya adalah " << angkaRandom << endl;
        }
    } while(tebakan != angkaRandom);

        return 0;
}