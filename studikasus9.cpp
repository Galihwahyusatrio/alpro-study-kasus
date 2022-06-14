#include <iostream>
using namespace std;

class andi{
  public:
    void data();
    void penyortiran();
    void konvers();
  private:
    int buku[24],buku2[12][12];
    int baris, kolom, konversi ;
	  int i=0;
};

void andi::data(){
  cout << "Masukkan data nomor dari 24 buku: \n";
  cout<<endl;
  for(int i=0; i<24; i++){
    cout << "Nomor Buku ke-["<< i <<"]: ";
    cin >> buku[i];
  }
  cout << "\nTampilan data : ";
  for(int i=0; i<24; i++){
    cout << buku[i] << " ";
  }
}

void andi::penyortiran(){
  for (int i=0; i<24; i++){ 
    for(int j= i+1; j<24; j++ ){
      if (buku[i]>buku[j]){
        konversi=buku[i];
        buku[i]=buku[j];
        buku[j]=konversi;   
      }
    }
  }
  for(int i=0; i<24; i++){
    cout << buku[i] << " ";
  }
}

void andi::konvers(){
  int i=0;
  cout << "Masukkan banyak kolom: ";
  cin >> kolom;
  cout<<endl;
  cout << "Masukkan banyak baris: ";
  cin >> baris;
  for(int k=0; k<baris; k++){
  	for(int l=0; l<kolom; l++){
  		buku2[k][l] = buku[i];
  		i++;
	  }
  }
  cout << endl;
  for(int k=0; k<baris; k++){
  	for(int l=0; l<kolom; l++){
  		cout << buku2[k][l] << " ";
	  }
	  cout << endl;
  }
}
int main(){
  andi saya;
  saya.data();
  cout << endl << endl;
  cout << "Hasil pengurutan nomor buku : ";
  saya.penyortiran();
  cout << endl;
  saya.konvers();
  return 0;
}
