#include<stdio.h>

float tbc(int arr[], int n) {
	float TBC;
	int sum = 0, dem = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0 && arr[i] % 2 == 1) {
			sum += arr[i];
			dem++;
		}
	}
	TBC = sum/dem;
	return TBC;
}

int main() {
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int ary[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	float k = tbc(ary, n);
	printf("Trung binh cac so le o vi tri chan co trong mang la: %f", k);
}
