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
            printf("updated");
	    break;
case 4:	    printf("software.\n");
	    printf("updated");

	    break;

default:
            printf("Invalid choice! Please enter 1, 2,3 or 4.\n");
    }
    

