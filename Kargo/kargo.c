
#include <stdio.h>
	char ch; //int.txt dosyas�ndan karakter-karakter okudu�um i�in tan�mlad���m char de�i�keni.
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15; //Karakter-karakter okudu�um parametleri int tipine d�n��t�rmek i�in kulland���m de�i�kenler.
    char paket[2][6]; //int.txt dosyas�ndaki paket boyutu ve say�s� k�sm�ndaki karakterleri okumak i�in olu�turdu�um 2 sat�r 6 sut�nlu Array'im.
	int paket_cnt=0; // Dosya okuma yaparken d�ng� i�erisinde Array'in sat�r�n� de�i�tirebilece�im int tipindeki paket_cnt de�i�keni. 
	char arac[3][8]; // int.txt dosyas�ndaki ara� boyutu ve ara� maliyeti k�sm�ndaki karakterleri okumak i�in olu�turdu�um 3 sat�r 8 sut�nlu Array'im.
	int arac_cnt=0; // Dosya okuma yaparken d�ng� i�erisinde arac Array'inin sat�r�n� de�i�tirebilece�im int tipindeki arac_cnt de�i�keni.
	
	int paket1_boyut1; // �lk paketimin x de�eri.
	int paket1_boyut2; // �lk paketimin y de�eri.
	
	int paket2_boyut1; // �kinci paketimin x de�eri.
	int paket2_boyut2; // �kinci paketimin y de�eri.
	
	int arac1_boyut1; // �lk arac�m�n x de�eri.
	int arac1_boyut2; // �lk arac�m�n y de�eri.
	int arac2_boyut1; // �kinci arac�m�n x de�eri.
	int arac2_boyut2; // �kinci arac�m�n y de�eri.
	int arac3_boyut1; // ���nc� arac�m�n x de�eri.
	int arac3_boyut2; // ���nc� arac�m�n y de�eri.
	
	int arac1_maliyet; // �lk arac�m�n maliyeti.
	int arac2_maliyet; // �kinci arac�m�n maliyeti.
	int arac3_maliyet; // ���nc� arac�m�n maliyeti.
	
	int toplam_maliyet; // Toplam en ucuz maliyetimiz.
		
	int sayac1; // �lk paketimin adet say�s� ile uzunluklar�n�n �arp�m� yani toplamdaki alan� (Paket Alan� 1).
	int sayac2; // �kinci paketimin adet say�s� ile uzunluklar�n�n �arp�m� yani toplamdaki alan� (Paket Alan� 2).
	
	int arac_adet; //
	int arac1_adet =1; // �lk arac�m�n adet say�s�.
	int arac2_adet =1; // �kinci arac�m�n adet say�s�.
	int arac3_adet =1; // ���nc� arac�m�n adet say�s�.
	
	int paket1_adet; // �lk paketimin adet say�s�.
	int paket2_adet; // �kinci paketimin adet say�s�.
		
	//yerlestirme1 olarak tan�mlad���m fonksiyon ve parametre olarak da i�erisindeki de�i�kenleri al�yor.
	//Yerle�tirme i�lemini en ucuz maliyet ile yapabilmek i�in Ara�lar�n alan de�eri ile Paketlerin alan de�erinin fark�n� alarak ger�ekle�tiriyorum.
	//1) Arac�m�n alan� paketlerimin alanlar�ndan k���kse, paketlerimi bu ara� i�erisine yerle�tiremem, b�ylece ekrana "Kamyonda yeterli alan yok. "yaz�s�n� yazd�r�yorum.
	//2) Arac�m�n alan� paketlerimin alanlar�ndan b�y�kse, paketlerimi bu ara� i�erisine yerle�tirebilirim.
	//3) �lk for d�ng�s� ile hangi arac� kullan�yor isem onun adet say�s�n� d�nd�r�yorum. 
	//4) Sayac1 de�i�keni ile ilk paketimin Alan�n� myArray1 i�ersine yerle�tirerek her d�ng� sonunda birer azalt�yorum(�lk paketimin say�s�n� bitene kadar).
	//5) �kinci ve ���nc� for d�ng�leri ile de myArray1 i�erisine paketlerimin alanlar�n� g�nderiyorum. 1x1 ---> 1'lik yada 2x1 ---> 2'lik Alan yazd�r�yorum.
	//6) B�ylece hem bu paketlerin myArray1 i�erisinde nerede oldu�unu ve ka�a e�it oldu�unu g�rebiliyorum.
	//7) else k�sm�nda ise sayac1 de�i�kenim s�f�rlad��� zaman sayac2 de�i�kenim i�leme ba�l�yor ve sayac2 de s�f�rlanana kadar bu d�ng� devam ediyor.
	yerlestirme1(arac_adet,arac1_boyut2, arac1_boyut1, sayac1, sayac2, paket1_boyut1, paket1_boyut2, paket2_boyut1, paket2_boyut2){	
		int i,j,k,p;
		int myArray1[arac1_boyut2][arac1_boyut1]; // Arac�m�n boyutlar�na g�re olu�turdu�um Array'im.
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
    fp = fopen("int.txt", "r"); //Dosyadan okuma i�lemini ba�lat�yorum.
	FILE *dosya = fopen("output.txt", "w"); // Dosya yazd�rma i�lemini ba�lat�yorum.
	while(ch != '\n'){ // \n g�rene kadar yani ilk sat�r sonlanana kadar ilk sat�r� okuyorum ( # Paketler (paket boyutu - paket say�s�) okundu).
	ch = fgetc(fp);}
	ch = fgetc(fp);
	while(ch!='#'){ 
	// # i�areti g�rene kadar okuma yap�yorum b�ylece paket boyutlar�na ve paket say�lar�na paket Array'i olu�turarak eri�ebiliyorum.
		paket[paket_cnt][0] = ch; 
		for(i=1;i<6;i++){
			ch = fgetc(fp);
			paket[paket_cnt][i]=ch;}
			paket_cnt++;
			ch = fgetc(fp);}
	while(ch != '\n'){
	// \n g�rene kadar yani d�rd�nc� sat�r sonlanana kadar d�rd�nc� sat�r� okuyorum ( # Ara�lar (ara� boyutu - ara� maliyeti) okundu).
	ch = fgetc(fp);}
	while(ch!=EOF){
	//Dosyam sonlanana kadar da okuma ger�ekle�tirip ara� boyutu ve ara� maliyeti say�lar�na arac Array'i olu�turarak eri�ebiliyorum.
		for(i=0;i<8;i++){
			ch = fgetc(fp);
			arac[arac_cnt][i]=ch;}
			arac_cnt++;}
	//Dosyadan "paket boyutu - paket say�s� yada ara� boyutu - ara� maliyeti" gibi de�i�kenleri karakter olarak okudu�um algoritma i�erisinde kullanabilmek i�in integer de�erlere �eviriyorum.
	// Char to int d�n���mleri.
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
	
	sayac1 = x1*x2*x14; // �lk paketimin boyutlar� ve adet �arp�m� (�lk paketlerimin toplam alanlar�).
	sayac2 = x3*x4*x15; // �kinci paketimin boyutlar� ve adet �arp�m� (�kinci paketimin toplam alan�).
	
	fprintf(dosya, "# Toplam Maliyet\n"); //Dosyam�n ilk sat�r�n� yazd�rd�m.
	//�� adet arac�m�n oldu�unu bildi�imden ara�lar�n boyutlar�n� kontrol ediyorum ayn� boyutta iseler ara�lar�m�n adetini artt�r�yorum.
	if(arac2_boyut1 == arac3_boyut1 && arac2_boyut2 == arac3_boyut2){
		arac2_adet =2;
		arac1_adet=1;
		arac1_maliyet = x11; //�lk arac�m�n maliyeti.
		arac2_maliyet = 2*x12; //�kinci arac�m�n maliyeti.
		if(arac2_maliyet < arac1_maliyet){ //En ucuz maliyeti istedi�imizden maliyet kar��la�t�rmas� yap�l�yor.
			fprintf(dosya,"%d\n",2*x12); //E�er b�yleyse toplam maliyetimi yazd�r�yorum.
			fprintf(dosya,"# Y�kleme Plani\n"); // Y�kleme plan�n� dosyaya yazd�r�yorum.
			yerlestirme1(arac2_adet, x8, x7, sayac1, sayac2, x1, x2, x3, x4);
			for(p=0; p<arac2_adet; p++){
			fprintf(dosya,"%dx%d: (%d)\n", x8, x7, arac2_adet); // E�er ikinci arac�n maliyeti ilk ara�tan k���k ise ilk arac�m�n boyutlar�n� ve adetini dosyama yazd�r�yorum.
			for(i=0; i<x8; i++){
			for(j=0; j<x7; j++){
				if(sayac1!=0){
				myArray1 [i] [j] = paket1_boyut1*paket1_boyut2; //myArray1 i�erisine ilk paketlerimin alanlar�n� yazd�r�yorum.
					fprintf(dosya,"%dx%d > ", x1, x2); //�lk paketlerimin boyutlar�n� dosyaya yazd�r�yorum.
					fprintf(dosya,"( %d , %d )\n",i,j);	//�lk paketimin Array i�erisindeki yerle�im �eklini dosyaya yazd�r�yorum.
					sayac1--;} // �lk paketlerimin toplam alan�n� s�rekli azalt�yorum.
					else{
						if(sayac2!=0){
							myArray1[i][j] = paket2_boyut1*paket2_boyut2; //myArray1 i�erisine ikinci paketlerimin alanlar�n� yazd�r�yorum.
							fprintf(dosya,"%dx%d > ",x3, x4); // �kinci paketimin boyutlar�n� dosyaya yazd�r�yorum.
							fprintf(dosya,"( %d , %d ) ", i,j); //�kinci paketimin Array i�erisindeki yerle�im �eklini dosyaya yazd�r�yorum.
							sayac2--;}}}} // �kinci paketimin toplam alan�n� s�rekli azalt�yorum.
							fprintf(dosya,"%s\n");}} //Dosyamda bu sat�r� bo� b�rak�yorum.
							
	//Yazm�� oldu�um kodun devam� da ayn� mant�kta ilerlemektedir.
		else{
			fprintf(dosya,"%d\n",x11);
			fprintf(dosya,"# Y�kleme Plani\n");
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
			fprintf(dosya,"# Y�kleme Plani\n");
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
			fprintf(dosya,"# Y�kleme Plani\n");
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
			fprintf(dosya,"# Y�kleme Plani\n");
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
			fprintf(dosya,"# Y�kleme Plani\n");
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
							
   fclose(fp); //Okuma i�lemini bitiriyorum.
   fclose(dosya); // Dosyaya yazd�rma i�lemini bitiriyorum.
   
		return 0;
	}
