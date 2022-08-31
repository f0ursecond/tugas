#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{
    string raptor_prompt_variable_zzyz;
    int j;
    int tb;
    string g;

    cout << "Gored / Gocar ? = ";
    cin >> g;
     
    if (g == "gored")
    {
        raptor_prompt_variable_zzyz = "Anda memilih goride, masukan jarak yang ingin ditempuh";
        cout << raptor_prompt_variable_zzyz << endl;
        cin >> j;
        if (j <= 5)
        {
            tb = (5 * 2000) + 5000;
            cout << "total biayanya adalah : " + tb << endl;
        }
        else
        {
            if (j <= 10)
            {
                tb = (10 * 2500) + 7500;
                cout << "total biayanya adalah : " + tb << endl;
            }
            else
            {
                if (j <= 15)
                {
                    tb = (15 * 3000) + 10000;
                    cout << "total biayanya adalah : " + tb << endl;
                }
                else
                {
                    cout << "Maaf, jarak yang ingin anda tempuh terlalu jauh" << endl;
                }
            }
        }
    }
    else
    {
        raptor_prompt_variable_zzyz = "Anda memilih gocar, masukan jarak yang ingin ditempuh";
        cout << raptor_prompt_variable_zzyz << endl;
        cin >> j;
        if (j <= 5)
        {
            tb = (5 * 3000) + 15000;
            cout << "total biayanya adalah : " + tb << endl;
        }
        else
        {
            if (j <= 10)
            {
                tb = (10 * 4500) + 17500;
                cout << "total biayanya adalah : " + tb << endl;
            }
            else
            {
                if (j <= 15)
                {
                    tb = (15 * 5000) + 20000;
                    cout << "total biayanya adalah : " + tb << endl;
                }
                else
                {
                    cout << "Maaf, jarak yang ingin anda tempuh terlalu jauh" << endl;
                }
            }
        }
    }

    getch();
    return 0;
}