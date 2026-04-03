#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int number;
    int sum = 0;

    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        sum += number;
    }

    cout << sum << endl;

    return 0;
}