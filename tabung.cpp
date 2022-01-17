#include <iostream>
using namespace std;

int main()
{
    float r, t;
    float Volume, Luas;
    float Pi;
    Pi = float(22) / 7;

    cout << "\n Program Sederhana Luas & Volume Tabung\n\n";
    cout << " Masukan Jari-jari lingkaran : ";
    cin >> r;
    cout << " Masukan Tinggi Tabung : ";
    cin >> t;
    Volume = Pi * r * r * t;
    Luas = 2 * Pi * r * (r + t);
    cout << " Volume Tabung adalah         : " << Volume << endl;
    cout << " Luas Permukaan Tabung adalah : " << Luas << endl;
    return 0;
}