#include <stdio.h>
int main(){
	char text[]="hello world";
	int size=strlen(text);
	for(int i=0;i<size;i++){
		if(i==0 || i>0 && text[i-1]== ' '){
			text[i]=toupper(text[i]);
		}
	}
	printf("%s",text);
	return 0;
}
