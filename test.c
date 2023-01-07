/*
    Libraries
    ==========================================
    include any libraries you use here
*/

#include <stdio.h>


/*
    Global variables
    ==========================================
    The below are global variables you may need in this program. You can use them anywhere in your code.
        e.g., printf("%d", IMAGE_FILE_NAME) anywhere in your code will print image.in
    Global variables are variables that can be used anywhere in the code.
    Do not change their values!

    Note 1: It is not advised to use global variables unless you need to define variables that will be used everywhere in your code.
    Note 2: You should be able to solve this project without defining ANY global variables
*/

char IMAGE_FILE_NAME[] = "image.in";


/*
    Function prototypes
    ==========================================
    Check the function definitions below for more
    information about each function

    Note 1: Do NOT modify the names, return types, or arguments of these functions.
    Note 2: You are allowed to create additional functions if you need to.
*/

int mainMenu();
int isPrime(int number);
void primesInRange(int rangeEnd);
void sieve(int numbers[], int arraySize);
void primesInRangeSieve(int numbers[], int arraySize);
void flipImageVertically(int rows, int columns, int image[rows][columns]);
void rotateImageClockwise(int rows, int columns, int image[rows][columns]);

/* Helper functions */
int extractImageRows(char fileName[]);
int extractImageColumns(char fileName[]);
void readImageFromFile(char fileName[], int rows, int columns, int image[rows][columns]);
void drawImageFromFile(char fileName[], int rows, int columns);
void storeImageInFile(int rows, int columns, int image[rows][columns], char fileName[]);


/*
    The main function
    ==========================================
    No need to implement this, we already implemented it for you!
    It calls the mainMenu function and keeps calling it until it returns 1.
    When it does, it exits the program.
*/
int main() {
    int shouldExit;
    do {
        shouldExit = mainMenu();
    } while (shouldExit != 1);
    printf("Thanks for using this program!\n");
    return 0;
}


/*
    Function definitions
    ==========================================
    Note 1: Do NOT modify the names, return types, or arguments of these functions.
    Note 2: You are allowed to create additional functions if you need to, but you HAVE TO
    implement all of these functions.
*/



/*
    TODO: Displays the main menu of the program and processes the user's choice.
    RETURNS 1 to main if the user chooses to Exit, otherwise RETURNS 0.
    
    The main menu contains the following functionalities:
    1 -> Check if a number is prime
    2 -> List all prime numbers from 1 to a number
    3 -> Use the Sieve of Eratosthenes algorithm to print prime numbers from 1 to a number
    4 -> Flip an image vertically
    5 -> Rotate an image clockwise
    6 -> Exits the program

    If the user enters any other number, PRINT "Invalid Choice" and RETURN 0.
*/
int mainMenu() 
{
    int choice;

    printf("\n\nWelcome! Please choose one of the following options:\n");
    printf("1. Check if a number is prime.\n");
    printf("2. List all prime numbers from 1 to a number.\n");
    printf("3. Use the Sieve of Eratosthenes algorithm to print prime numbers from 1 to a number.\n");
    printf("4. Flip an image vertically.\n");
    printf("5. Rotate an image clockwise.\n");
    printf("6. Exit the program.\n");

    printf("Please enter your choice: ");
    scanf("%d", &choice);
int number;
    switch(choice) {
        case 1: 
            printf("Enter a number: ");
            scanf("%d", &number);
            if (isPrime(number)) {
                printf("%d is prime.\n",number);
            } else {
                printf("%d is not prime.\n",number);}
            break;    
        case 2: {
        int rangeEnd;
        printf("Enter a number to print all primes from 1 to the number: ");
        scanf("%d", &rangeEnd);
        primesInRange(rangeEnd);
        break;
        }
        
        case 6: {
            return 1;
        }
        default: {
            printf("Invalid choice.\n");
        }
        return 0;
    
    
    }
}


/*
    TODO: Checks if a number is prime or not.
    
    It RETURNS 1 if the number is prime, otherwise it returns 0.
*/
int isPrime(int number)
{
    if (number <= 1) return 0; 
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) return 0;
    }

    return 1; 
}


/*
    TODO: PRINTS the prime numbers from 1 to rangeEnd.

    Uses the function isPrime to check if each number is prime or not.
*/
void primesInRange(int rangeEnd)
{
    for (int i = 2; i <= rangeEnd; i++) {
        if (isPrime(i)) {
            printf("%d, ", i);
        }
    }
}


/*
    TODO: Uses the Sieve of Eratosthenes algorithm to find prime numbers from 1 to a number
*/
void sieve(int numbers[], int arraySize) {
    return;
}


/*
    TODO: PRINTS prime numbers from an array prepared by the function sieve.
*/
void primesInRangeSieve(int numbers[], int arraySize) {
    return;
}


/*
    TODO: Flips the image in image[rows][columns] vertically and writes it to the file
    "image.in" using the storeImageInFile function.
*/
void flipImageVertically(int rows, int columns, int image[rows][columns]) {
    return;
}


/*
    TODO: Rotates the image in image[rows][columns] clockwise and writes it to the file
    "image.in" using the storeImageInFile function.
*/
void rotateImageClockwise(int rows, int columns, int image[rows][columns]) {
    return;
}


/*
    TODO: Extracts an image's number of rows from an image file
*/
int extractImageRows(char fileName[]) {
    return 0;
}


/*
    TODO: Extracts an image's number of columns from an image file
*/
int extractImageColumns(char fileName[]) {
    return 0;
}


/*
    TODO: Reads an image from a file and stores it in the array image[rows][columns].
*/
void readImageFromFile(char fileName[], int rows, int columns, int image[rows][columns]) {
    return;
}


/*
    TODO: Reads an image from a file and uses the showArray function to print it.
*/
void drawImageFromFile(char fileName[], int rows, int columns) {
    return;
}


/*
    TODO: Stores an image in a file.
*/
void storeImageInFile(int rows, int columns, int image[rows][columns], char fileName[]) {
    return;
}
