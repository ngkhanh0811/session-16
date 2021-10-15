#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int asmt, lythuyet, thuchanh;
	char tieptuc;
	float dtb;
	do
	{
	dtb=xeploai(asmt,lythuyet,thuchanh);
	if(dtb==0)
	printf("\nTruot TB");
	else if(dtb==1)
	printf("\nDo TB");
	else if(dtb==2)
	printf("\nKha TB");
	else if(dtb==3)
	printf("\nGioi TB");
	else
	printf("\nKhong co gia tri phu hop, vui long kiem tra lai !");	
	printf("\nChon 'y' de tiep tuc hoac 'n' de ket thuc viec nhap diem ");
	printf("\nBan co muon tiep tuc nhap diem cho sinh vien khong ?");
	fflush(stdin);
	scanf("%c", &tieptuc);
    }
    while(tieptuc!='n');
    {
    	printf("\nKet thuc viec nhap diem");
	}
	return 0;
}
int xeploai(int asmt, int lythuyet, int thuchanh)
{
	float dtb;
	printf("\nVui long nhap diem asmt cua sinh vien :");
	scanf("%d", &asmt);
	printf("\nVui long nhap diem ly thuyet cua sinh vien :");
	scanf("%d", &lythuyet);
	printf("\nVui long nhap diem thuc hanh cua sinh vien :");
	scanf("%d", &thuchanh);
	dtb=(asmt+lythuyet+thuchanh)/3;
	printf("\nDiem trung binh  cua sinh vien la : %f", dtb);
	if(dtb<=40)
	dtb=0;
	else if(dtb<=60)
	dtb=1;
	else if(dtb>=61&&dtb<=79)
	dtb=2;
	else if (dtb>=80)
	dtb=3;
	return (dtb);
}
