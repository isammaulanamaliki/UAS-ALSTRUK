/* PROGRAM MENGHITUNG BIAYA PANGGILAN DENGAN BENAR */
/* Isam Maulana Maliki */
/* 197006016 */
/* Kelompok 4*/
#include <stdlib.h>
#include <stdio.h>

int main(){
	printf("Nama	 : Isam Maulana Maliki \n");
	printf("NPM	 : 197006016 \n");
	printf("Kelompok : 4 \n \n");
	int jamA, jamB, menitA, menitB, detikA, detikB, waktuA, waktuB;
	int biaya;
	int detik;	
	printf("WAKTU PANGGILAN AWAL \n");
	printf("Masukan Waktu Memulai Panggilan (jam)   : ",jamB);scanf("%i",&jamB);
	printf("Masukan Waktu Memulai Panggilan (menit) : ",menitB);scanf("%i",&menitB);
	printf("Masukan Waktu Memulai Panggilan (detik) : ",detikB);scanf("%i",&detikB);
	printf("\n");

	printf("WAKTU PANGGILAN AKHIR \n");
	printf("Masukan Waktu Mengakhiri Panggilan (jam)   : ",jamA);scanf("%i",&jamA);
	printf("Masukan Waktu Mengakhiri panggilan (menit) : ",menitA);scanf("%i",&menitA);
	printf("Masukan Waktu Mengakhiri panggilan (detik) : ",detikA);scanf("%i",&detikA);
	printf("\n");
		
	waktuA = ((jamA*3600)+(menitA*60)+detikA);
	waktuB = ((jamB*3600)+(menitB*60)+detikB);
	detik = (waktuA - waktuB);
	biaya = (detik/30*700);
	
	printf("Lama Waktu Bicara Anda adalah : %d jam  %d menit %d detik \n",(jamA-jamB),(menitB-menitA),(detikA-detikB));
	printf("Jadi Biaya yang harus dikeluarkan adalah : Rp%i \n",biaya);
	
	system("pause");
	return 0;
}
