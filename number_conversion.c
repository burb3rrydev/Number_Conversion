#include <stdio.h>

int main() {
    int number;

    // Prompt the user to input a number
    printf("Please enter a number between 0 and 1000: ");
    scanf("%d", &number);

    // Check if the input number is within the specified range
    if (number < 0 || number > 1000) {
        printf("Invalid input. The number must be between 0 and 1000.\n");
        return 1; // Exit with an error code
    }

    // Convert the number to binary and print the result
    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");

    // Convert the number to hexadecimal and print the result
    printf("Hexadecimal representation: 0x%X\n", number);

    // Shift the number 10 bits to the left, mask out the lower 10 bits, and OR with 0x3FF
    // Shift the number 10 bits to the left
    int shiftedNumber = number << 10;

    // Mask out the lower 10 bits to 0
    shiftedNumber &= 0xFFFFFC00; // This mask has the lower 10 bits set to 0

    // Logically OR with 0x3FF
    shiftedNumber |= 0x3FF;



    // Print the result in decimal
    printf("Shifted and masked decimal result: %d\n", shiftedNumber);

    // Print the result in hexadecimal
    printf("Shifted and masked hexadecimal result: 0x%X\n", shiftedNumber);

    // Print the result in binary
    // Print the binary representation of shiftedNumber
    printf("Shifted and masked binary result: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (shiftedNumber >> i) & 1);
    }
    printf("\n");

    return 0; // Exit with success
}
