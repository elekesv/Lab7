/* Task description:
1.  Create a function that receives an array of integers as parameter, and one integer value that has to be found in the array! 
    Return the index of the element if the value was found, or return −1, if it was not. (If the value occurs multiple times in the array, it is up to you which index you return.)
    Print the array with the indices to check the result of your function. Print the index returned by the function, or the text „not found”!

2.  Modify the function (and the program) to return the memory address, instead of the index of the found element! 
    What should be returned when the value was not found in the array? Using the modified function how can you determine the index of the found element (without another search)?
    Modify the loops in the program to use pointers instead of indices. 

*/

#include <stdio.h>

int* checker(int x[], int y, int size){
  for(int i = 0; i< size; i++){
    if(*(x+i) == y)
      return i+x;
  }
  return NULL;
}

int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("%d", checker(arr,4,10)-arr);





  return 0;
}
