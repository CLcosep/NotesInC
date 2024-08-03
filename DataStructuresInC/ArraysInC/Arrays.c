// Array tutorial in C
// Includes How insertions work in C 
// I am not using functions as I am lazy
#include <stdio.h>

int main() {
    // Initialization
    int arr[50], size, num, pos, choice;

    printf("Enter size of array: ");
    scanf("%d", &size);

    // error handling
    if (size > 50) {
        printf("Overflow condition\n");
        return 0;
    } else {
        // add value
        for (int i = 0; i < size ; i++) {
            printf("Enter the elements of array[%d]: ", i);
            scanf("%d", &arr[i]);
        }

        // display value
        printf("Elements inside array: ");
        for (int i = 0; i < size ; i++) {
            printf("%d", arr[i]);
        }

        // ways of insertion
        printf("\nDo you want to continue? [1]Yes [0]No: ");
        scanf("%d", &choice);

        if (choice != 1) {
            return 0;
        } else {

            while (choice) {
                printf("\nEnter new data to insert to Array: ");
                scanf("%d", &num);
                printf("Enter Position: ");
                scanf("%d", &pos);

                if (pos < 0 || pos > (size + 1)) {
                    printf("Position Invalid");
                }
                else {
                    // Insert at the beginning only
                    if (pos == 0) {
                        for (int i = size - 1; i >= 0; i--) {
                            arr[i + 1] = arr[i];
                        }
                        arr[0] = num;
                        size++;
                    } 
                    else {
                        // insert at any position
                        for (int i = size - 1; i >= pos - 1; i--) {
                            // this works by shifting elements
                            arr[i + 1] = arr[i];
                        }
                        arr[pos - 1] = num;
                        size++;
                    }
                    // Insert at end is the default insertion in arrays
                    // arr[size] = num;
                    // size++;

                    // display
                    printf("elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }

                    printf("\nDo you want to continue and insert new data to existing array? yes[1] no[0]: ");
                    scanf("%d", &choice);
                }   

                    // Insert specific location without shifting 
                    // int temp;
                    // temp = arr[pos-1];
                    // arr[pos - 1] = num;
                    // size++;
                    

                    // // display
                    // printf("elements: ");
                    // for (int i = 0; i < size; i++) {
                    //     printf("%d ", arr[i]);
                    // }

                    // printf("\nDo you want to continue and insert new data to existing array? yes[1] no[0]: ");
                    // scanf("%d", &choice);
            }
        }
    }
    // You can use Dynamic Mem allocation to reduce the need to set a initial size of an array and then change it after.
}