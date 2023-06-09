#include <stdio.h>

int main() {
    int amount, notes[8] = {500, 100, 50, 20, 10, 5, 2, 1}, count[8] = {0};
    printf("Enter the amount: ");
    scanf("%d", &amount);

    for(int i = 0; i < 8; i++) {
        while(amount >= notes[i]) {
            amount -= notes[i];
            count[i]++;
        }
    }

    printf("Total number of notes:\n");
    for(int i = 0; i < 8; i++) {
        printf("%d: %d\n", notes[i], count[i]);
    }

    return 0;
}

