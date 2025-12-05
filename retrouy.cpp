#include <iostream>
#include <fstream>
using namespace std;

class MarketArabasi {
private:
    int yuk, hiz, yer, kullanici ;

public:
    MarketArabasi(int yu, int h, int y, int k ) {
        yuk = yu;
        hiz = h;
        yer = y;
        kullanici = k;
    }

    string ucusGuvenligiKontrol() {
        if (yuk > 30)
            return "Aðýr yük - Market Arabasi gitmez!";
         if (yer < 30)
            return "Market Arabasi bos - Ürün Ekleyebilirsin!";
        else if (yer > 90)
            return " Yer kalmadi - ürün ekleme!";
        if (kullanici > 10 )
            return "Kullanici market arabasi kullana bilir";
        else if (kullanici > 60)
            return"Kullanici yaslý yardýma muhtaç";
        else
            return "Market arabasi kullanilabilir.";
    }

    void verileriKaydet(ofstream &dosya) {
        dosya << yuk << " " << yer <<" " << hiz << " " << kullanici << " " << endl;
    }
};

int main() {
    MarketArabasi ma1(20, 70, 60, 20);
    MarketArabasi ma2(21, 71, 61, 40);
    MarketArabasi ma3(22, 72, 15, 92);

    cout << ma1.ucusGuvenligiKontrol() << endl;

    ofstream dosya("veri.txt");
    if (!dosya) {
        cout << "Dosya açýlamadý!" << endl;
        return 1;
    }

    ma1.verileriKaydet(dosya);
    ma2.verileriKaydet(dosya);
    ma3.verileriKaydet(dosya);
    dosya.close();

    cout << "Veriler dosyaya yazildi." << endl;
    return 0;
}
