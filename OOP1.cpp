#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kodemk;
	string namamk;
	int sks;
public:
	void inputdata();
	void tampildata();
};

void Matakuliah::inputdata() {
	cout << "\nMasukkan Kode Mata Kuliah : ";
	cin >> kodemk;
	cout << "Masukkan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukka SKS Mata Kuliah : ";
	cin >> sks;
}

void Matakuliah::tampildata() {
	cout << "\nKodeMK : " << kodemk << endl;
	cout << "NamaMK : " << namamk << endl;
	cout << "Jumlah SKS : " << sks << endl;
}

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.inputdata();
	mk.tampildata();
}