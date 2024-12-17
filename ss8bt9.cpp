#include<stdio.h>
int main(){
	int sizeA=8,countMax=0,count=0;
	int a[]={3,1,0,7,2,0,0,6};
	int say=a[0];
	for(int i=0;i<sizeA;i++){
		int count=0;// dat lai 0 sau moi lan lap 
		for(int j=0;j<sizeA;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count>countMax){
			countMax=count;
			say=a[i];
		}
	}
	printf("so phan tu suat hien nhieu nhat trong mang la: %d",say);
	return 0;
}
