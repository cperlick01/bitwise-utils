/*
Name: Sydney Kallus
Course Section: CSCE 3600.003
Description: The functionality counts the number of 1's from the binary form of the integer argument
             and outputs '0' if the parity is even and '1' if the parity is odd.
*/

#include "major1.h"

void parity(unsigned long long int num) {

    unsigned long long int tempNum = num; // Placeholder copy of num to perform counting operation on

    // Count all 1's in binary
    int count = 0;
    while (tempNum) {
        count += (tempNum & 1); // Only add 1 to count if last bit is 1
        tempNum >>= 1; // Shift right by one to check the next bit
    }

    if (count % 2 == 0) { // Number of 1's is even (0)
        printf("Parity of %llu is 0\n", num);
    } 
    else { // Number of 1's is odd (1)
        printf("Parity of %llu is 1\n", num);
    }
}