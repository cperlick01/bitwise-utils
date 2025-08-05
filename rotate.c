/*
Name: Joshua Munoz
Course Section: CSCE 3600.003
Description: This function rotates the first passed integer by the number of bit positions defined by the second passed integer
*/

#include "major1.h"

void rotate(unsigned long long int num, int rotateNum) {

    int right = num >> rotateNum; //shift the first integer to the right by rotateNum bits and store in int variable

    int left = num << (32 - rotateNum); //shift the first int to the left by the difference of rotateNum and 32 and store in int variable

    unsigned int rotated = right | left; //use bitwise OR to combine the right and left results

    printf("%llu rotated by %d position gives: %u\n", num, rotateNum, rotated);
}