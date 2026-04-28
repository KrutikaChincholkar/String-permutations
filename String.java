import java.util.Scanner;

public class CombinationRepetition {

    // Function to calculate factorial
    static long factorial(int n) {
        long fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of items (n): ");
        int n = sc.nextInt();

        System.out.print("Enter number of selections (r): ");
        int r = sc.nextInt();

        long result = factorial(n + r - 1) /
                     (factorial(r) * factorial(n - 1));

        System.out.println("Combination with repetition = " + result);
    }
}
