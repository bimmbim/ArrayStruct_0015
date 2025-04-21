#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string jurusan;
};

int main() {
    Mahasiswa mhs;
    cout << "Nama: ";
    cin >> mhs.nama;
    cout << "NIM: ";
    cin >> mhs.nim;
    cout << "Jurusan: ";
    cin >> mhs.jurusan;

    cout << "\nData Mahasiswa\n";
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;

    return 0;
}
