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
    void tampildata() {
        cout << "\nNIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
    }
};

class Matakuliah {
private:
    string kode;
    string namamk;
    int sks;

public:
    void InputMk();
    void TampilMk();

};

void Matakuliah::InputMk() {
    cout << "\nMasukkan Kode Mata Kuliah : ";
    cin >> kode;
    cout << "Masukkan Nama Mata Kuliah : ";
    cin >> namamk;
    cout << "Masukkan Sks Mata Kuliah : ";
    cin >> sks;
}

void Matakuliah::TampilMk() {
    cout << "\nKode : " << kode << endl;
    cout << "Nama Matakuliah : " << namamk << endl;
    cout << "Jumlah SKS : " << sks << endl;
}

int main()
{
    Mahasiswa mhs;
    Matakuliah mk;
}