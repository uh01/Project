#include <stdio.h>
#include <conio.h>

int main()
{
    int array[10000],i,n,search,first,middle,last;

    printf("Enter size of the  array : ");
    scanf("%d", &n);

    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element to search : ");
    scanf("%d", &search);

    first = 0;
    last = n;
    middle = (first+last)/2;

    while (first <= last)
    {
           if (array[middle] < search)
           {
                last = middle - 1;
                printf("%d found at position %d.\n", search, i);
                break;
           }

           else if (array[middle] > search)
           {
               first = middle + 1;
                printf("%d found at position %d.\n", search, middle+1);
                break;
           }
           else
           {
                return middle;
           }

    }

    if (first > last)
    {
           printf("Not found! %d isn't present in the list.\n", search);
    }
    return 0;

}
