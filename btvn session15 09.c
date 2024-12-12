#include <stdio.h>
int main(){
    char text[]="xinchaovn";  
    char deleteChar;              
    printf("Nhap ki tu muon xoa: ");
    scanf("%c",&deleteChar);  
    int size=strlen(text);  
    int j=0;
    for(int i=0;i<size;i++){
        if(text[i]!=deleteChar){  
            text[j++]=text[i];  
        }
    }
    text[j]='\0';  
    printf("Chuoi sau khi xoa: %s",text);
    return 0;
}
