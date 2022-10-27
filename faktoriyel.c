#include <stdio.h>
#include <conio.h>


int main() {
	
	int sayi , i , sonuc=1 ;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	
	for( i=2; i<=sayi ; i++)     
		sonuc = sonuc * i; 

	printf("%d sayisinin faktoriyeli : %d\n", sayi,sonuc);
	
	
	
	
	
	
	
	
	
	
	return main();
	
	
}
