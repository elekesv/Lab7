/* Task description:
Write a function that receives the length of an edge of a cube as a parameter. The function should return the volume and the surface area of the cube in two further parameters passed by address. 
(The return type of the function is void.) Call this function from the main to calculate the volume and the surface area of a cube of 2.7 edge length, then print the results in main!

*/
void cube(double edge, double *parea, double *pvolume){
    *parea = edge*edge*6;
    *pvolume = edge*edge*edge;
}

#include <stdio.h>

int main(){
    double ed = 2.7;
    double are, vol;
    cube(ed, &are, &vol);
    printf("Area %lf Volume %lf", are, vol);

return 0;
}
