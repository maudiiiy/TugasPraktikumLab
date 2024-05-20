#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nama;
    int umur;
    string nrp;
    int nilai;

    void tampilkan_info(){
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "NRP: " << nrp << endl;
    }
    void tampilkan_nilai(){
        cout << "Nilai: " << nilai << endl;
    }
};

int main (){
     // membuat objek dari kelas robot
    Mahasiswa mhs1;

    // memberi nilai atribut
    mhs1.nama = "ilham";
    mhs1.umur = 20;
    mhs1.nrp = "2C123123";
    mhs1.nilai = 90;

    // memanggil metode
    mhs1.tampilkan_info();
    mhs1.tampilkan_nilai();

    // membuat objek dari kelas robot
    Mahasiswa mhs2;

    // memberi nilai atribut
    mhs2.nama = "rizal";
    mhs2.umur = 21;
    mhs2.nrp = "2C123321";
    mhs2.nilai = 78;

    // memangil metode
    mhs2.tampilkan_info();
    mhs2.tampilkan_nilai();

    // membuat objek dari kelas robot
    Mahasiswa mhs3;

    // memberi nilai atribut
    mhs3.nama = "raffi";
    mhs3.umur = 22;
    mhs3.nrp = "2C123122";
    mhs3.nilai = 98;

    // memanggil metode
    mhs3.tampilkan_info();
    mhs3.tampilkan_nilai();

return 0;
}