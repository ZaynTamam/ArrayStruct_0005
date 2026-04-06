#include <iostream>
#include <string>
using namespace std;

struct alamatDetail
{
    string desa;
    string kota;
};

struct mahasiswa 
{
    string nama;
    alamatDetail detailAlamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs[3];
    // mengisi data
    for (int i = 0; i <= 2; i++)
    
    {
    cout << "Isikan data nama : ";
    getline(cin, mhs[i].nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs[i].detailAlamat.desa);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].detailAlamat.kota);
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();

    cout << "Data Mahasiswa ke-" << i + 1 << " : " << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Desa : " << mhs[i].detailAlamat.desa << endl;
    cout << "Kota : " << mhs[i].detailAlamat.kota << endl;
    cout << "Usia : " << mhs[i].umur << endl;
    }
}