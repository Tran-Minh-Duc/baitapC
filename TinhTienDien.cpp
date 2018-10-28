#include<stdio.h>
#include<conio.h>
int main(){

    float somoi, socu, tien, tieuthu;
    printf("Nhap chi so cu = ");
    scanf("%f", &socu);
	 printf("Nhap chi so moi = ");
	  scanf("%f", &somoi);
	tieuthu=somoi-socu;
	if(somoi>socu){
		if(tieuthu<50){
			 tien=tieuthu*1500;
		}
		else if((tieuthu>=50)&&(tieuthu<=100)){
			tien=50*1500 + (tieuthu-50)*2000;
		}
		else {
			tien=50*1500 + 100*2000 + (tieuthu-150)*3000;
		}
		printf("\n Tien dien = %f", tien);
	}
	else {
		printf("Hay nhap lai");
		}
	}
