#include<iostream>
using namespace std;

class toko{
	public:
		void barang();
		int inputan();
		void sorting();
		int searching();
		
	private:
		int n,i,j;
};

void toko::barang(){
	cout << "======= TOKO KELONTONG =======\n";
	cout << "Penginputan Informasi Barang ";
	cout << "\n";
}
struct barang2{
	char id[30], barang[30], stok[30];
};

int toko::inputan(){
	cout << "\n";
	cout << "Masukkan Jumlah Barang : ";
	cin >> n;
	cout << "-----------------------------\n";
	barang2 m[n];
	for(int i=0; i<n; i++){
		cout << "ID Barang  : ";
		cin >> m[i].id;
		cout << "Nama Barang : ";
		cin >> m[i].barang;
		cout << "Jumlah Stok Barang  : ";
		cin >> m[i].stok;
		cout <<"----------------------------";
		cout <<"\n";
	}
	cout << endl << endl;
	cout << "========= INFORMASI BARANG ===========\n";
	cout << "_____________\n";
	cout << "|ID Barang| Nama Barang|Jumlah Stok  | \n";
	cout << "|_________|____________|______________ \n";
	for(int i=0; i<n; i++){
		cout << "  " << m[i].id << "         " << m[i].barang << "             " << m[i].stok;
		cout << endl;
	}
	return 0;
}
int main(){
	toko kelontong;
	kelontong.barang();
	kelontong.inputan();
}
