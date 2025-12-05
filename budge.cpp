#include <iostream>
#include <fstream>
using namespace std;

class Drone {
private:
    int yuk, hiz, yukseklik, pil, elektrik_atisi_menzili ;

public:
    Drone(int y, int h, int ys, int p, int etm ) {
        yuk = y;
        hiz = h;
        yukseklik = ys;
        elektrik_atisi_menzili = etm;
        pil = p;
    }

    string ucusGuvenligiKontrol() {
        if (yuk > 500)
            return "Aðýr yük - Uçuþ reddedildi!";
        else if (pil < 30)
            return "Pil yetersiz - Uçuþ ertelendi!";
        else if (yukseklik > 200)
            return "Yükseklik sýnýrý aþýldý!";
        if (elektrik_atisi_menzili < 1000)
            return "Atis menzili içinde - elektrik dalgasý atýldý";
        else if (elektrik_atisi_menzili > 1000)
            return"Atis menzili disinda elektrik dalgasi atilamadi";
        else
            return "Drone uçuþa hazýr.";
    }

    void verileriKaydet(ofstream &dosya) {
        dosya << yuk << " " << elektrik_atisi_menzili <<" " << hiz << " " << yukseklik << " " << pil << endl;
    }
};

int main() {
    Drone d(300, 50, 150, 80,860);
    Drone d2(301, 51, 151, 81, 861);
    Drone d3(302, 52, 152, 82, 862);

    cout << d.ucusGuvenligiKontrol() << endl;

    ofstream dosya("veri.txt");
    if (!dosya) {
        cout << "Dosya açýlamadý!" << endl;
        return 1;
    }

    d.verileriKaydet(dosya);
    d2.verileriKaydet(dosya);
    d3.verileriKaydet(dosya);
    dosya.close();

    cout << "Veriler dosyaya yazildi." << endl;
    return 0;
}
