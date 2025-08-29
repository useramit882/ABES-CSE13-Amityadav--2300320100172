#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int i;
    int pos,n=5;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    if(pos<1 || pos>n)
    {
        printf("Invalid position\n");
    }
    else
    {
       for(i=pos;i<n;i++)
         {
              arr[i-1]=arr[i];
         }
            n--;
    }
    printf("Array after deletion:\n");
    for(i=0;i<n;i++)    
    {
        printf("%d ",arr[i]);
    }
}