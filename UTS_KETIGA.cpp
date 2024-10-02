#include <iostream>
using namespace std;

float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "\nError: Pembagian dengan nol tidak diperbolehkan!" << endl;
        return 0;
    }
}

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    cout << "=== Program Operasi Matematika ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan operasi (1-4): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;


    switch (pilihan) {
        case 1:
            hasil = tambah(angka1, angka2);
            cout << "Hasil dari Penjumlahan untuk " << angka1 << " + " << angka2 << " adalah " << hasil << endl;
            break;
        case 2:
            hasil = kurang(angka1, angka2);
            cout << "Hasil dari Pengurangan untuk " << angka1 << " - " << angka2 << " adalah " << hasil << endl;
            break;
        case 3:
            hasil = kali(angka1, angka2);
            cout << "Hasil dari Perkalian untuk " << angka1 << " * " << angka2 << " adalah " << hasil << endl;
            break;
        case 4:
            hasil = bagi(angka1, angka2);
            if (angka2 != 0)
                cout << "Hasil dari Pembagian untuk " << angka1 << " / " << angka2 << " adalah " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
