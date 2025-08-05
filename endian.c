/*NAME: MIRASOL GUIJOSA
COURSE SECTION:CSCE 3600.003
DESCRIPTION: The function extracts the 32-bit number into four bytes and swaps Byte0 with Byte3 and Byte1 with Byte2. Then the 32-bit number and swapped bit number is printed out in a message*/

#include "major1.h"

void endian(unsigned long long int num)
{
	unsigned int Byte0 = (num  & 0xff000000UL) >> 24; //Most significant 8 bits are shifted to the right by 24 bits
	unsigned int Byte1 = (num  & 0x00ff0000UL) >> 8;//8 bits after the most significant bits. They are then shifted right by 8 bits
	unsigned int Byte2 = (num  & 0x0000ff00UL) << 8;//Selects the next 8 bits and shifts them left by 8 bits 
	unsigned int Byte3 = (num  & 0x000000ffUL) << 24;//Least significant 8 bits are shifted left by 24 bits.

	unsigned int swap = Byte0|Byte1|Byte2|Byte3; // The OR operation units the bits into a 32-bit number.

	printf("Endian swap of %lld gives %u\n", num, swap);//prints the user input number and swapped corresponding hexadecimal number.  
}

