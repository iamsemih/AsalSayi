#include <iostream>
#include <conio.h>
using namespace std;
// SEMIH SAHIN ASAL SAYI

bool asal(unsigned int x){
	unsigned int i=x;
	do{
		i--;
		if (x%i==0){
			return false;
		}
	}while(i>2);
	return true;
}

int main(){
	unsigned int sayac=3;
	cout << "1 - 100 arasi asal sayilar:\n\n2";
	while (sayac<=100){
		if (asal(sayac)==true){
			cout << ", " << sayac;
		}
		sayac++;
	}
	getch();
	return 0;
}
