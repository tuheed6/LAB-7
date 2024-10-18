#include <stdio.h>

int main() {
    char name[100];
    char id[20];
    int i, valid, age;

    printf("Enter your name: ");
    gets(name);

    valid = 1;
    for (i = 0; name[i] != '\0'; i++) {
        if (!((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || name[i] == ' ')) {
            valid = 0;
            break;
        }
    }
    if (valid)
        printf("Valid Name: %s\n", name);
    else
        printf("Invalid name! Only alphabetic characters and spaces are allowed.\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 1 && age <= 120) {
        printf("Valid Age: %d\n", age);
    } else {
        printf("Invalid age! Age should be between 1 and 120.\n");
    }

    printf("Enter your ID number: ");
    scanf("%s", id);

    valid = 1;
    for (i = 0; id[i] != '\0'; i++) {
        if (!(id[i] >= '0' && id[i] <= '9')) {
            valid = 0;
            break;
        }
    }
    if (valid)
        printf("Valid ID Number: %s\n", id);
    else
        printf("Invalid ID number! Only digits are allowed.\n");

    return 0;
}

