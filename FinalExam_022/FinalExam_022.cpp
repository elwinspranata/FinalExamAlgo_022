#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
void tambahMahasiswa();
void tampilkanSemuaMahasiswa();
void algorithmacariMahasiswaByNIM();
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			CariMahasiswaberdasarkanNIM();
			break;
		case 4:
			TampilkanMahasiswaberdasarkanTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


// 2. stack dan Queue

// 3. Stack adalah struktur data yang mengikuti prinsip LIFO(Last - In - First - Out), yang berarti elemen
 //   yang terakhir dimasukkan ke dalam stack akan menjadi elemen pertama yang diambil.Stack
   // mirip dengan tumpukan buku di mana buku terakhir yang ditumpuk adalah yang pertama
      // diambil.

      // Queue adalah struktur data yang mengikuti prinsip FIFO(First - In - First - Out), yang berarti
		 // elemen yang pertama dimasukkan ke dalam queue akan menjadi elemen pertama yang
		 // diambil.Queue mirip dengan antrian di kasir, di mana orang yang pertama datang adalah yang
		 // pertama dilayani.

// 4. Stack dapat digunakan untuk membalik urutan karakter dalam sebuah kata atau 
// kalimat Setiap karakter dimasukkan ke dalam stack menggunakan operasi push, kemudian
// dikeluarkan dengan operasi pop, sehingga urutan karakter dibalik.

// 5. a. 6
//    b. inorder 