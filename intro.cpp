#include <iostream>
#include <cmath>
using namespace std;

void arr() {
    int t = 1;

    for (int i = 0; i < 10; i++) {
        t++;
        cout << t << "\n";
    }
}

void sum() {
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        sum += i;
    }
    cout << "The sum of numbers btw 1 and 100 is:" << sum << endl;
}

int calculations(int x, int y) {
    int power = pow(y, 3);
    float product = power * x * y;
    return product;
}

int main () {
    arr();
    sum();
    int result = calculations(4, 3);
    cout << result << "\n";
    return 0;
}