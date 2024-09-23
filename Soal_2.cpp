#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int batas;
    cout << "Masukkan batas deret Fibonacci: ";
    cin >> batas;

    fibonacci(batas);

    return 0;
}
