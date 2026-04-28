#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;

    cout << "Enter number of items (n): ";
    cin >> n;

    cout << "Enter number of selections (r): ";
    cin >> r;

    long long result = factorial(n + r - 1) /
                      (factorial(r) * factorial(n - 1));

    cout << "Combination with repetition = " << result << endl;

    return 0;
}
