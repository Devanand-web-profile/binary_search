#include <stdio.h>
#include <conio.h>
void main()
{
    int low, high, mid, i;
    int arr[50], n, key, found;

    printf(" \n\t\t Enter the Array in Asending order  :");
    printf("\n\n \t\t Enter the Araay Size : ");
    scanf("%2d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Arr[%2d] : ", i);
        scanf("%2d", &arr[i]);
    }

    printf("\n\t\t Enter the Number you Want to search.. :  ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key < arr[mid])
        {
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key == arr[mid])
        {
            printf("\n\t\t YES i found %d element in Array :-- \n\n ", key);
            found = 1;
            break;
        }

       
        
    }
}
