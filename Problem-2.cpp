#include <iostream>
using namespace std;

void generateSeries(int a) {
    int currentNumber = 1;
    for (int i = 1; i <= a; i++) {
        cout << currentNumber << " ";
        currentNumber += 2;
    }
}

int main() {
    int a;

    cout << "Enter the value of 'a': ";
    cin >> a;

    generateSeries(a);

    return 0;
}
