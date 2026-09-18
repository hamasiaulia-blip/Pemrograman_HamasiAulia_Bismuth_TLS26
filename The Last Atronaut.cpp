#include <iostream>
using namespace std;

int main() {
    int N, K;
    
    cout << "Masukkan N: ";
    cin >> N;
    cout << "Masukkan K: ";
    cin >> K;

    int astronaut[100];
    bool hidup[100];

    for (int i = 0; i < N; i++) {
        astronaut[i] = i + 1;
        hidup[i] = true;
    }

    int jumlah = N;
    int posisi = 0;

    cout << "Urutan eliminasi: ";

    while (jumlah > 1) {
        int hitung = 0;

        while (hitung < K) {
            if (hidup[posisi]) {
                hitung++;
            }

            if (hitung < K) {
                posisi++;
                if (posisi == N)
                    posisi = 0;
            }
        }

        cout << astronaut[posisi] << " ";

        if (astronaut[posisi] % 2 == 0)
            K = K + 2;
        else
            K = K - 1;

        if (K < 2)
            K = 2;

        hidup[posisi] = false;
        jumlah--;

        // Mulai menghitung dari astronaut setelah yang dieliminasi
        posisi++;
        if (posisi == N)
            posisi = 0;
    }

    cout << "\nAstronaut terakhir: ";

    for (int i = 0; i < N; i++) {
        if (hidup[i]) {
            cout << astronaut[i];
        }
    }

    return 0;
}