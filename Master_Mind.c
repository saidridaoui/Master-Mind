#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<time.h>
//les variable du programme
int i,j,a[5],b[5],p[5],z,c=0,jok,d=0,h=1,f[5],x=0,y=0,Cp=0,k,v=0,choix=1,m=0,w=0,compteur=0,echec_choix=0,echec_Jok=0,cho;
FILE *FICHIER;
	char SCORE[30],name[30];
//fonction affiche la console en mode personalise
void showConsole(){
    HWND window;
    AllocConsole();
    window = FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,3);
}
//fonction des Couleurs:
void color(int Texte,int Fond){
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,Fond*16+Texte);
	}
// fonction voiture Félicitation
void voiture(void){
	for(k=0;k<=5;k++){
        color(k+9,0);
        for(i=0;i<=8;i++){
            v++;
            printf("\n\n\n");
            for(j=0;j<=v;j++){printf("\t");} printf("         ²²²²²²²²²²²²²²²²²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("        ²²      ²²        ²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("       ²²²      ²²         ²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("      ²²²²      ²²          ²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("   ²²²²²²²²²²****************²²²²²²²²²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("   ²²²²²²²²²²* FELICITATION *²²²²²²²²²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("   ²²²²²²²²²²****************²²²²²²²²²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("   ²²²²²²      ²²²²²²²²²²²²²      ²²²²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("           ²²                 ²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("          ²²²²               ²²²² \n");
            for(j=0;j<=v;j++){printf("\t");} printf("           ²²                 ²² \n");

            color(15,0);
            printf("\n\n\n");
            printf("\t\t\t\t\t\t\t\t\t Felicitation !!\n\n");
            printf("\t\t\t\t\t\t\t\t - Votre score est : %d/20\n\n\n",20-h);
            printf("\t\t\t\t\t\t\t---------------- Veuillez Patienter ... ----------------");
            printf("\n\n\n");
            color(k+9,0);

            Sleep(150);
            system("cls");
        }
    v=0;
    }
}


// Logo Master Mind
void logo(void){
	color(10,0);printf("\n\n");
                printf("\t\t\t\t\t ²²²   ²²²  ²²²          ²²²²   ²²²²²²²²²²  ²²²²²²²²  ²²²²²²    \n");Sleep(150);
				printf("\t\t\t\t\t ²²²² ²²²²  ²²²²        ²²  ²²      ²²      ²²        ²²    ²²  \n");Sleep(150);
				printf("\t\t\t\t\t ²² ²²² ²²  ²² ²²      ²²           ²²      ²²        ²²     ²² \n");Sleep(150);
				printf("\t\t\t\t\t ²²  ²  ²²  ²²  ²²       ²²         ²²      ²²²²²²²²  ²²    ²²  \n");Sleep(150);
				printf("\t\t\t\t\t ²²     ²²  ²²²²²²²        ²²       ²²      ²²        ²²²²²²    \n");Sleep(150);
				printf("\t\t\t\t\t ²²     ²²  ²²    ²²        ²²      ²²      ²²        ²²   ²²   \n");Sleep(150);
				printf("\t\t\t\t\t ²²     ²²  ²²     ²²  ²²  ²²       ²²      ²²        ²²    ²²  \n");Sleep(150);
				printf("\t\t\t\t\t ²²     ²²  ²²      ²²  ²²²²        ²²      ²²²²²²²²  ²²     ²² \n\n\n");Sleep(150);

	color(2,0);
	printf("\t\t\t\t\t\t\t ²²²   ²²²  ²²²²²²²²  ²²²      ²²  ²²²²²²²    \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²²²² ²²²²     ²²     ²²²²     ²²  ²²    ²²   \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²² ²²² ²²     ²²     ²² ²²    ²²  ²²     ²²  \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²²  ²  ²²     ²²     ²²  ²²   ²²  ²²      ²² \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²²     ²²     ²²     ²²   ²²  ²²  ²²      ²² \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²²     ²²     ²²     ²²    ²² ²²  ²²     ²²  \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²²     ²²     ²²     ²²     ²²²²  ²²    ²²   \n");Sleep(150);
	printf("\t\t\t\t\t\t\t ²²     ²²  ²²²²²²²²  ²²      ²²²  ²²²²²²²    \n\n\n");Sleep(150);
	color(11,0);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBy: - Radwane Mabchour \n");Sleep(150);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    - Nawfal Rabit \n\n\n");Sleep(250);
	}
//Felicitation
void felicitation(void){
    color(0,0);printf("\t\t ²²²²²²²²²²²²     ²²                  ²²²² \n");Sleep(150);
	color(1,0);printf("\t\t ²²²²²²²²²²²²     ²²                ²²²²²²     ²²²²²²²²²²         ²²²²²²²²²²                             \n");Sleep(100);
	color(2,0);printf("\t\t ²²               ²²              ²²               ²²                 ²²                                 \n");Sleep(100);
	color(3,0);printf("\t\t ²²        ÛÛÛ    ²²        ÛÛ  ²²            ÛÛ   ²²                 ²²     ÛÛ                          \n");Sleep(100);
	color(4,0);printf("\t\t ²²²²²²²  ÛÛ ÛÛ   ²²           ²²                  ²²       ÛÛÛÛÛ     ²²              ²²²        ÛÛ ÛÛÛÛÛ    \n");Sleep(100);
	color(5,0);printf("\t\t ²²      ÛÛ   ÛÛ  ²²        ÛÛ ²²             ÛÛ   ²²     ÛÛ     ÛÛ   ²²     ÛÛ     ²²   ²²      ÛÛÛ    ÛÛ    \n");Sleep(100);
	color(6,0);printf("\t\t ²²     ÛÛ   ÛÛ   ²²        ÛÛ ²²             ÛÛ   ²²   ÛÛ        ÛÛ  ²²     ÛÛ    ²² ²____²²    ÛÛ     ÛÛ   \n");Sleep(100);
	color(7,0);printf("\t\t ²²     ÛÛÛÛÛ     ²²        ÛÛ  ²²            ÛÛ   ²²   ÛÛ        ÛÛ  ²²     ÛÛ   ²²       ²²    ÛÛ     ÛÛ   \n");Sleep(100);
	color(8,0);printf("\t\t ²²     ÛÛ     Û  ²²        ÛÛ    ²²          ÛÛ   ²²    ÛÛ       ÛÛ  ²²     ÛÛ    ²²     ²²     ÛÛ     ÛÛ   \n");Sleep(100);
	color(9,0);printf("\t\t ²²       ÛÛÛÛÛ   ²²²²²²²² ÛÛÛÛ     ²²²²²²   ÛÛÛÛ  ²²     ÛÛÛÛÛÛÛ ÛÛ  ²²    ÛÛÛÛ     ²²²²²       ÛÛ     ÛÛ   \n\n\n");Sleep(250);
	color(3,0);
	puts("\t\t\t\t\t\t\t            ²²            ");Sleep(50);
	puts("\t\t\t\t\t\t\t           ²²²²           ");Sleep(50);
	puts("\t\t\t\t\t\t\t         ²²²²²²²²         ");Sleep(50);
	puts("\t\t\t\t\t\t\t       ²²²²²²²²²²²²       ");Sleep(50);
	puts("\t\t\t\t\t\t\t      ²²²²²²²²²²²²²²      ");Sleep(50);
	puts("\t\t\t\t\t\t\t     ²²²²²²    ²²²²²²     ");Sleep(50);
	puts("\t\t\t\t\t\t\t    ²²²²²        ²²²²²    ");Sleep(50);
	puts("\t\t\t\t\t\t\t   ²²²              ²²²   ");Sleep(50);
	puts("\t\t\t\t\t\t\t  ²²   FeliCitaTioN   ²²  ");Sleep(50);
	puts("\t\t\t\t\t\t\t  V       !!!!!        V  ");Sleep(1000);
	system("cls");
}
//Game Over
void game_over(void){
    color(12,0);
    printf("\n\n");
    printf("\t\t\t ²²²²²²    ²²²²²²²   ²²   ²²   ²²²²²²  \t\t   ²²²²²²    ²²          ²²   ²²²²²²   ²²²²²² \n");Sleep(30);
    printf("\t\t\t²²    ²²   ²²   ²²   ²²² ²²²   ²²      \t\t  ²²    ²²    ²²        ²²    ²²       ²²   ²² \n");Sleep(30);
    printf("\t\t\t²²         ²²   ²²   ²² ² ²²   ²²      \t\t  ²²    ²²     ²²      ²²     ²²       ²²   ²² \n");Sleep(30);
    printf("\t\t\t²²  ²²²²   ²²²²²²²   ²²   ²²   ²²²²²²  \t\t  ²²    ²²      ²²    ²²      ²²²²²²   ²²²²²² \n");Sleep(30);
    printf("\t\t\t²²    ²²   ²²   ²²   ²²   ²²   ²²      \t\t  ²²    ²²       ²²  ²²       ²²       ²²   ²² \n");Sleep(30);
    printf("\t\t\t²²    ²²   ²²   ²²   ²²   ²²   ²²      \t\t  ²²    ²²        ²²²²        ²²       ²²    ²² \n");Sleep(30);
    printf("\t\t\t ²²²²²²    ²²   ²²   ²²   ²²   ²²²²²²  \t\t   ²²²²²²          ²²         ²²²²²²   ²²     ²² \n");Sleep(30);
}
//fonction qui lance le chargement en cours:
void zizo(void){
	color(13,0);
    printf("\n\n\n\n\t\t\t\t\t\t\t\tCHARGEMENT EN COURS ...\n");
	int zoz;
	printf("\t\t\t\t\t²");
	for(zoz=0;zoz<20;zoz++){
	printf("²");Sleep(60);}
	for(zoz=20;zoz<30;zoz++){
		printf("²");Sleep(100);}
	for(zoz=30;zoz<70;zoz++){
	printf("²");Sleep(10);}

	system("cls");
	}
//fonction qui evite la répétition et les nombres supérieures à 9 pour le code du joueur 1
void rep_a(void){
	compteur=0;x=0;
	while(x==0){

	y=0;
		for(k=0;k<=4;k++){if(compteur<=4){scanf("%d",&a[k]);compteur++;}
		if(a[k]>=10){y=2;}}

		for(i=0;i<=4;i++){
			for(j=0;j<=4;j++){
				if((a[i]==a[j])&&(i!=j)){y=1;}}}

	if(y==2){color(12,0);
		printf("\t Erreur !! \n\t vous avez tapee un nombre superieure a 9 !! \n --> Saisissez un nouveau code : \t");
				w=0;color(15,0);
				for(k=0;k<=4;k++){scanf("%d",&a[k]);}}

	if(y==1){color(12,0);
			printf("Erreur !! \n\n Vous avez repete un chiffre \n\n Saisir a nouveau: \t");
			color(15,0);
			for(i=0;i<=4;i++){scanf("%d",&a[i]);}}
	if(y!=1 && y!=2){x=3;}
	}
}
//fonction qui evite la répétition pour b:
void rep_b(void){
	x=0;compteur=0;
	while(x==0){

	y=0;
		for(k=0;k<=4;k++){if(compteur<=4){scanf("%d",&b[k]);compteur++;}
		if(b[k]>=10){y=2;}}

		for(i=0;i<=4;i++){
			for(j=0;j<=4;j++){
				if((b[i]==b[j])&&(i!=j)){y=1;}}}

	if(y==2){color(12,0);
		printf("\t Erreur !! \n\t vous avez tapee un nombre superieure a 9 !! \n --> Saisissez un nouveau code : \t");
				w=0;color(15,0);
				for(k=0;k<=4;k++){scanf("%d",&b[k]);}}

	if(y==1){color(12,0);
			printf("Erreur !! \n\n Vous avez repete un chiffre \n\n Saisir a nouveau: \t");
			color(15,0);
			for(i=0;i<=4;i++){scanf("%d",&b[i]);}}
	if(y!=1 && y!=2){x=3;}
	}
}
//Fonction des instruction
void menu_0(void){
	color(3,0);
	printf("\n\n \t\t\t Taper : 1- Pour aller au Instructions \n\t\t\t\t - Sinon tapez un autre nombre \n");
	printf("\n \t\t Inserez Votre Choix : ");scanf("%d",&cho);
	if(cho==1){
		color(15,0);
		printf("\n\n\n \t Principe : trouver un code de 5 chiffres en se basant sur le nombre des \n\t\tchiffres biens places et mal places.\n\n\t ");Sleep(200);
		printf("Methode : Le jeu doit se derouler en suivant les etapes suivantes :\n\t\t 1. Le joueur 1 propose un code (entrée au clavier de 5 chiffres)");
		printf("\n\t\t 2. Le joueur 2 propose un autre code de 5 chiffres.\n\t\t 3. Le programme indique le nombre des chiffres bien places et mal places.");
		printf("\n\t\t 4. Si le code est trouve le programme s’arrete.\n");
		printf("\t\t 5. Si le nombre max d’essai est atteint (20 tentatives), le jeu s’arrête avec affichage du code.\n\n\n");
		system("pause");
	}
	color(3,0);

}

//fonction affichage du menu:
void menu(){
	color(11,0);
	system("cls");
	printf("le MENU : \n\n");
	printf("Dans ce jeu on a deux niveau de difficultes :\n\n");Sleep(200);
	printf("\t - Niveau 1 (debutant): Tous les chiffres du codes sont distincts. \n");Sleep(200);
	printf("\t - Niveau 2 (expert): Les chiffres peuvent se repeter.\n\n\n\n");Sleep(200);
	printf("\n\n\n\n\n \t\t\t Pour (niveau 1) Taper '1'\n \t\t\t Pour (niveau 2) Taper '2'\n\n \t\t\t\t\t  Entrez Votre Choix : ");Sleep(200);
	scanf("%d",&z);
}
//fonction qui execute le code: (Niveau 1)
void master1(){
	for(i=0;i<=4;i++){if(a[i]==b[i]){c++;}}
	for(i=0;i<=4;i++){for(j=0;j<=4;j++){if((a[i]==b[j])&&(i!=j)){d++;}}}
	printf("\n\n  - %d Bien Place \t\t - %d Mal Place\n\n\n",c,d);Sleep(800);}
//fonction qui execute le code: (Niveau 2)
void master2(){
	for(i=0;i<=4;i++){p[i]=a[i];}

	for(i=0;i<=4;i++){if(a[i]==b[i]){a[i]=50+Cp;b[i]=60+Cp;Cp++;c++;}}

	for(i=0;i<=4;i++){for(j=0;j<=4;j++){if((a[i]==b[j])&&(i!=j)){a[i]=70+Cp;b[j]=80+Cp;Cp++;d++;}}}

	for(i=0;i<=4;i++){a[i]=p[i];}
	printf("\n\n  - %d Bien Place \t\t - %d Mal Place\n\n\n",c,d);Sleep(800);}

// Condition du choix de niveau
void ver_choix(void){
	echec_choix=0;
	while(echec_choix==0){
		if(z!=1 && z!=2){echec_choix=1;}
		if(echec_choix==1){color(12,0);
					printf(" \n\n\t\t Votre choix n'existe pas !! \n\t\t Entrer a nouveau : ");
					scanf("%d",&z);
					echec_choix=0;color(11,0);	}
		if(z==1 || z==2){echec_choix=1;}
			}
	}

// Condition du choix de Joker
void ver_Jok(void){
	echec_Jok=0;
	while(echec_Jok==0){
		if(jok!=0 && jok!=1){echec_Jok=1;}
		if(echec_Jok==1){color(12,0);
						printf(" \n\n\t\t Votre choix n'existe pas !! \n\t\t Entrer a nouveau : ");
						scanf("%d",&jok);
						echec_Jok=0;color(3,0);}
		if(jok==0 || jok==1){echec_Jok=1;}
			}
	}
//Creation du fichier
void fich(void){


	FICHIER=fopen("master_mind.txt","w");
	printf("Entrez votre nom : ");
	scanf("%s",name);
	printf("Felicitation, %s \n",name);
	printf("Votre score est: %d",20-h+1);
	fprintf(FICHIER,"Felicitation, %s\n",name);
	fprintf(FICHIER,"Votre score est: %d",20-h+1);
	fclose(FICHIER);

	printf("\n\n\nVeuillez patienter ...");
	Sleep(2500);
}


main()
{
showConsole();
while(choix==1){
	int k=0,r=0,n,w=0,m=0,e=0;
	z=1;c=0;d=0;h=0;x=0;y=0;Cp=0;v=0;
		zizo(); // Fonction de chargement en cour ...
		logo();
		menu_0();
		menu();
		ver_choix();
		color(15,0);
if(z==1){
puts("Joueur N_1 entrer le code:");
rep_a();                                     // Vérification du code du joueur 1 (si les chiffres se répétent ou si il se trouve un chiffres >=10
system("cls");
puts("le code est:");
for(k=0;k<=4;k++){printf("%d",a[k]);Sleep(150);}
system("cls");
while((r<20)&&(c!=5)){
		if(h==10){
			color(3,0);
			puts("\t Vous etes dans l'essai 10 vous pouvez utiliser le JKOKER.\n\n Le JOKER te rend la posibilité de savoir un chiffre du code.\n Mais si vous utiliserez le JOKER vous perderez 3 essaies \n ----> !! vous pouvez l'utuliser juste une seule foi !!\n\n - si vous voulez utiliser le JOKER tapper '1'\n - sinon tapper '0'");Sleep(150);
			puts("\n\n tapper votre choix");scanf("%d",&jok);
			ver_Jok();}
			color(15,0);
	if(h>=10){
		if(jok==1){
			r=r+3;

			puts("entrez la position du nombre que vous voulez afficher (1,2,3,4,5)");scanf("%d",&n);
			printf("le nombre que vous voulez afficher est : %d \n",a[n-1]);Sleep(100);

			printf("il vous reste que %d Tentative(s) \n\n",17-h);
			jok=2;}}
	if((h>=11)&&(h<=17)){
		if(jok==0){
			color(3,0);
			puts("\n Vous pouvez utiliser le JOKER \n\n si vous voulez l'utuliser taper '1' sinon taper '0'");scanf("%d",&jok);
			ver_Jok();
			if(jok==1){
			r=r+3;
			puts("entrez la position du nombre que vous voulez afficher (1,2,3,4,5)");scanf("%d",&n);
			printf("le nombre que vous voulez afficher est : %d \n",a[n-1]);Sleep(100);

			printf("il vous reste que %d Tentative(s) \n\n",17-h);
			jok=2;
			color(15,0);
			}}}
	c=0;d=0;
	color(15,0);
	printf("\n\n Joueur N_2: \n\n Tentative %d : ",h);
	m=0;
	rep_b();                                   // Vérification du code du joueur 2 (si les chiffres se répétent ou si il se trouve un chiffres >=10
	master1();
	if(c==5){
			system("cls");
			zizo();
			felicitation();
			voiture();
    }r++;h++;
	}
}

if(z==2){
puts("Joueur N_1 entrer le code:");
while(m==0){
		for(k=0;k<=4;k++){scanf("%d",&a[k]);
		if(a[k]>=10){w=5;}}
		if(w==0){m=3;}
		if(w>1){color(12,0);
		printf("Erreur !! \n vous avez tapee un nombre superieure a 9 !! \n Saisissez un nouveau code : \t");

				w=0;color(15,0);}
		}

system("cls");
puts("le code est:");
for(k=0;k<=4;k++){printf("%d",a[k]);Sleep(150);}
system("cls");
while((r<20)&&(c!=5)){
		if(h==10){
			color(3,0);
			puts("\t Vous etes dans l'essai 10 vous pouvez utiliser le JKOKER.\n\n Le JOKER te rend la posibilité de savoir un chiffre du code.\n Mais si vous utiliserez le JOKER vous perderez 3 essaies \n ----> !! vous pouvez l'utuliser juste une seule foi !!\n\n - si vous voulez utiliser le JOKER tapper '1'\n - sinon tapper '0'");Sleep(150);
			puts("\n\n tapper votre choix");scanf("%d",&jok);
			ver_Jok();}
			color(15,0);
	if(h>=10){
		if(jok==1){
			color(3,0);
			r=r+3;

			puts("entrez la position du nombre que vous voulez afficher (1,2,3,4,5)");scanf("%d",&n);
			printf("le nombre que vous voulez afficher est : %d \n",a[n-1]);Sleep(100);

			printf("il vous reste que %d Tentative(s) \n\n",17-h);
			jok=2;
			color(15,0);}}
	if((h>=11)&&(h<=17)){
		if(jok==0){
			color(3,0);
			puts("\n Vous pouvez utiliser le JOKER \n\n si vous voulez l'utuliser taper '1' sinon taper '0'");scanf("%d",&jok);
			ver_Jok();
			if(jok==1){
			r=r+3;
			puts("entrez la position du nombre que vous voulez afficher (1,2,3,4,5)");scanf("%d",&n);
			printf("le nombre que vous voulez afficher est : %d \n",a[n-1]);Sleep(100);

			printf("il vous reste que %d Tentative(s) \n\n",17-h);
			jok=2;
			color(15,0);
			}}}
	c=0;d=0;
	color(15,0);
	printf("\n\n Joueur N_2: \n\n Tentative %d : ",h);
	m=0;
	while(m==0){
		for(k=0;k<=4;k++){scanf("%d",&b[k]);
		if(b[k]>=10){w=5;}}
		if(w==0){m=3;}
		if(w>1){color(12,0);
		printf("Erreur !! \n vous avez tapee un nombre superieure a 9 !! \n Saisissez un nouveau code : \t");
		w=0;color(15,0);}
		}
	master2();
	if(c==5){
			system("cls");
			zizo();
			felicitation();
			voiture();
    }r++;h++;
	}}


if(c!=5){
	system("cls");
	game_over();
	Sleep(500);
	color(11,0);
	printf("\n\n\n");
	printf("\t\t\t\t\t\t\tLe code est : ");
	for(i=0;i<=4;i++){
        Sleep(300);
		printf("%d ",a[i]);
    }
	Sleep(3000);
}else{
    fich();
}

system("cls");
color(11,0);
printf("\n\n\n\n\t\t\t Tapez : 1- Pour Rejouer\n\t\t\t         2- Pour Quitter \n\n");
printf(" Inserez votre Choix : ");
scanf("%d",&choix);
if(c == 5){
    system("START Master_Mind.txt");
}

system("cls");

}
}
