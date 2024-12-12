#include<stdio.h>
/*
	Khai bao va gan gia tri cho 1 chuoi bat ki
	+ dem so luong ki tu la chu cai
	+ dem so luong ki tu la chu so
	+ dem so luong ki tu la ki tu dac biet
	INPUT: hfdf23@r4r!
	OUTPUT:
		+ 6 ki tu la chu cai
		+ 3 ki tu la chu so
		+ 2 ki tu la chu cai dac biet
*/
int main(){
	char str[100]="hfdf23@r4r!";
	int countCharacter=0;
	int countCharecterNumber=0;
	int countCharacterSpecial=0;
	int size=strlen(str);
	for(int i=0;i<size;i++){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			countCharacter++;
		}else if(str[i]>='0' && str[i]<='9'){
			countCharecterNumber++;
		}else{
			countCharacterSpecial++;
		}
	}
	printf("So luong chu cai trong mang la: %d\n",countCharacter);
	printf("So luong chu so trong mang la: %d\n",countCharecterNumber);
	printf("So luong ki tu dac biet trong mang la: %d\n",countCharacterSpecial);
	return 0;
}
