#include<stdio.h>
int main(){
int arrayInt[]={1,3,5,7,9};
int dodai = sizeof(arrayInt) / sizeof(arrayInt)[0];
    printf(" co cac phan tu trong mang la: \n");
    for(int i=0;i<dodai;i++){
    	printf(" arrayInt[%d]= %d\n",i,arrayInt[i]);
	}
	printf("do dai cua mang la: %d\b",dodai);
	return 0;
}
