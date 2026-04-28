#include <stdio.h>

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
    
    printf("Enter number of items (n): ");
    scanf("%d", &n);

    printf("Enter number of selections (r): ");
    scanf("%d", &r);

    long long result = factorial(n + r - 1) / 
                      (factorial(r) * factorial(n - 1));

    printf("Combination with repetition = %lld\n", result);

    return 0;
}
