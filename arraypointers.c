
#include <stdio.h>
 
int main()
{
 
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr = &arr[0];
 
    // comparing address of first element and address stored
    // inside array name
    printf("Address Stored in Array name: %p\nAddress of "
           "1st Array Element: %p\n",
           arr, &arr[0]);
 
    // printing array elements using pointers
  for (int i = 0; i < 5; i++) {
        printf("%d\n ", *ptr++);
    }    
    return 0;
}
