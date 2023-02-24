#include <stdio.h>

int main() {
    int a, b, n;
    printf("Enter the lower bound: ");
    scanf("%d", &a);
    printf("Enter the upper bound: ");
    scanf("%d", &b);

    for (n = a; n <= b; n++) {
        if (1 <= n && n <= 9) {
            // English representation of the integer
            char *ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("%s\n", ones[n-1]);
        }
        else if (n > 9 && n % 2 == 0) {
            printf("even\n");
        }
        else if (n > 9 && n % 2 != 0) {
            printf("odd\n");
        }
    }

    return 0;
}