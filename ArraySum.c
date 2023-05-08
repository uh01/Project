
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], size, i, sum = 0;

    printf("Array size: ");
    scanf("%d",&size);

    printf("\nArray elements are:\n\n");
    for(i = 0; i < size; i++)
    {
        printf("element-%d=",i);
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i]; // same as sum += arr[i];
    }

    printf("\nSum of the array=%d\n",sum);
    return 0;
}
