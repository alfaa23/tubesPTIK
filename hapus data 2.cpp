#include <iostream>
#include <conio.h> // Digunakan untuk fungsi getch()

const int MAX_DATA = 100; // Jumlah maksimum elemen data

// Variabel global (asumsikan variabel ini sudah dideklarasikan di bagian program lainnya)
int jumlahData = 0;
std::string provinsi[MAX_DATA]; // Asumsikan provinsi adalah array string

// Fungsi untuk menghapus data
void hapusData();

int main() {
    // Logika program utama ditempatkan di sini

    // Contoh penggunaan:
    // Tambahkan beberapa data sampel
    provinsi[0] = "Provinsi A";
    provinsi[1] = "Provinsi B";
    jumlahData = 2;

    // Tampilkan menu atau lakukan tindakan lain
    hapusData();

    // Bagian program lainnya

    return 0;
}

void hapusData() {
    int nomorHapus;
    std::cout << "Hapus data ke-";
    std::cin >> nomorHapus;

    if (nomorHapus >= 1 && nomorHapus <= jumlahData) {
        --nomorHapus;

        for (int i = nomorHapus; i < jumlahData - 1; ++i) {
            provinsi[i] = provinsi[i + 1];
        }

        --jumlahData;
        system("cls");
        std::cout << "\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-" << nomorHapus + 1 << " Terhapus ++++++++++++++++++++++++++++++";
        getch();
        system("cls");
    } else {
        system("cls");
        std::cout << "Nomor data tidak valid.";
        getch();
        system("cls");
    }
}

