//	Nama		: Arya Nanda Pratama Pagala
//	Stambuk		: 13020190246
//	Kelas		: A5

//		Program membalik string tanpa fungsi strrev()		//


#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char string[100];

	cout<<"Sebelum dibalik : ";
	cin.getline(string, sizeof(string));

	cout<<"Setelah dibalik :";
	for(int i=strlen(string); i>-1; i--){
		cout<<string[i];
	}return 0;
}
