#include <iostream>
using namespace std;

struct alamatDetail
{
    string desa
    string kota;
};

struct mahasiswa 
{
    string nama;
    alamatDetail detailAlamat
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs;
    // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data desa : ";
    cin >> mhs.detailAlamat.desa;
    cout << "Isikan data kota : ";
    cin >> mhs.detailAlamat.kota;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa : " << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.detailAlamat.desa << endl;
    cout << "Kota : " << mhs.detailAlamat.kota << endl;
    cout << "Usia : " << mhs.umur << endl;
}