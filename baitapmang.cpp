#include<string.h>
#include<conio.h>
#include<stdio.h>
//bai 1: nhap mang
void Nhapmang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
//bai 2: in mang	
}
void Inmang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("\nmang[%d]=%d",i,mang[i]);
	}
}
//bai 3: tinh tong giai thua
int gt(int n){
	int i, gt=1;
    for(i = 1; i <= n; i++)
    {
        gt=gt*i;
    }
   	return gt;
}
//bai 4: dem chuoi ki tu
int ChuoiKiTu(char chuoi[50])
{
	int dem=0;
	for(int i=0;i<strlen(chuoi);i++)
	{
		if(chuoi[i]=' ') dem++;
    }	
		printf("chuoi da nhap co %d ki tu",dem);
		return dem;
	
}

int main(){
	int mang[100];
	int n,j,tong=0;
	char chuoi[100]; 
	printf("nhap n=");
	scanf("%d",&n);
	Nhapmang(mang,n);
	Inmang(mang,n);
		for (j=0 ; j<n ;j++){
		tong=tong+gt(mang[j]);
	}
	printf("\ntong giai thua =%d",tong);
	printf("\nnhap chuoi: ");
	scanf("%s",chuoi );
	ChuoiKiTu(chuoi);
	printf("\n");
		
}
	



