#include <stdio.h> 

int main (){
	int n, count = 0 ; printf("moi b?n nhap mot so bat ky "); scanf ("%d", &n);
	for (int i = 2;i*i <=n;i++){
		if(n % i ==0) count++; break; 
	} 
	if(n <2 || count > 0) printf ("%d khong phai la so nguyen to", n);
	else printf("%d day la so nguyen to",n);
} 
