//nhap mang n so nguyen va in ra so chan cuoi cung trong mang
#include<stdio.h>
int main(){
	int a[100],n,i,b=1;
	printf("Nhap so phan tu mang n = ");
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
		if (a[i]%2==0)
			b=a[i];
	}
	if (b==1)
	printf("no even number");
	else
	printf("last even: %d",b);
	
}	
