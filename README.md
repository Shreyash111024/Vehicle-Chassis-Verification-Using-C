# Vehicle-Chassis-Verification-Using-C
Activity no.9




Research ~ 
String operations in C are essential for processing textual data in programs.
 Even though C provides <string.h>, performing operations manually helps understand how strings actually work in memory.
A string in C is an array of characters that ends with a null character (\0).
 Performing string operations manually helps you understand:
● How characters are stored in memory
● How loops handle strings
● How to manipulate arrays
● How built-in string functions internally work
Manual string handling is widely used in:
System-level programming


Embedded systems


Memory-restricted applications


Academic learning & algorithm understanding


Analysis ~ 
To implement basic string operations without built-in functions, we must understand the underlying logic:
1. Length of String
We scan each character until we reach '\0'.
 No built-in counter exists, so loops are required.
2. Copying a String
Copy characters one-by-one from source to destination.
 We must manually insert the terminating '\0'.
3. Comparison of Two Strings
Check each character:
If mismatch → decide which string is greater


If all characters match → strings are equal


4. Concatenation of Strings
Find end of first string, then append second string.
 We must manage destination array size manually.
These operations teach memory indexing, pointer-like behavior, and low-level manipulation.

Ideate ~
Vehicle Chassis Verification 
Definition
 A small C program that lets a user enter two chassis numbers (one from the vehicle, one from the RC book) and then perform string operations: compare them, copy one string to another, compute string length, or concatenate them.
Purpose
 To provide useful string utilities for checking and manipulating chassis numbers — e.g., verifying whether the chassis number on the vehicle matches the one on the RC book, copying or inspecting strings, or joining two values for display.

User input
string1 — chassis number written on the vehicle (entered by user)


string2 — chassis number printed on the RC book (entered by user)


choice — menu choice (1–4) selecting the operation


Additional small choices for which string to operate on (in copy/length options)



Operations (what the program does)
Check vehicle chassis no (Compare)


Uses strcmp(string1, string2) to compare exactly (case-sensitive).


If result == 0 → strings match. Otherwise → strings do not match.


Copy String


Prompts which string to copy (1 → string1, 2 → string2).


Uses strcpy(copy, chosenString) to create a duplicate in copy and prints both original and copied values.


Calculate Length


Asks which string (1 or 2) and uses strlen() to compute the number of characters in that string (excluding the terminating '\0').


Concatenate Strings


Uses strcat(string1, string2) to append string2 onto string1 and prints the concatenated result.



Details saved / internal data
This program only stores the two entered strings and any temporary copies in memory while it runs. It does not use file handling — data disappears when the program exits.
Stored items:
string1[20] — vehicle chassis (buffer in RAM)


string2[20] — RC book chassis (buffer in RAM)


copy[20] — temporary copy buffer (when copying)


menu choice integers (control flow only)



Calculations
Comparison via strcmp() returns 0 for exact match; nonzero otherwise.


Length via strlen() returns integer count of chars.


Total/derived values: none numeric or financial — only string results.



Importance / Usefulness
Quick verification whether two chassis numbers match (useful for document checks).


Small utilities (copy/length/concatenate) useful while preparing or formatting chassis strings.


Helpful as a learning example demonstrating basic string library functions: strcmp, strcpy, strlen, strcat.

Build ~ 
#include <stdio.h>
#include <string.h> 

int main() {
    char string1[20];
    char string2[20];
    printf("Enter chassis number written on the vehicle: ");
    scanf("%s", string1);
    printf("Enter chassis number on the RC BOOK: ");
    scanf("%s", string2);
    int choice;
    printf("Choose an operation:\n1. Check vehical chassis no\n2. Copy String\n3. Calculate Length\n4. Concatenate Strings\nEnter choice:");
    scanf("%d", &choice);
    if (choice == 1) {

        int result = strcmp(string1, string2);
        if (result == 0) {
            printf("The chassis numbers match.\n");
        } else if (choice==2) {
            printf("The chassis numbers do not match.\n");
        }
        else {
            printf("Invalid choice.\n");
        }
    } else if (choice == 2) {
        char copy[20];
        int choice2;
        printf("Which String You Want To Copy(String1 or String2):\nEnter Choice:");
        scanf("%d", &choice2);
        if (choice2==1)
        {
            strcpy(copy, string1);
        printf("Original String: %s\n", string1);
        printf("Copied String: %s\n", copy);
        }
        else if (choice2==2)
        {
            strcpy(copy, string2);
            printf("Original String: %s\n", string2);
            printf("Copied String: %s\n", copy);
        }
        else
        {
            printf("Invalid Choice\n");
        }
       
       
    } else if (choice == 3) {
        int len = strlen(string1);
        int choice3;
        printf("Which string do you want to calculate the length of? (1 for string1, 2 for string2): ");
        scanf("%d", &choice3);
        if (choice3 == 1) {
            printf("The length of the string \"%s\" is: %d\n", string1, len);
        } else if (choice3 == 2) {
            len = strlen(string2);
            printf("The length of the string \"%s\" is: %d\n", string2, len);
        } else {
            printf("Invalid choice.\n");
        }
    } else if (choice == 4) {
        strcat(string1, string2);
        printf("Concatenated string: %s\n", string1);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}


Test Cases ~ 
Test Case 1-
Enter chassis number written on the vehicle: sbckmjdiaj
Enter chassis number on the RC BOOK: jsjiaj
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:1
The chassis numbers do not match.
Test Case 2-
Enter chassis number written on the vehicle: abc
Enter chassis number on the RC BOOK: abc
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:1
The chassis numbers match.

Test Case 3-
Enter chassis number written on the vehicle: ssa
Enter chassis number on the RC BOOK: dsaa
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:2
Which String You Want To Copy(String1 or String2):
Enter Choice:1
Source String: ssa
Destination String: ssa

Test Case 4-
Enter chassis number written on the vehicle: abcbbc
Enter chassis number on the RC BOOK: asdas
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:2
Which String You Want To Copy(String1 or String2):
Enter Choice:2
Original String: asdas
Copied String: asdas


Test Case 5-
Enter chassis number written on the vehicle: abcjhsdj
Enter chassis number on the RC BOOK: skskckc
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:3
Which string do you want to calculate the length of? (1 for string1, 2 for string2): 1
The length of the string "abcjhsdj" is: 8

Test Case 6-
Enter chassis number written on the vehicle: dshdsuhsh
Enter chassis number on the RC BOOK: ncncnns
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:3
Which string do you want to calculate the length of? (1 for string1, 2 for string2): 2
The length of the string "ncncnns" is: 7
Test Case 7-
Enter chassis number written on the vehicle: njsndjn
Enter chassis number on the RC BOOK: njdnjns
Choose an operation:
1. Check vehical chassis no
2. Copy String
3. Calculate Length
4. Concatenate Strings
Enter choice:4
Concatenated string: njsndjnnjdnjns


Implementation~
https://github.com/Shreyash111024/Vehicle-Chassis-Verification-Using-C.git

