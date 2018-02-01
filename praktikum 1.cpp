#include <iostream>

using namespace std;


string konversiTerbilang(int bil) {
    string satuan[] = { "", "satu ", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan "};

    if (bil == 0) {
        return "nol";
    }

    if (bil < 10) {
        return satuan[bil];
    }

    if (bil == 10) { // khusus untuk sepuluh
        return "sepuluh ";
    }

    if (bil == 11) { // khusus untuk sebelas
        return "sebelas ";
    }

    if (bil < 20) {
        return satuan[bil-10] + "belas ";
    }

    if (bil < 100) {
        return satuan[(bil-(bil%10))/10] + "puluh " + konversiTerbilang(bil % 10);
    }

    if (bil == 100) {
        return "seratus ";
    }

}



void soal1() {
    float bil1, bil2, jumlah, kurang, kali, bagi;

    cout<<"Soal I"<<endl;
    cout<<"Masukan bil pertama : "; cin>>bil1;
    cout<<"Masukan bil kedua   : "; cin>>bil2;

    jumlah = bil1 + bil2;
    kurang = bil1 - bil2;
    kali = bil1 * bil2;
    bagi = bil1 / bil2;

    cout<<endl;
    cout<<"Hasil jumlah : "<<jumlah<<endl;
    cout<<"Hasil kurang : "<<kurang<<endl;
    cout<<"Hasil kali   : "<<kali<<endl;
    cout<<"Hasil bagi   : "<<bagi<<endl;
    cout<<endl<<endl<<endl;
}


void soal2() {
    string hasil;
    int bil;

    cout<<"Soal II"<<endl;
    cout<<"Masukan bilangan Bulat antara 0 sampai 100 : "; cin>>bil;
    cout<<endl;

    while ((bil < 0) || (bil > 100)) {
        cout<<"Input yang anda masukan salah"<<endl;
        cout<<"Masukan bilangan Bulat antara 0 sampai 100 : "; cin>>bil;
        cout<<endl;
    }

    hasil = konversiTerbilang(bil);

    cout<<"Hasil terbilangnya : "<<hasil<<endl;
    cout<<endl<<endl<<endl;
}



void soal3() {
    int i, j, k, bil;

    cout<<"Soal III"<<endl;
    cout<<"Masukan bilangan Bulat antara 1 sampai 5 : "; cin>>bil;
    cout<<endl;

    while ((bil < 1) || (bil > 5)) {
        cout<<"Input yang anda masukan salah"<<endl;
        cout<<"Masukan bilangan Bulat antara 1 sampai 5 : "; cin>>bil;
        cout<<endl;
    }

    while (bil > 0) {
        i = bil;
        j = bil;
        while (i > 0) {
            cout<<i--<<" ";
        }
        cout<<"* ";
        k = 1;
        while ((j > 0) && (k <= bil)) {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
        bil--;
    }
    cout<<"*";



    cout<<endl<<endl<<endl;
}
