#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n < 0) {
        n = -n;
    }

    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;  
    }
    cout << count << endl;

    return 0;
}