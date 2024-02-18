#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char kelime[6]={"roket"};
	char tahmin[6];
	char olmayan[21];
	char hatalikonum[21];
	int flag=1;
	int i,a=0,b=0;
  	while(1){
		printf("\nlutfen tahmininizi kucuk harflerle ve 5 harf olacak sekilde giriniz");
		scanf(" %s", tahmin);
		printf("girdi: %s\t", tahmin);
		if (strcmp(tahmin, kelime) == 0) {
            		printf("\nTebrikler! Gizli kelimeyi buldunuz: %s\n", kelime);
            		break;
        	}
  	return 0;
}
