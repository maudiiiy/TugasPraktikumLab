#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
private:
    int nrp;
    
public:
    void setnrp(int a) {
        a = nrp;
    }

    int getnrp(){
        return nrp;
    }
};

class Fakultas{
public:
    int kode;
};

int main() {
    // membuat objek mahasiswa 
    Mahasiswa mhs;
    Fakultas fkl;
    
    mhs.setnrp(12345);
    fkl.kode = 22;
    std::cout << "nrp: " << mhs.getnrp() << std::endl;
    std::cout << "kode: " << fkl.kode << std::endl;

    return 0;
};
   