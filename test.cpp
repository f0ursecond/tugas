#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, z;
    

    cout << "Hitung Volume Balok" << endl;
    cout << "Masukan Panjang = ";
    cin >> x;

    cout << "Masukan Lebar = "; 
    cin >> y;

    cout << "Masukan Tinggi = ";
    cin >> z;
    
    int v = x * y * z;

    cout << "Jadi Volume Baloknya adalah = " << x << "*" << y << "*" << z << "=" << v << endl;

  
    return 0;
    getch();
     
}
