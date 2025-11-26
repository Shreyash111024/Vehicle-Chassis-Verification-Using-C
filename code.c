#code
#include <stdio.h>
#include <string.h> // Required for strcmp()

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
