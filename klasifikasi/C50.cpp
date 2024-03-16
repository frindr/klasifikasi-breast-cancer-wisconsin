#include <iostream>
using namespace std;

int main() {
    int uniformcellsize, barenuclei, epithelial, uniformcellshape, clumpthickness, blandchromatin, margadhesion;

    // Menerima input dari pengguna
    cout << "Masukkan Nilai Uniformcellsize (1-10)  : ";
    cin >> uniformcellsize;
    cout << "Masukkan Nilai Barenuclei (1-10)       : ";
    cin >> barenuclei;
    cout << "Masukkan Nilai Epithelial (1-10)       : ";
    cin >> epithelial;
    cout << "Masukkan Nilai Uniformcellshape (1-10) : ";
    cin >> uniformcellshape;
    cout << "Masukkan Nilai Clumpthickness (1-10)   : ";
    cin >> clumpthickness;
    cout << "Masukkan Nilai Blandchromatin (1-10)   : ";
    cin >> blandchromatin;
    cout << "Masukkan Nilai Margadhesion (1-10)     : ";
    cin >> margadhesion;
    cout << "\n\n";

    // Menerapkan aturan (rule) untuk memprediksi kelas target
    if (uniformcellsize <= 2) {
        if (barenuclei <= 3) {
            if (epithelial <= 2)
                cout << "Kanker Terindikasi Jinak" << endl;
            else if (uniformcellshape <= 2)
                cout << "Kanker Terindikasi Jinak" << endl;
            else
                cout << "Kanker Terindikasi Ganas" << endl;
        } else {
            if (clumpthickness <= 3)
                cout << "Kanker Terindikasi Jinak" << endl;
            else if (blandchromatin > 2)
                cout << "Kanker Terindikasi Ganas" << endl;
            else if (margadhesion <= 3)
                cout << "Kanker Terindikasi Ganas" << endl;
            else
                cout << "Kanker Terindikasi Jinak" << endl;
        }
    } else {
        if (uniformcellshape <= 2) {
            if (clumpthickness <= 5)
                cout << "Kanker Terindikasi Jinak" << endl;
            else
                cout << "Kanker Terindikasi Ganas" << endl;
        } else {
            if (uniformcellsize > 4)
                cout << "Kanker Terindikasi Ganas" << endl;
            else if (barenuclei > 2)
                cout << "Kanker Terindikasi Ganas" << endl;
            else if (margadhesion <= 3)
                cout << "Kanker Terindikasi Jinak" << endl;
            else
                cout << "Kanker Terindikasi Ganas" << endl;
        }
    }

    return 0;
}
