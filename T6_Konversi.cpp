#include <iostream>

using namespace std;
int perkalian(int);
double perkalian (double);
float perkalian (float);

int main()
{
    int a;
    double b;
    float c;

    cout << "Konversi derajat Fahrenheit ke derajat Celcius\n";
    cout << "Masukan derajat Fahrenheit : ";
    cin >> a;
    a = b;
    b = c;

    //Fungsi 1 - Integer
    cout << "Hasil Konversi : " << perkalian (a) << endl;
    //Fungsi 2 - Double
    cout << "Hasil Konversi : " << perkalian (b) << endl;
    //Fungsi 3 - Float
    cout << "Hasil Konversi : " << perkalian (c) << endl;

    return 0;
}
    int perkalian (int bil)
    {
        return ((bil - 32)*5/9);
    }

    double perkalian (double bil)
    {
        return ((bil - 32)*5/9);
    }

    float perkalian (float bil)
    {
        return ((bil - 32)*5/9);
    }
