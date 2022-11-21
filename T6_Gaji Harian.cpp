#include <iostream>
using namespace std;
int pokok (int);
int lembur (int);
int makan (int);
int transport (int);

int main() {
    int jamKerja;
    string nip, nama;

    cout << "NIP: ";
    cin >> nip;
    cout << "\nNama: ";
    cin >> nama;
    cout << "\nJumlah jam kerja: ";
    cin >> jamKerja;
    cout << endl;

    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji pokok: " << pokok (jamKerja) << endl;
    cout << "Lembur: " << lembur (jamKerja) << endl;
    cout << "Uang Makan: " << makan (jamKerja) << endl;
    cout << "Transport: " << transport (jamKerja) << endl;
}

    int pokok (int jamKerja){
    if (jamKerja <=8) {
        return jamKerja*7500;
    } else {
        return jamKerja*7500;}
    }

    int lembur (int jamKerja){
    if (jamKerja > 8) {
        return ((jamKerja*7500*1.5)-(jamKerja*7500));
    } else {
        return 0;}
    }

    int makan (int jamKerja){
    if (jamKerja >= 9) {
        return 10000;
    } else {
        return 0;}
    }

    int transport (int jamKerja){
    if (jamKerja >= 10) {
        return 13000;
    } else {
        return 0;}
    }


