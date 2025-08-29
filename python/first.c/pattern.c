 #include<stdio.h>
 int main()
 {
    int m,n,i,j;
    printf("Enter the row and column: ");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("  4" );
        }
        printf("\n");
    }
    for(i=2;i<=m-1;i++)
    {
        for(j=2;j<=n-1;j++)
        {
            printf("  3" );
        }
        printf("\n");
    }   
 }