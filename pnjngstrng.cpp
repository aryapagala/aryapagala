//	Nama		: Arya Nanda Pratama Pagala
//	Stambuk		: 13020190246
//	Kelas		: A5

//		Program menghitung jumlah karakter tanpa fungsi strlen()		//

#include <iostream>
using namespace std;

int main(){
	
	char string[100];
	int jum_karakter;

	cout<<"Masukkan String  : ";
	cin.getline(string, sizeof(string));
	
	jum_karakter = 0;
	for(int i = 0; string[i]; i++){
		jum_karakter++;
	}
	cout<<"Dengan menggunakan perulangan for : "<<jum_karakter<<" karakter"<<endl;
	return 0;
}	
