#include <iostream>
using namespace std;

class Robot {
public:
    string nama;
    int umur;
    string mbti;

    void tampilkan_info(){
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
    }
};

int main (){
     // membuat objek dari kelas robot
    Robot r1;

    // memberi nilai atribut
    r1.nama = "maudina";
    r1.umur = 20;
    r1.mbti = "istj";

    // memanggil metode
    r1.tampilkan_info();

    // membuat objek dari kelas robot
    Robot r2;

    // memberi nilai atribut
    r2.nama = "fenita";
    r2.umur = 21;
    r2.mbti = "infj";

    // memangil metode
    r2.tampilkan_info();

return 0;
}