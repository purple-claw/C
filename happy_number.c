#include <stdio.h>

// Function to calculate the sum of squares of digits
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is a happy number
int isHappy(int n) {
    int slow = n;
    int fast = n;

    do {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);

    return (slow == 1);
}

int main() {
    // Example usage
    int number = 98;

    if (isHappy(number)) {
        printf("%d is a happy number\n", number);
    } else {
        printf("%d is not a happy number\n", number);
    }

    return 0;
}
