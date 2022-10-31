#include<stdio.h>

int main() {
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arry[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arry[i]);
	}
	int x;
	printf("Nhap 1 so: ");
	scanf("%d", &x);
	int a;
	for(int i = 0; i < n; i++) {
		if(arry[i] == x)
			a = x;			
	}
	if(a == x) {
		printf("%d co trong mang ", x);
	} else {
		printf("%d khong co trong mang", x);
	}
}

