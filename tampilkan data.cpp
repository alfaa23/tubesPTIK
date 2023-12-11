#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
using namespace std;

struct Provinsi {
    string nama_provinsi;
    int jumlah_komunitas;
    int kepala_keluarga;
    int laki_laki;
    int perempuan;
    int SD;
    int SMP;
    int SMA;
    string perguruan_tinggi;
};

const int jumlahData = 2; // Sesuaikan ini dengan jumlah data sebenarnya
Provinsi provinsi[jumlahData] = {
    {"Jawa Barat"  "Universitas A"},
    {"Sumatera Utara"  "Universitas B"}
}; 

void tampilkanData() {
    system("clear || cls");
    cout << "=========================================================================================================\n";
    cout << left << setw(5) << "No" << setw(18) << "Nama Provinsi" << setw(20) << "Jumlah Komunitas" << setw(20) << "Kepala Keluarga"
         << setw(15) << "Laki-Laki" << setw(15) << "Perempuan" << setw(8) << "SD" << setw(8) << "SMP"
         << setw(8) << "SMA" << setw(20) << "Perguruan Tinggi" << endl;
    cout << "=========================================================================================================\n";

    for (int i = 0; i < jumlahData; ++i) {
        cout << left << setw(5) << i + 1 << setw(18) << provinsi[i].nama_provinsi << setw(20) << provinsi[i].jumlah_komunitas
             << setw(20) << provinsi[i].kepala_keluarga << setw(15) << provinsi[i].laki_laki << setw(15) << provinsi[i].perempuan
             << setw(8) << provinsi[i].SD << setw(8) << provinsi[i].SMP << setw(8) << provinsi[i].SMA
             << setw(20) << provinsi[i].perguruan_tinggi << endl;
    }

    cout << "=========================================================================================================\n";
    cout << "\nTekan Enter untuk melanjutkan...";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
    system("clear || cls");
}

int main() {
    tampilkanData();
    return 0;
}

