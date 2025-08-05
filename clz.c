/*
Name: Claire Perlick
Course Section: CSCE 3600.003
Description: The functionality counts and outputs the number of leading zeros from the binary form of the integer argument
*/

#include "major1.h"

void countLeadingZeroes(unsigned long long int numVal)
{
        //initalizes '0' tally count
        int count=0;

        //iterates through each bit and counts the number of zeros until a '1' is found
        for(int i=31; i>=0; i--)
        {
                int temp=numVal>>i; //assigns the bit value from numVal's 32 bit position
                int x=1; //compares with numVal's bit value to confirm bit number

                if(temp&x)//checks if bit value is '1' or '0'
                {
                        break;
                }
                else
                {
                        count=count+1;//totals number of leading zeros
                }
        }

        //Outputs number of leading zeros
        printf("The number of leading zeros in %lld is %d\n", numVal, count);
}
