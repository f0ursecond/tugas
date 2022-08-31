#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float p, l, luas;
	
	cout<<"LUAS PERSEGI PANJANG"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukkan panjang: ";
	cin>>p;
	cout<<"Masukkan lebar: ";
	cin>>l;
	luas = p*l;
	cout<<"Luas nya adalah "<<luas<<endl;
    getch();
    return 0;
}
