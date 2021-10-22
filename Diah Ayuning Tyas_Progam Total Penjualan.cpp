#include <iostream>
using namespace std;

int main(){
	int i, jumlah, total, harga = 0, hrg, diskon, potongan;
	string nama;
	char x ;
	
	cout<<"\t\t\tPROGRAM MENGHITUNG TOTAL PENJUALAN\n\n\n";
menu:
	cout << "Masukkan Jumlah Barang : "; cin >> jumlah;
	cout << endl;

	for(i=1; i<=jumlah; i++){
		cout << "Harga Barang Ke-" << i << ": "; cin >> hrg;
		harga = harga+hrg;
	    }

		if(harga > 500){
			diskon = harga - (harga*10/100);			
		}
		else if(harga >= 200 && harga <= 500){
			diskon = harga - (harga*5/100);
		}
		else {
			diskon = harga;
		}

	potongan = harga-diskon;

	cout<< endl;
	cout<< "*********************************" << endl;	
	cout<< "Total Harga \t : Rp. " << harga << endl;
	cout<< "Diskon \t\t : Rp. "<< potongan << endl;
	cout<< "Harga Diskon \t : Rp. " << diskon << endl;
	
    cout<<" "<<endl;

	cout<<"Hitung Lagi [Y/N] ? "; cin>> x;
	if (x == 'y' || x == 'Y'){
		goto menu;
	}
	else if (x == 'N' || x == 'n'){
		cout<< "Terima Kasih..." << endl;
		cout<<" "<<endl;
		cout<<"@Diah Ayuning Tyas";
		
	}
}
