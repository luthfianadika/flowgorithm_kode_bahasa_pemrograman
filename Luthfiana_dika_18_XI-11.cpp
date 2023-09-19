#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int alas;
    int tinggi;
    double luas;

	cout << "Masukan Alas :" ;
    cin >> alas;
    cout << "Masukan Tinggi :" ;
    cin >> tinggi;
    luas = alas * tinggi * 0.5;
    cout << "Luas segitiga adalah: ";
    cout << luas << endl;
    return 0;
}
