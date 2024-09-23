#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
