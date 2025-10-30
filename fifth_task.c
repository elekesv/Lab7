/* Task description:
Write a function that receives an integer array, and separates the even and the odd elements of the array.
The even elements are put into a second array, and the odd ones are put into a third array; both of them are function arguments, and are assumed to be large enough to store all even and odd elements.

Write a function to print the integer array received as a function parameter!

Write a main function that separates the even and odd elements of an array and prints them to the screen!

*/
#include <stdio.h>

int divorce(int arr[],int size, int even[], int odd[]){
  int i;
  for(i = 0; i<size; i ++){
    if(*(arr+i)%2 == 0){
      *even = *(arr+i);
      even += 1;}
    else{
      *odd = *(arr+i);
      odd += 1;}
    }
    return ;
}
void arprint(int x[], int y){
  int l;
  for(l=0; l< y; l++){
    printf("%d.index erteke %d\n", l, *(x+l));
  }
}
divorce


int main(){
  int arr[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int even[13];
  int odd[13];
  divorce(arr, 13, even, odd);
  arprint(even, 6);
  printf(" asd");
  arprint(odd, 7);



  return 0;
}
