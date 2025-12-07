#include <iostream>
#include <string>
using namespace std;


string YolGuvenligiKontrolu (int yuk, int hiz, int kaplama ) {

  int pil =  100; // Baþlangýç pil seviyesi
  pil -= (hiz /10 ) * 5; // Hiz deðerine göre pil seviyesi

  //Pil seviyesi yazdirma ekraný
  cout << " Hesaplanan pil seviyesi: " << pil << endl;

  //1. yuk kontrolu
  if (yuk > 500 ) {
    return "Agir Yuk, araba yolda kaldý, cekici cagýr ";
  }

  else if (yuk < 500) {
    return "Dodge lamborghiniyi gecebilir ,araba ucarak gitti";
  }

  //2. Pil seviyesi kontrolu
  else if (pil< 30) {
    return "Dodge'un pil seviyesi dusuk, araba kaplumbaga gibi gidiyor";
  }

  if (pil > 30) {
    return"Dodge'un pil seviyesi yuksek ,araba bugatti oldu";
  }

 //3. Yukseklik kontrolu
 else if ( kaplama < 50) {
    return "Kaplama cizilmis, para verip düzelt þu kaplamayi! ";
 }

 else if ( kaplama > 50) {

    return "Kaplama duzenli, araba neredeyse ayna oldu";
 }

 //Yum kosullar
 else {
    return "Yol guvenli ";
 }

}


int main (){

  const int  DodgeSayisi = 3;
  int yukler[DodgeSayisi];
  int hizlar[DodgeSayisi];
  int kaplamalar [DodgeSayisi];

  cout <<"Yol guvenligi programi "<< endl;


  // Kullanici verileri diziye giriyor. kaplama hiz pil seviyesi vs
  for (int i = 0; i<DodgeSayisi; i++) {

    cout << "\Dodge" << i+1 << "bilgileri giriniz: " << endl;
    cout <<"Yuk (kg): ";
    cin >> yukler [i];
    cout << "Hiz (m/s): ";
    cin >> hizlar [i];
    cout << "kaplama (parlaklik): ";
    cin >> kaplamalar[i];
  }

  cout << "\n dodge ordusu gidis drumlari  " << endl;

  //Her dodge icin sonucu hesapla ve yazdir
  for (int i=0; i< DodgeSayisi; i++)  {
    string sonuc = YolGuvenligiKontrolu(yukler[i], hizlar[i], kaplamalar[i]);
    cout << "Dodge " << i+1 << ": " << sonuc << endl;
  }


  return 0;

}
