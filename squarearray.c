#include <stdio.h>
int main ()
{
    int i,n;
    int arr[1000];
    int square_array[1000];

    printf("enter the size of aaray:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d :\n" ,i+1);
    scanf("%d", &arr[i]);
   }
   for(i=0;i<n;i++)
   {
   square_array=arr[i]*arr[i];
   }
   printf("the square of aaray elements are:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\n",square_array[i]);
   }

    return 0;

}