#include <iostream>
using namespace std;

void arr() {
    int arr[9];
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

int main () {
    arr();
    sum();
    return 0;
}