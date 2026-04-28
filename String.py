# Function to calculate factorial
def factorial(n):
    fact = 1
    for i in range(1, n+1):
        fact *= i
    return fact

# Input
n = int(input("Enter number of items (n): "))
r = int(input("Enter number of selections (r): "))

# Combination with repetition formula
result = factorial(n + r - 1) // (factorial(r) * factorial(n - 1))

print("Combination with repetition =", result)
