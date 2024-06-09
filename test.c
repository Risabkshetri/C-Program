#include<stdio.h>
int swap(int *arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void bubbleSort(int arr[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr, j, j+1);
			}
		}
	}
}

int printArray(int arr[], int n){
	int i;
	for(i = 0; i<n; i++){
		printf("%d  ", arr[i]);
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9, 10};
	int n  = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	printf("Sorted array : \n");
	printArray(arr, n);
	return 0;
}