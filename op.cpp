#include <iostream>
using namespace std;

int main (){

    int yuk, hiz, yukseklik, saglamlik, atis_menzili ;
    int pil = 100;

    cout << "Tasiyacagi yuk (gram) giriniz: ";
    cin >> yuk;

    cout << "Drone hizi (m/s) giriniz (Maksimum 200 olabilir): ";
    cin >> hiz;


    cout << "Yukseklik (m) giriniz: ";
    cin >> yukseklik;


    cout <<"Saglamlik (%) giriniz: ";
    cin >> saglamlik;


    cout << "Atis menzili (m) giriniz: ";
    cin >> atis_menzili;

    pil -= (hiz / 10) * 5;

    if (yuk > 500) {
        cout << "Agir yuk, ucamaz!" << endl;
    }

    else if (pil < 30) {
        cout << "Pil seviyesi dusuk, ucus guvensiz!" << endl;
    }

    else if (yukseklik > 200) {
        cout << "Radar disi, ucus guvensiz!" << endl;
    }

     else if (yukseklik < 20 ) {
        cout << "Yukseklik guvensiz, ucus guvensiz!" << endl;
    }

    else if (saglamlik < 50 ) {
        cout << "Saglamlık az, dronu yere indir!" << endl;
    }

    if (atis_menzili < 1000 ) {
        cout << "Atis menzili içinde, hedefe kilitlenildi" << endl;
    }

    else if (atis_menzili > 1000 ) {
        cout << "Atis menzili disinda, hedefe kilitlenilemedi" << endl;
    }

     else {
        cout << "Ucus guvenli! Kalan pil: %" << pil << endl;
    }

 return 0;
}
