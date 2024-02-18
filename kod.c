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
		for (i=0;i<6;i++){
			//harf doğru yerdeyse yazdır
        		if (tahmin[i] == kelime[i]) {
            			printf("%c", tahmin[i]);
        		}
            		//Harf hedef kelime de varsa ama yanlış yerdeyse,hatalikonum dizisine ekle
        		else if (strchr(kelime, tahmin[i]) != NULL) {
            			printf("_");
				hatalikonum[a]=tahmin[i];
				a++;
        		}
        		// Harf hedef kelime de yoksa,olmayan dizisine ekle
        		else {
            			printf("_");
				olmayan[b]=tahmin[i];
				b++;
			}
    	}
  	return 0;
}
