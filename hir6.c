#include <stdio.h>

void swapPointers(int **room1, int **room2) 
{
    int *temp = *room1;
    *room1 = *room2;
    *room2 = temp;
}

int main() {
    
    int guest1 = 101; 
    int guest2 = 202; 
    int *room1 = &guest1;
    int *room2 = &guest2;
    printf("Before swapping:\n");
    printf("Room 1 points to guest with ID: %d\n", *room1);
    printf("Room 2 points to guest with ID: %d\n", *room2);


    swapPointers(&room1, &room2);
    printf("\nAfter swapping:\n");
    printf("Room 1 points to guest with ID: %d\n", *room1);
    printf("Room 2 points to guest with ID: %d\n", *room2);

    return 0;
}
