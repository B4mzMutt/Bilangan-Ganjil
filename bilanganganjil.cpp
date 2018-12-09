#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int bilangan;
	cout<<"Masukan Bilangan : ";
	cin>>bilangan;
	if(bilangan %2 == 0)
		cout<<"Bilangan Genap"<<endl;
	else
		cout<<"Bilangan Ganjil"<<endl;

	cin.get();
	return 0;
}