#include <iostream>
using namespace std;

int main() {
	
    int hari, jmlhPenjualan = 0;
    cout << "Masukkan jumlah hari penjualan: ";
    cin >> hari;

    int penjualan[hari];
    int total = 0, maxPenjualan = 0, hariTerbaik = 0;

    while (jmlhPenjualan < hari) { 
        cout << "Masukkan penjualan untuk hari ke-" << jmlhPenjualan + 1 << ": ";
        cin >> penjualan[jmlhPenjualan];

        total += penjualan[jmlhPenjualan];

        if (penjualan[jmlhPenjualan] > maxPenjualan) {
            maxPenjualan = penjualan[jmlhPenjualan];
            hariTerbaik = jmlhPenjualan + 1;
        }
        jmlhPenjualan++;
    }
          
    double rataRata = (total) / hari;

    cout << "\nTotal Penjualan: " << total << endl;
    cout << "Rata-rata Penjualan per Hari: " << rataRata << endl;
    cout << "Hari dengan Penjualan Tertinggi: Hari ke-" << hariTerbaik 
         << " dengan penjualan " << maxPenjualan << endl;

    return 0;
}
