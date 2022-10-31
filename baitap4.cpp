#include<stdio.h>

int solecuoi(int ar[], int n) {
	for(int i = n - 1; i < n; i--) {
		if(ar[i] % 2 == 1){
			return ar[i];
			break;
		}
	}
}

int main() {
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int ary[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	
	int SLC = solecuoi(ary, n);
	printf("So le cuoi cung cua mang la %d", SLC);
}
