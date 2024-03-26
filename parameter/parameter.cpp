// parameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l)
{
    luas = p * l;
}

int fungsiluas(int p, int l)
{
    return p * l;

}

int main()
{
    int panjang, lebar;
    cout << "Masukan Panjang : ";
    cin >> panjang;
    cout << "Masukan lebar : ";
    cin >> lebar;

    prosedurluas(panjang, lebar);
    cout << "luas persegi panjang dengan prosedur: " << luas << endl;

    cout << "luas persegi panjang dengan fungsi: " << fungsiluas(panjang, lebar) << endl;
    return 0;

}
 

