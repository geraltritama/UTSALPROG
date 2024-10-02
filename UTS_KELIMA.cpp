#include <iostream>
using namespace std;

int main() {
    double tinggi_cm, berat_kg, imt;

    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggi_cm;
    cout << "Masukkan berat badan (dalam kg): ";
    cin >> berat_kg;


    // Rumus BMI = berat (kg) / (tinggi (m) * tinggi (m))
    double tinggi_m = tinggi_cm / 100;
    imt = berat_kg / (tinggi_m * tinggi_m);

    cout << "\nnilai imt: " << imt <<endl;
    cout << "==============================================" << endl;
    cout << "| Nilai IMT            |    Kriteria        |" << endl;
    cout << "==============================================" << endl;
    cout << "|     18,4 kebawah     |     Kurang         |" << endl;
    cout << "|     18,5 - 24,9      |     Ideal          |" << endl;
    cout << "|     25 - 29,9        |     Lebih          |" << endl;
    cout << "|     30 - 39,9        |     Gemuk          |" << endl;
    cout << "|     40 keatas        |     Sangat Gemuk   |" << endl;
    cout << "==============================================" << endl;
    cout << "\nKategori Berat Badan: ";
    if (imt <= 18.4) {
        cout << "Berat badan kurang" << endl;
    } else if (imt >= 18.5 && imt <= 24.9) {
        cout << "Berat badan ideal" << endl;
    } else if (imt >= 25 && imt <= 29.9) {
        cout << "Berat badan lebih" << endl;
    } else if (imt >= 30 && imt <= 39.9) {
        cout << "Gemuk" << endl;
    }else {
        cout << "Sangat gemuk" << endl;
    }

    return 0;
}
