#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Saniyeyi milisaniyeye �evirme.
    int milli_seconds = 1000 * number_of_seconds;
   	// Ba�lama zaman�n� depolad���m yer.
    clock_t start_time = clock();
  
    // Gerekli zamana ula�ana kadar olu�turdu�um d�ng�.
    while (clock() < start_time + milli_seconds);
}

int sayi,i; // integer tipinde tan�mlam�� oldu�um sayi ve i de�i�kenleri
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
	
	// cmd konsol ekran�nda kodumuzu �al��t�rmam�z i�in gerekli fonksiyon.
	char * konsol = argv[1];
	sayi = atoi(konsol);
		
// 1)Konsol ekran�ndan girilmi� olan say� de�eri kadar d�ng�m�z devam ediyor.
// 2) E�er for d�ng�s� i�erisindeki j parametremiz konsol ekran�ndan girdi�imiz say� de�erine e�it de�il ise (else durumu) yinele fonksiyonu �a�r�l�yor.

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
