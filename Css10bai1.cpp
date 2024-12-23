#include <stdio.h>

int main() {
    int arr[] = {6,5,3,7,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang hien co: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int a;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &a);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == a) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n",a,i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n",a);
    }
    return 0;
}
