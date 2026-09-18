#include <iostream>
#include <string>
using namespace std;

int main() {
    string pesan, hasil = "";
    int sebelumnya = 0;

    cout << "Masukkan pesan: ";
    cin >> pesan;

    for (int i = 0; i < pesan.length(); i++) {
        int nilai = pesan[i] - 'A' + 1;

        nilai = nilai + sebelumnya;

        if (nilai > 26)
            nilai = nilai - 26;

        hasil = hasil + char('A' + nilai - 1);

        sebelumnya = pesan[i] - 'A' + 1;
    }

    cout << "Pesan setelah disandi: " << hasil << endl;

    return 0;
}