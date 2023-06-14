#include <iostream>
#include <vector>
#include <string>
using namespace std;

class pengarang;
class buku;
class penerbit {
private :
	string nama;
	vector<buku*> daftar_buku;
	vector<pengarang*> daftar_pengarang;
public:
	penerbit(string pNama) :nama(pNama) {
		cout << "penerbit \"" << nama << "";
	}
	void tambahbuku(buku*buku) {
		daftar_buku.push_back(buku);
	}
	void cetakBuku();

	void tambahkanPengarang(pengarang* pengarang) {
		daftar_pengarang.push_back(pengarang);
	}
	void cetakPengarang();


};

class pengarang {
private :
	string nama;
	vector<buku*>daftar_buku;
	vector<penerbit*>daftar_penerbit;
public:
	pengarang(string nama) : nama(nama) {}

	string getNamapengarang() {
		return nama;
	}

	void tambahbuku(buku* buku) {
		daftar_buku.push_back(buku);
	}

	void tambahpenerbit(penerbit* penerbit) {
		daftar_penerbit.push_back(penerbit);
	}

	vector<penerbit*> getDaftarPenerbit() {
		return daftar_penerbit;
	}

	vector<buku*> getDaftarBuku() {
		return daftar_buku;
	}
};

class buku {
private:
	string namaBuku;
public:
	buku(string pNama) : namaBuku(pNama) {}

	string getnama() {
		return namaBuku;
	}
};
	
int main() {
	penerbit* varPenerbit1 = new penerbit("Gema Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");
	pengarang* varPengarang1 = new pengarang("joko");
	pengarang* varPengarang2 = new pengarang("lia");
	pengarang* varPengarang3 = new pengarang("asroni");
	pengarang* varPengarang4 = new pengarang("giga");

	varPenerbit1->tambahkanPengarang(varPengarang1);
	varPenerbit1->tambahkanPengarang(varPengarang2);
	varPenerbit1->tambahkanPengarang(varPengarang4);
	varPenerbit2->tambahkanPengarang(varPengarang3);
	varPenerbit2->tambahkanPengarang(varPengarang4);

	varPengarang1;
	varPengarang2;
	varPengarang3;
	varPengarang4;
}