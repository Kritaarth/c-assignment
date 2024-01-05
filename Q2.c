// Write the program for print largest three digit jumping number


#include <stdio.h>

// Function to check if a number is a jumping number
int isJumpingNumber(int num) {
    int prevDigit = -1; // Initialize to a value that won't conflict with any digit
    while (num > 0) {
        int currentDigit = num % 10;
        if (prevDigit != -1 && abs(prevDigit - currentDigit) != 1) {
            return 0; // Not a jumping number
        }
        prevDigit = currentDigit;
        num /= 10;
    }
    return 1; // It's a jumping number
}

int main() {
    int largestJumpingNumber = -1; // Initialize to a value that won't conflict with any valid jumping number

    // Iterate through all three-digit numbers
    for (int num = 100; num <= 999; ++num) {
        if (isJumpingNumber(num) && num > largestJumpingNumber) {
            largestJumpingNumber = num;
        }
    }

    // Check if any jumping number was found
    if (largestJumpingNumber != -1) {
        printf("The largest three-digit jumping number is: %d\n", largestJumpingNumber);
    } else {
        printf("No three-digit jumping number found.\n");
    }

    return 0;
}
