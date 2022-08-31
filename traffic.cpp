#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


int main(int argc, char const *argv[])
{

    string lampu;
    cout << "Pilih Lampu Merah / Hijau = ";
    cin >> lampu;

    if(lampu == "Merah"){
        cout << "Berhenti" << endl;
    } else if(lampu == "Hijau"){
        cout << "Silahkan Jalan" << endl;
    } else {
        cout << "Error" << endl;
    }

    return 0;
    getch();
}
