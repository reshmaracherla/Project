#include <iostream>
using namespace std;

void generateSeries(int a) {
    for (int i = 1; i <= a; i += 2) {
        cout << i << " ";
    }
}

int main() {
    int a;

    cout << "Enter the value of 'a': ";
    cin >> a;

    generateSeries(a);

    return 0;
}

