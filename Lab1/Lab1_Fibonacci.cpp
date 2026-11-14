// Lab 1 - Exercise: recursive Fibonacci
#include <iostream>
using namespace std;

long long fib(int n) {
    if (n == 0) return 0;                  // base case 1
    if (n == 1) return 1;                  // base case 2
    return fib(n - 1) + fib(n - 2);        // recursive case
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "fib(" << n << ") = " << fib(n) << endl;
    return 0;
}
