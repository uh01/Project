#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={2,3,4,8,10};
    int i;

    for(i=0; i<5; i++);
    {
        printf("%d element = %d\n", i+1, arr[i]);
    }

    return 0;
}
