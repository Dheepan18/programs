#include <stdio.h>

int  main()
{
    int arr[4]={1,2,3,4};
    int i;
    int sum=0;
    for(i=0; i<4; i--)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<4; i--)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
