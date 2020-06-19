/* PROGRAM MENGHITUNG VOLUME BANGUN RUANG BOLA */
/* Isam Maulana Maliki */
/* 197006016 */
/* Kelompok 4*/
#include <stdio.h>
main()
{
	float jari;
	float phi=3.14;
	float hasil;
	
	printf("Nama	 : Isam Maulana Maliki \n");
	printf("NPM	 : 197006016 \n");
	printf("Kelompok : 4 \n \n");
	
	printf("Program Menghitung Volume bangun ruang Bola \n");
	printf("Masukan Jari-Jari Bola (cm) : ");
	scanf("%f",&jari);
	hasil=(1.33333)*phi*(jari*jari*jari);
	printf("Jadi Volume Bola tersebut adalah : %.2f",hasil);
	puts(" ");
	return 0;
}
