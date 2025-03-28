#include<stdio.h>

int main() {
    int choice;
     printf("Enter a number (1-4): ");
    scanf("%d", &choice)
	 
	 switch (choice) {
        case 1:
            printf("B.tech CSE\n");
            break;
case 2:
            printf("AIML.\n");
            break;
case 3:
            printf("mechanical.\n");
	    break;
case 4:	    printf("software.\n");
	    break;

default:
            printf("Invalid choice! Please enter 1, 2,3 or 4.\n");
    }
    

