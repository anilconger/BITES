#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Saniyeyi milisaniyeye çevirme.
    int milli_seconds = 1000 * number_of_seconds;
   	// Baþlama zamanýný depoladýðým yer.
    clock_t start_time = clock();
  
    // Gerekli zamana ulaþana kadar oluþturduðum döngü.
    while (clock() < start_time + milli_seconds);
}

int sayi,i; // integer tipinde tanýmlamýþ olduðum sayi ve i deðiþkenleri
const char *yinele(int a){
	if(a!=0){
		for(i=1; i<=sayi; i++){
			if(i==1){
				printf("Starting Node %d\n", a);}
			if(i>a){
				printf(".. Node Started %d\n",i);}}
		printf("\n\n");}}


const char *yinele2(int a){
	
	if(a!=0){
		for(i=1; i<=sayi; i++){
			if(i==1){
				printf("Starting Node %d\n", a);}
			if(i>a){
				printf(".. Node Started %d\n",i);}
			if(i==sayi){
				printf("Stopping Node %d\n", a);}}
		printf("\n\n");}}

const char *yinele3(int a){
	
	if(a!=0){
		for(i=a; i<=1; i--){
			if(i==1){
				printf("Starting Node %d\n", a);
				printf("Stopping Node %d\n", a);}}
		printf("\n\n");}}




int main(int argc, char *argv[]){
	
	int j,k;
	
	// cmd konsol ekranýnda kodumuzu çalýþtýrmamýz için gerekli fonksiyon.
	char * konsol = argv[1];
	sayi = atoi(konsol);
		
// 1)Konsol ekranýndan girilmiþ olan sayý deðeri kadar döngümüz devam ediyor.
// 2) Eðer for döngüsü içerisindeki j parametremiz konsol ekranýndan girdiðimiz sayý deðerine eþit deðil ise (else durumu) yinele fonksiyonu çaðrýlýyor.

for(j=1; j<=sayi; j++){
	if(j==sayi){
		for(k=sayi; k>=1; k--){
			yinele2(k);
			delay(1);}}
		else{
			yinele(j);
			delay(1);}
	if(kbhit()){
		yinele3(j);
		break;}
}
	return 0;
}
