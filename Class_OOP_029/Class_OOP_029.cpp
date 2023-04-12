#include <iostream>
using namespace std;

class Mahasiswa {

private:
    int nim;
    string nama;
public :
    void inputdat() {
        cout << "Masukkan NIM : ";
        cin >> nim;
        cout << "Masukkan Nama : ";
        cin >> nama;
    }
};