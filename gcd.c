#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 543;
    int b = 416;
    int res = gcd(a, b);
    printf("%d\n", res);  // Added format specifier and newline character
    return 0;  // Added return statement
}
