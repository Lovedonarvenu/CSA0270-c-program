#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Input number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reverse of %d = %d", num, rev);

    return 0;
}

