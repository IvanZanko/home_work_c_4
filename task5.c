#include <stdio.h>

int calculateSumOfDigits(int number) {
    int sum = 0;
    
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

int calculateProductOfDigits(int number) {
    int product = 1;
    
    while (number != 0) {
        product *= number % 10;
        number /= 10;
    }
    
    return product;
}

int main() {
    int upperLimit;
    
    do {
        scanf("%d", &upperLimit);
    } while (upperLimit <= 10);
    
    for (int i = 10; i <= upperLimit; i++) {
        if (calculateSumOfDigits(i) == calculateProductOfDigits(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
