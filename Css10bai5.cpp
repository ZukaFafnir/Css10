#include <stdio.h>
int main(){
	int array[6]={4,5,7,2,3,1};
	int size=6;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			int temp;
			if(array[j+1]<array[j]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
		printf("Mang sau khi da sap xep: ");
		for(int i=0;i<size;i++){
			printf("%d ",array[i]);
		}
		printf("\n");
    int giatricantim;
    printf("Moi ban nhap gia tri can tim: ");
    scanf("%d", &giatricantim);
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (array[mid] == giatricantim) {
            printf("Gia tri can tim nam o vi tri %d\n", mid);
            return 0;
        } else if (array[mid] < giatricantim) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    printf("Khong tim thay gia tri can tim trong mang.\n");
    return 0;
}

	
	
	
	
	
	

