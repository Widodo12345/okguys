#include <iostream>
using namespace std;

int main() {


	
	
    char tipeRumahwidodohadi, jenisPembayaran;
    int hargaTunai, angsuranPerBulan;

    // Input tipe rumah dan jenis pembayaran
    
    
    cout << "Masukkan Tipe Rumah widodo hadi (A/B/C/D): ";
    cin >> tipeRumahwidodohadi;

    cout << "Masukkan Jenis Pembayaran (T = Tunai, K = Kredit): ";
    cin >> jenisPembayaran;

    // Tentukan harga sesuai tipe rumah
    switch (tipeRumahwidodohadi) {
        case 'A':
            hargaTunai = 50000000;//asumsikan harga tunai
            angsuranPerBulan = 500000;
            break;
        case 'B':
            hargaTunai = 75000000;//asumsikan harga tunai
            angsuranPerBulan = 750000;
            break;
        case 'C':
            hargaTunai = 85000000; // Asumsikan harga tunai
            angsuranPerBulan = 850000;
            break;
        case 'D':
            hargaTunai = 100000000; // Asumsikan harga tunai
            angsuranPerBulan = 1000000;
            break;
        
    }

    // Tampilkan hasil
    cout << "Harga tunai: Rp" << hargaTunai << endl;
    cout << "Angsuran per bulan: Rp" << angsuranPerBulan << endl;

    return 0;
}
