#include <stdio.h>

int main() {
    int decimalNum, binaryNum = 0, remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * place;
        place *= 10;
        decimalNum /= 2;
    }

    printf("Binary number: %d", binaryNum);

    return 0;
}
