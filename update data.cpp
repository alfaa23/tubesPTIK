#include <iostream>
#include <cstdlib> // untuk fungsi system("cls")
#include <conio.h> // untuk fungsi getch()

using namespace std;

// Mendefinisikan struktur untuk menyimpan data tentang sebuah wilayah
struct Wilayah {
    string nama_provinsi;
    int jumlah_komunitas;
    int kepala_keluarga;
    int laki_laki;
    int perempuan;
    int SD;
    int SMP;
    int SMA;
    int perguruan_tinggi;
};

const int maxData = 100; // Anda dapat menyesuaikan sesuai kebutuhan
Wilayah provinsi[maxData];
int jumlahData = 0;

void inputData() {
    cout << "Masukkan data wilayah baru:\n";
    cout << "Nama Provinsi: ";
    cin.ignore();
    getline(cin, provinsi[jumlahData].nama_provinsi);
    cout << "Jumlah Komunitas: ";
    cin >> provinsi[jumlahData].jumlah_komunitas;
    // Masukkan data lainnya sesuai kebutuhan

    // Tambahkan 1 ke variabel jumlahData setelah berhasil menambahkan data
    jumlahData++;

    cout << "Data berhasil dimasukkan.\n";
}

void hapusData() {
    // Implementasi fungsi hapusData
    // ...
}

void tampilkanData() {
    // Implementasi fungsi tampilkanData
    // ...
}

void editData() {
    int nomorEdit;
    cout << "Masukkan Nomor Data yang Akan Diedit: ";
    cin >> nomorEdit;

    if (nomorEdit >= 1 && nomorEdit <= jumlahData) {
        --nomorEdit;
        cout << "Nama Provinsi: ";
        cin.ignore();
        getline(cin, provinsi[nomorEdit].nama_provinsi);
        cout << "Jumlah Komunitas: ";
        cin >> provinsi[nomorEdit].jumlah_komunitas;
        // Edit data lainnya sesuai kebutuhan

        cout << "Data berhasil diubah.\n";
        tampilkanData(); // Menampilkan data setelah pengeditan
    } else {
        system("cls");
        cout << "Nomor data tidak valid.\n";
        getch();
        system("cls");
    }
}

int main() {
    char keluar;
    int pilihan;

    do {
        system("cls");
        cout << "\n============================= PROGRAM DATA KOMUNITAS BERDASARKAN REGIONAL ========================================\n";
        cout << "\n\t\t\t                    PROGRAM BY KELOMPOK 1\n\n";
        cout << "\t\t\t                      ASSALAMU'ALAIKUM\n";

        cout << "\n======================================== PILIHAN MENU =====================================\n";
        cout << "1. Masukkan data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Lihat Data\n";
        cout << "4. Edit Data\n";
        cout << "5. Keluar\n\n";
        cout << "Masukkan Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                system("cls");
                inputData();
                break;
            case 2:
                system("cls");
                hapusData();
                break;
            case 3:
                tampilkanData();
                break;
            case 4:
                editData();
                break;
            case 5:
                cout << "\n\n\n\n\n\n\n\n";
                cout << "   APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
                cout << "   [Y]                     [N]                  \n";
                cout << "\n   ";
                cin >> keluar;

                if (keluar == 'y' || keluar == 'Y') {
                    system("cls");
                    cout << "\n\n\n\n\n*********** PROGRAM SELESAI ***********";
                } else if (keluar == 'n' || keluar == 'N') {
                    system("cls");
                }
                break;
            default:
                system("cls");
                cout << "Pilihan tidak valid.\n";
                getch();
                system("cls");
                break;
        }

        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t   PROGRAM BY KELOMPOK 1\n\n";
        cout << "\t\t\t      WASSALAMU'ALAIKUM";
    } while (pilihan != 5);

    return 0;
}

