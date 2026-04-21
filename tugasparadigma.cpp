#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;

    void printdata()
    {
        cout << "Nama Barang :" << nama << endl;
        cout << "Jumlah :" << jumlah << endl;
        cout << "Kategori :" << kategori << endl;
        cout << "Tanggal Produksi :" << TanggalProduksi << endl;
    }
};

int main()
{
    Barang elektronik;
    elektronik.nama = "hp";
    elektronik.jumlah =5;
    elektronik.kategori = "Elektronik";
    elektronik.TanggalProduksi = "2026.01.07";
    elektronik.printdata();
    cout << endl;

    Barang Non;
    Non.nama = "meja";
    Non.jumlah = 10;
    Non.kategori = "Non Elektronik";
    Non.TanggalProduksi = "2026.04.07";
    Non.printdata();
}