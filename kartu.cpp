#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
     string kartu;
    string action;
    cout << "Apa kartu anda ? = ";
    cin >> kartu;
    
    if(kartu == "gold"){
        cout << "Ambil bonus / Tukar Poin? = ";
        cin >> action;
        if(action == "Ambil"){
            cout << "Selamat Poin anda Sudah Diambil" << endl;
        } else if (action == "Tukar"){
            cout << "Poin anda sudah tertukar" << endl;
        } 
    } else if (kartu == "premium"){
            cout << "Ambil bonus / Tukar Poin? = ";
            cin >> action;
            if(action == "Ambil"){
                cout << "Selamat Poin anda Sudah Diambil" << endl;
            } else if(action == "Tukar"){
                cout << "Poin anda sudah tertukar" << endl;
            }
            
    } else {
        cout << "Error" << endl;
    }
    getch();
    return 0;
}
