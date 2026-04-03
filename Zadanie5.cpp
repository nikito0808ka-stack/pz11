#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Факториал отрицательного числа не определён" << endl;
        return 0;
    }
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << factorial << endl;

    return 0;
}