#include <iostream>
using namespace std;

int main() {
    string namaMobil[10];
    long long hargaMobil[10];  
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=== SHOWROOM MOBIL ===\n";
        cout << "1. Input Data Mobil\n";
        cout << "2. Tampilkan Mobil\n";
        cout << "3. Beli Mobil\n";
        cout << "4. Keluar\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Jumlah mobil: ";
            cin >> jumlah;

            for (int i = 0; i < jumlah; i++) {
                cout << "Nama Mobil ke-" << i + 1 << ": ";
                cin >> namaMobil[i];

                string hargaInput;
                cout << "Harga : ";
                cin >> hargaInput;

                hargaMobil[i] = 0;
                for (int j = 0; j < hargaInput.length(); j++) {
                    if (hargaInput[j] != '.') {
                        hargaMobil[i] = hargaMobil[i] * 10 + (hargaInput[j] - '0');
                    }
                }
            }
        } 
        else if (pilihan == 2) {
            cout << "\nDaftar Mobil:\n";
            for (int i = 0; i < jumlah; i++) {
                cout << i + 1 << ". " << namaMobil[i]
                     << " - Rp" << hargaMobil[i] << endl;
            }
        } 
        else if (pilihan == 3) {
            int kode, qty;
            cout << "Pilih nomor mobil: ";
            cin >> kode;
            cout << "Jumlah beli: ";
            cin >> qty;

            long long total = hargaMobil[kode - 1] * qty;
            cout << "Total Harga: Rp" << total << endl;
        } 
        else if (pilihan == 4) {
            cout << "Terima kasih telah berkunjung.\n";
        } 
        else {
            cout << "Menu tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}
