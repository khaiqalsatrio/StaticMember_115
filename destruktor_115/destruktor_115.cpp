#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);  //construktor
	~angka();    //destruktor
	void cetakData();
	void isiData();
};
//Definisi member function
angka::angka(int i) {  //construktor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepas" << endl;

}