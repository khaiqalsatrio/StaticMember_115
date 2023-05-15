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

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << "="; cin >> arr[i];
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << "="; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //construktor
	angka *ptrBelajarcpp = new angka(5); //construktor dipanggil
	delete ptrBelajarcpp; //destruktor dipanggil

	return 0;
}//Destruktor Dipanggil