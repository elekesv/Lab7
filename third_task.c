/* Task description:
Write a function that receives two numbers, and return !!both!! their sum and their product!
one function has to do that!
*/
#include <stdio.h>

 void ass(int x,int y,int *sum,int *product){
    *sum = x+y;
    *product = x*y;
 }

int main(void) {
    int x = 5;
    int y = 50;
    int a,b;
    ass(x,y,&a,&b);
    printf("%d, %d", a,b);

    return 0;
}
