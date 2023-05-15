#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printALL();
    mahasiswa(string pnama) :nama(pnama) { (setID); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
    id = ++nim;
}

void mahasiswa::printALL() {
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
}

void main() {
    mahasiswa mhs1("Lia kurnia");
    mahasiswa mhs2("asroni");
    mahasiswa mhs3("andi kurniawan");
    mahasiswa mhs4("joko purjo");