
using System;

class Program
{
    // Function to calculate factorial
    static long Factorial(int n)
    {
        long fact = 1;

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        return fact;
    }

    static void Main()
    {
        int n, r;

        Console.Write("Enter number of items (n): ");
        n = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter number of selections (r): ");
        r = Convert.ToInt32(Console.ReadLine());

        long result = Factorial(n + r - 1) /
                      (Factorial(r) * Factorial(n - 1));

        Console.WriteLine("Combination with repetition = " + result);
    }
}
