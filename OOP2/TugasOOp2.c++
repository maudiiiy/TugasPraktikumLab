#include <iostream>
#include <string>

class Mahasiswa {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string prodi;
    std::string fakultas;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Mahasiswa(std::string n, std::string p, std::string f, int u) {
        nama = n;
        prodi = p;
        fakultas = f;
        umur = u;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    //Setter untuk mengatur prodi
    void setProdi(std::string p) {
        prodi = p;
    }

    // Getter untuk mendapatkan prodi
    std::string getProdi() {
        return prodi;
    }

    //Setter untuk mengatur prodi
    void setFakultas(std::string f) {
        fakultas = f;
    }

    // Getter untuk mendapatkan prodi
    std::string getFakultas() {
        return fakultas;
    }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << ", Prodi: " << prodi << ", Fakultas: " << fakultas << std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs("Maudi", "Agribisnis", "Fastek", 20);

    // Mendapatkan nama dan umur menggunakan getter
    std::cout << "Nama: " << mhs.getNama() << std::endl;
    std::cout << "Umur: " << mhs.getUmur() << std::endl;
    std::cout << "Prodi: " << mhs.getProdi() << std::endl;
    std::cout << "Fakultas: " << mhs.getFakultas() << std::endl;

    return 0;
}