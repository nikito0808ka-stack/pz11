#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Не простое" << endl;
        return 0;
    }
    if (n == 2) {
        cout << "Простое" << endl;
        return 0;
    }
    if (n % 2 == 0) {
        cout << "Не простое" << endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Простое" << endl;
    } else {
        cout << "Не простое" << endl;
    }
    return 0;
}