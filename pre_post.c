#include <stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int *p = arr;
    ++*p;
    printf("arr[0] = %d, arr[1] = %d, *p = %d\n", arr[0], arr[1], *p);	//101,200,100
    
    int arr1[5] = {100,200,300,400,500};
    int *p1 = arr1;
    *p1++;
    printf("arr1[0] = %d, arr1[1] = %d, *p1 = %d\n", arr1[0], arr1[1], *p1);	//100,200,200
    return 0;
}
