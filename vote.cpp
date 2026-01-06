#include <iostream>
#include <string>
using namespace std;

int main() {
    string merek[50];
    int suara[50] = {0};
    int totalPemilih, totalMerek = 0;

    cout << "=== VOTING MEREK MOBIL ===\n";
    cout << "Jumlah pemilih: ";
    cin >> totalPemilih;
    cin.ignore();

    for (int i = 0; i < totalPemilih; i++) {
        string input;
        cout << "Pemilih ke-" << i + 1 << " pilih merek: ";
        getline(cin, input);

        bool ada = false;
        for (int j = 0; j < totalMerek; j++) {
            if (merek[j] == input) {
                suara[j]++;
                ada = true;
                break;
            }
        }

        if (!ada) {
            merek[totalMerek] = input;
            suara[totalMerek] = 1;
            totalMerek++;
        }
    }

    cout << "\n=== HASIL VOTING ===\n";
    for (int i = 0; i < totalMerek; i++) {
        cout << merek[i] << ": " << suara[i] << " suara\n";
    }

    return 0;
}
