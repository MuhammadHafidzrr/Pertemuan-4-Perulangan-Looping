#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int batas;
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    int sumGanjil = 0, sumGenap = 0, sumPrima = 0;

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        sumGanjil += i;
    }

    cout << "\nBilangan Genap: ";
    for (int i = 2; i <= batas; i += 2) {
        cout << i << " ";
        sumGenap += i;
    }

    cout << "\nBilangan Prima: ";
    for (int i = 1; i <= batas; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            sumPrima += i;
        }
    }

    cout << "\n\nJumlah faktor dari bilangan ganjil: " << sumGanjil;
    cout << "\nJumlah faktor dari bilangan genap: " << sumGenap;
    cout << "\nJumlah faktor dari bilangan prima: " << sumPrima;

    return 0;
}
