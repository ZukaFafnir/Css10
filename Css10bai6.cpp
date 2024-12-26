#include <stdio.h>
int main() {
    int n, i, searchValue;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n]; 
    int positions[n]; 
    int posCount = 0; 
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &searchValue);
    for(i = 0; i < n; i++) {
        if(arr[i] == searchValue) {
            positions[posCount] = i;
            posCount++;
        }
 }
    
    if(posCount > 0) {
        printf("So %d duoc tim thay tai cac vi tri: ", searchValue);
        for(i = 0; i < posCount; i++) {
            printf("%d ", positions[i]);
        }
    } else {
        printf("Khong tim thay so %d trong mang.\n", searchValue);
    }
    return 0;
}
