 #include <stdio.h>

int main()
 { 
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5,pos,val;  
    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &val);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = val;
        n++;
        printf("Array after insertion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
