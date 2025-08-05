#include "major1.h"

int main() {

    // Int to hold the user's response for menu selection
    int menuChoice;

    // Int to hold the user's response for the int between 1 and 4294967295
    unsigned long long int numVal;

    // Int to hold the user's response for the rotate amount in Rotate-right
    int rotateAmount;

    do {
        // Display the menu
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeros\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");
        printf("--> ");

        // Read in user's response for menu selection
        scanf("%d", &menuChoice);

        // Prompt for and read in int between 1 and 4294967295, inclusively
        if (menuChoice >= 1 && menuChoice <= 4 ) {
            do {
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%llu", &numVal);
            } while(numVal < 1 || numVal > 4294967295);
        }

        // Process user's response for menu selection
        switch (menuChoice) {
            // Call Count Leading Zeros function
            case 1:
		        countLeadingZeroes(numVal);
                break;

            // Call Endian Swap function
            case 2:
                	endian(numVal);
                break;

            // Call Rotate-right function
            case 3:
                // Prompt for and read in int between 0 and 31, inclusively
                do {
                    printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                    scanf("%d", &rotateAmount);
                } while(rotateAmount < 0 || rotateAmount > 31);
                
                rotate(numVal, rotateAmount); //call rotate function
                break;
            
            // Call Parity function
            case 4:
                parity(numVal);
                break;
            
            case 5:
                printf("Program terminating. Goodbye...\n");
                break;

            default:
                printf("Error: Invalid option. Please try again.\n");
        }

    } while(menuChoice != 5); // Continue loop until (5) EXIT is called

    return 0;
}
