
#include <stdio.h>
	char ch; //int.txt dosyasýndan karakter-karakter okuduðum için tanýmladýðým char deðiþkeni.
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15; //Karakter-karakter okuduðum parametleri int tipine dönüþtürmek için kullandýðým deðiþkenler.
    char paket[2][6]; //int.txt dosyasýndaki paket boyutu ve sayýsý kýsmýndaki karakterleri okumak için oluþturduðum 2 satýr 6 sutünlu Array'im.
	int paket_cnt=0; // Dosya okuma yaparken döngü içerisinde Array'in satýrýný deðiþtirebileceðim int tipindeki paket_cnt deðiþkeni. 
	char arac[3][8]; // int.txt dosyasýndaki araç boyutu ve araç maliyeti kýsmýndaki karakterleri okumak için oluþturduðum 3 satýr 8 sutünlu Array'im.
	int arac_cnt=0; // Dosya okuma yaparken döngü içerisinde arac Array'inin satýrýný deðiþtirebileceðim int tipindeki arac_cnt deðiþkeni.
	
	int paket1_boyut1; // Ýlk paketimin x deðeri.
	int paket1_boyut2; // Ýlk paketimin y deðeri.
	
	int paket2_boyut1; // Ýkinci paketimin x deðeri.
	int paket2_boyut2; // Ýkinci paketimin y deðeri.
	
	int arac1_boyut1; // Ýlk aracýmýn x deðeri.
	int arac1_boyut2; // Ýlk aracýmýn y deðeri.
	int arac2_boyut1; // Ýkinci aracýmýn x deðeri.
	int arac2_boyut2; // Ýkinci aracýmýn y deðeri.
	int arac3_boyut1; // Üçüncü aracýmýn x deðeri.
	int arac3_boyut2; // Üçüncü aracýmýn y deðeri.
	
	int arac1_maliyet; // Ýlk aracýmýn maliyeti.
	int arac2_maliyet; // Ýkinci aracýmýn maliyeti.
	int arac3_maliyet; // Üçüncü aracýmýn maliyeti.
	
	int toplam_maliyet; // Toplam en ucuz maliyetimiz.
		
	int sayac1; // Ýlk paketimin adet sayýsý ile uzunluklarýnýn çarpýmý yani toplamdaki alaný (Paket Alaný 1).
	int sayac2; // Ýkinci paketimin adet sayýsý ile uzunluklarýnýn çarpýmý yani toplamdaki alaný (Paket Alaný 2).
	
	int arac_adet; //
	int arac1_adet =1; // Ýlk aracýmýn adet sayýsý.
	int arac2_adet =1; // Ýkinci aracýmýn adet sayýsý.
	int arac3_adet =1; // Üçüncü aracýmýn adet sayýsý.
	
	int paket1_adet; // Ýlk paketimin adet sayýsý.
	int paket2_adet; // Ýkinci paketimin adet sayýsý.
		
	//yerlestirme1 olarak tanýmladýðým fonksiyon ve parametre olarak da içerisindeki deðiþkenleri alýyor.
	//Yerleþtirme iþlemini en ucuz maliyet ile yapabilmek için Araçlarýn alan deðeri ile Paketlerin alan deðerinin farkýný alarak gerçekleþtiriyorum.
	//1) Aracýmýn alaný paketlerimin alanlarýndan küçükse, paketlerimi bu araç içerisine yerleþtiremem, böylece ekrana "Kamyonda yeterli alan yok. "yazýsýný yazdýrýyorum.
	//2) Aracýmýn alaný paketlerimin alanlarýndan büyükse, paketlerimi bu araç içerisine yerleþtirebilirim.
	//3) Ýlk for döngüsü ile hangi aracý kullanýyor isem onun adet sayýsýný döndürüyorum. 
	//4) Sayac1 deðiþkeni ile ilk paketimin Alanýný myArray1 içersine yerleþtirerek her döngü sonunda birer azaltýyorum(Ýlk paketimin sayýsýný bitene kadar).
	//5) Ýkinci ve üçüncü for döngüleri ile de myArray1 içerisine paketlerimin alanlarýný gönderiyorum. 1x1 ---> 1'lik yada 2x1 ---> 2'lik Alan yazdýrýyorum.
	//6) Böylece hem bu paketlerin myArray1 içerisinde nerede olduðunu ve kaça eþit olduðunu görebiliyorum.
	//7) else kýsmýnda ise sayac1 deðiþkenim sýfýrladýðý zaman sayac2 deðiþkenim iþleme baþlýyor ve sayac2 de sýfýrlanana kadar bu döngü devam ediyor.
	yerlestirme1(arac_adet,arac1_boyut2, arac1_boyut1, sayac1, sayac2, paket1_boyut1, paket1_boyut2, paket2_boyut1, paket2_boyut2){	
		int i,j,k,p;
		int myArray1[arac1_boyut2][arac1_boyut1]; // Aracýmýn boyutlarýna göre oluþturduðum Array'im.
		if((arac1_boyut1*arac1_boyut2*arac_adet)-(sayac1+sayac2) < 0){ //
			printf("Kamyonda yeterli alan yok. ");}
			else{
			for(p=0; p<arac_adet; p++){
			printf("%dx%d: (%d)\n", arac1_boyut2, arac1_boyut1, arac_adet);
			for(i=0; i<arac1_boyut2; i++){
			for(j=0; j<arac1_boyut1; j++){
				if(sayac1!=0){
					myArray1 [i] [j] = paket1_boyut1*paket1_boyut2;
					printf("%dx%d > ", paket1_boyut1, paket1_boyut2);
					printf("( %d , %d )\n",i,j);
					sayac1--;}
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2;
							printf("%dx%d > ",paket2_boyut1, paket2_boyut2);
							printf("( %d , %d ) ", i,j);
							sayac2--;}}}}
						printf("\n"); }}}
				
	int main(){
	int i,j,p;
	int myArray1[arac1_boyut2][arac1_boyut1];
	
    FILE *fp;
    fp = fopen("int.txt", "r"); //Dosyadan okuma iþlemini baþlatýyorum.
	FILE *dosya = fopen("output.txt", "w"); // Dosya yazdýrma iþlemini baþlatýyorum.
	while(ch != '\n'){ // \n görene kadar yani ilk satýr sonlanana kadar ilk satýrý okuyorum ( # Paketler (paket boyutu - paket sayýsý) okundu).
	ch = fgetc(fp);}
	ch = fgetc(fp);
	while(ch!='#'){ 
	// # iþareti görene kadar okuma yapýyorum böylece paket boyutlarýna ve paket sayýlarýna paket Array'i oluþturarak eriþebiliyorum.
		paket[paket_cnt][0] = ch; 
		for(i=1;i<6;i++){
			ch = fgetc(fp);
			paket[paket_cnt][i]=ch;}
			paket_cnt++;
			ch = fgetc(fp);}
	while(ch != '\n'){
	// \n görene kadar yani dördüncü satýr sonlanana kadar dördüncü satýrý okuyorum ( # Araçlar (araç boyutu - araç maliyeti) okundu).
	ch = fgetc(fp);}
	while(ch!=EOF){
	//Dosyam sonlanana kadar da okuma gerçekleþtirip araç boyutu ve araç maliyeti sayýlarýna arac Array'i oluþturarak eriþebiliyorum.
		for(i=0;i<8;i++){
			ch = fgetc(fp);
			arac[arac_cnt][i]=ch;}
			arac_cnt++;}
	//Dosyadan "paket boyutu - paket sayýsý yada araç boyutu - araç maliyeti" gibi deðiþkenleri karakter olarak okuduðum algoritma içerisinde kullanabilmek için integer deðerlere çeviriyorum.
	// Char to int dönüþümleri.
	paket1_boyut1 = paket[0][0];
	x1 = (paket1_boyut1 - '0')% 48; 

	paket1_boyut2 = paket[0][2];
	x2 = (paket1_boyut2 - '0')% 48;
	
	paket2_boyut1 = paket[1][0];
	x3 = (paket2_boyut1 - '0')% 48;
	
	paket2_boyut2 = paket[1][2];
	x4 = (paket2_boyut2 - '0')% 48;
	
	arac1_boyut1 = arac[0][0];
	x5 = (arac1_boyut1 - '0')% 48;

	arac1_boyut2 = arac[0][4];
	x6 = (arac1_boyut2 - '0')% 48;
	
	arac2_boyut1 = arac[1][0]; 
	x7 = (arac2_boyut1 - '0')% 48;

	arac2_boyut2 = arac[1][4]; 
	x8 = (arac2_boyut2 - '0')% 48;
	
	arac3_boyut1 = arac[2][0];
	x9 = (arac3_boyut1 - '0')% 48;

	arac3_boyut2 = arac[2][4];
	x10 = (arac3_boyut2 - '0')% 48;
	
	arac1_maliyet = arac[0][6];
	x11 = (arac1_maliyet - '0')% 48;

	arac2_maliyet = arac[1][6];
	x12 = (arac2_maliyet - '0')% 48;

	arac3_maliyet = arac[2][6];
	x13 = (arac3_maliyet - '0')% 48;
	
	paket1_adet = paket[0][4];
	x14 = (paket1_adet - '0')% 48;

	paket2_adet = paket[1][4];
	x15 = (paket2_adet - '0')% 48;
	
	sayac1 = x1*x2*x14; // Ýlk paketimin boyutlarý ve adet çarpýmý (Ýlk paketlerimin toplam alanlarý).
	sayac2 = x3*x4*x15; // Ýkinci paketimin boyutlarý ve adet çarpýmý (Ýkinci paketimin toplam alaný).
	
	fprintf(dosya, "# Toplam Maliyet\n"); //Dosyamýn ilk satýrýný yazdýrdým.
	//Üç adet aracýmýn olduðunu bildiðimden araçlarýn boyutlarýný kontrol ediyorum ayný boyutta iseler araçlarýmýn adetini arttýrýyorum.
	if(arac2_boyut1 == arac3_boyut1 && arac2_boyut2 == arac3_boyut2){
		arac2_adet =2;
		arac1_adet=1;
		arac1_maliyet = x11; //Ýlk aracýmýn maliyeti.
		arac2_maliyet = 2*x12; //Ýkinci aracýmýn maliyeti.
		if(arac2_maliyet < arac1_maliyet){ //En ucuz maliyeti istediðimizden maliyet karþýlaþtýrmasý yapýlýyor.
			fprintf(dosya,"%d\n",2*x12); //Eðer böyleyse toplam maliyetimi yazdýrýyorum.
			fprintf(dosya,"# Yükleme Plani\n"); // Yükleme planýný dosyaya yazdýrýyorum.
			yerlestirme1(arac2_adet, x8, x7, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac2_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x8, x7, arac2_adet); // Eðer ikinci aracýn maliyeti ilk araçtan küçük ise ilk aracýmýn boyutlarýný ve adetini dosyama yazdýrýyorum.
			for(i=0; i<x8; i++){
			for(j=0; j<x7; j++){
				if(sayac1!=0){
				myArray1 [i] [j] = paket1_boyut1*paket1_boyut2; //myArray1 içerisine ilk paketlerimin alanlarýný yazdýrýyorum.
					fprintf(dosya,"%dx%d > ", x1, x2); //Ýlk paketlerimin boyutlarýný dosyaya yazdýrýyorum.
					fprintf(dosya,"( %d , %d )\n",i,j);	//Ýlk paketimin Array içerisindeki yerleþim þeklini dosyaya yazdýrýyorum.
					sayac1--;} // Ýlk paketlerimin toplam alanýný sürekli azaltýyorum.
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2; //myArray1 içerisine ikinci paketlerimin alanlarýný yazdýrýyorum.
							fprintf(dosya,"%dx%d > ",x3, x4); // Ýkinci paketimin boyutlarýný dosyaya yazdýrýyorum.
							fprintf(dosya,"( %d , %d ) ", i,j); //Ýkinci paketimin Array içerisindeki yerleþim þeklini dosyaya yazdýrýyorum.
							sayac2--;}}}} // Ýkinci paketimin toplam alanýný sürekli azaltýyorum.
							fprintf(dosya,"%s\n");}} //Dosyamda bu satýrý boþ býrakýyorum.
							
	//Yazmýþ olduðum kodun devamý da ayný mantýkta ilerlemektedir.
		else{
			fprintf(dosya,"%d\n",x11);
			fprintf(dosya,"# Yükleme Plani\n");
			yerlestirme1(arac1_adet, x6, x5, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac1_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x6, x5, arac1_adet);
			for(i=0; i<x6; i++){
			for(j=0; j<x5; j++){
				if(sayac1!=0){
				myArray1 [i] [j] = paket1_boyut1*paket1_boyut2;
					fprintf(dosya,"%dx%d > ", x1, x2);
					fprintf(dosya,"( %d , %d )\n",i,j);	
					sayac1--;}
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2;
							fprintf(dosya,"%dx%d > ",x3, x4);
							fprintf(dosya,"( %d , %d ) ", i,j);
							sayac2--;
							fprintf(dosya,"%s\n");}}}}}}
	}
	
	
	if(arac1_boyut1 == arac2_boyut1 && arac1_boyut2 == arac2_boyut2){
		arac1_adet =2;
		arac3_adet =1;
		arac1_maliyet = 2*x11;
		arac3_maliyet = x13;
		if(arac1_maliyet < arac3_maliyet){
			fprintf(dosya,"%d\n",2*x11);
			fprintf(dosya,"# Yükleme Plani\n");
			yerlestirme1(arac1_adet, x6, x5, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac1_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x6, x5, arac1_adet);
			for(i=0; i<x6; i++){
			for(j=0; j<x5; j++){
				if(sayac1!=0){
					myArray1 [i] [j] = paket1_boyut1*paket1_boyut2;
					fprintf(dosya,"%dx%d > ", x1, x2);
					fprintf(dosya,"( %d , %d )\n",i,j);	
					sayac1--;}
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2;
							fprintf(dosya,"%dx%d > ",x3, x4);
							fprintf(dosya,"( %d , %d ) ", i,j);
							sayac2--;
							fprintf(dosya,"%s\n");}}}}}}
		else{
			fprintf(dosya,"%d\n",x13);
			fprintf(dosya,"# Yükleme Plani\n");
			yerlestirme1(arac3_adet, x10, x9, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac3_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x10, x9, arac3_adet);
			for(i=0; i<x10; i++){
			for(j=0; j<x9; j++){
				if(sayac1!=0){
				myArray1 [i] [j] = paket1_boyut1*paket1_boyut2;
					fprintf(dosya,"%dx%d > ", x1, x2);
					fprintf(dosya,"( %d , %d )\n",i,j);	
					sayac1--;}
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2;
							fprintf(dosya,"%dx%d > ",x3, x4);
							fprintf(dosya,"( %d , %d ) ", i,j);
							sayac2--;
							fprintf(dosya,"%s\n");}}}}}}}
	
	if(arac1_boyut1 == arac3_boyut1 && arac1_boyut2 == arac3_boyut2){
		arac1_adet =2;
		arac2_adet=1;
		arac1_maliyet = 2*x11;
		arac2_maliyet = x12;
		if(arac1_maliyet < arac2_maliyet){
			fprintf(dosya,"%d\n",2*x11);
			fprintf(dosya,"# Yükleme Plani\n");
			yerlestirme1(arac1_adet, x6, x5, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac1_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x6, x5, arac1_adet);
			for(i=0; i<x6; i++){
			for(j=0; j<x5; j++){
				if(sayac1!=0){
				myArray1 [i] [j] = paket1_boyut1*paket1_boyut2;
					fprintf(dosya,"%dx%d > ", x1, x2);
					fprintf(dosya,"( %d , %d )\n",i,j);	
					sayac1--;}
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2;
							fprintf(dosya,"%dx%d > ",x3, x4);
							fprintf(dosya,"( %d , %d ) ", i,j);
							sayac2--;
								fprintf(dosya,"%s\n");}}}}}}
		else{
			fprintf(dosya,"%d\n",x12);
			fprintf(dosya,"# Yükleme Plani\n");
			yerlestirme1(arac2_adet, x8, x7, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac2_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x8, x7, arac2_adet);
			for(i=0; i<x8; i++){
			for(j=0; j<x7; j++){
				if(sayac1!=0){
				myArray1 [i] [j] = paket1_boyut1*paket1_boyut2;
					fprintf(dosya,"%dx%d > ", x1, x2);
					fprintf(dosya,"( %d , %d )\n",i,j);	
					sayac1--;}
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2;
							fprintf(dosya,"%dx%d > ",x3, x4);
							fprintf(dosya,"( %d , %d ) ", i,j);
							sayac2--;
							fprintf(dosya,"%s\n");}}}}}}}
							
   fclose(fp); //Okuma iþlemini bitiriyorum.
   fclose(dosya); // Dosyaya yazdýrma iþlemini bitiriyorum.
   
		return 0;
	}
