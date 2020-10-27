//viet ham tinh trung binh cong cua cac phan tu trong mang
#include<stdio.h>
float everage(int s[],int n){
	int i,a=0;
	float tbc;
	for(i=0;i<n;i++)
		a=a+s[i];
	return (float)a/n;
}
main(){
	int s[100],n,i;
	printf("nhap so phan tu mang n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	printf("\n TBC = %f", everage(s,n));
}	
