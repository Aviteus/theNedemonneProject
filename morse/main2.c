#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	int sizeMessage = 10;
	int message[sizeMessage];
	int outmessage[sizeMessage*17];
	
    int i;
	int j;
	for(i=0;i<10;i++){
		message[i] = i*2+1;
	}

	
	// Dictionnaire Lettre -> Chaine charactères de 0 OU 1
	char * dictionnaire[37];
	dictionnaire[0]  = "11011011011011000";
	dictionnaire[1]  = "1011011011011000";
	dictionnaire[2]  = "101011011011000";
	dictionnaire[3]  = "10101011011000";
	dictionnaire[4]  = "1010101011000";
	dictionnaire[5]  = "101010101000";
	dictionnaire[6]  = "1101010101000";
	dictionnaire[7]  = "11011010101000";
	dictionnaire[8]  = "110110110101000";
	dictionnaire[9]  = "1101101101101000";
	dictionnaire[10] = "1011000";
	dictionnaire[11] = "11010101000";
	dictionnaire[12] = "110101101000";
	dictionnaire[13] = "110101000";
	dictionnaire[14] = "1000";
	dictionnaire[15] = "10101101000";
	dictionnaire[16] = "1101101000";
	dictionnaire[17] = "1010101000";
	dictionnaire[18] = "101000";
	dictionnaire[19] = "1011011011000";
	dictionnaire[20] = "1101011000";
	dictionnaire[21] = "10110101000";
	dictionnaire[22] = "11011000";
	dictionnaire[23] = "1101000";
	dictionnaire[24] = "11011011000";
	dictionnaire[25] = "101101101000";
	dictionnaire[26] = "1101101011000";
	dictionnaire[27] = "101101000";
	dictionnaire[28] = "10101000";
	dictionnaire[29] = "11000";
	dictionnaire[30] = "101011000";
	dictionnaire[31] = "101011000";
	dictionnaire[32] = "1011011000";
	dictionnaire[33] = "110101011000";
	dictionnaire[34] = "1101011011000";
	dictionnaire[35] = "110110101000";
	dictionnaire[36] = "0000";


	// Transformation du dictionnaire en Chaine de int de 0 ou 1
	int dictionnaire2[37][17];
	for(i=0;i<37;i++){	
		int test = strlen(dictionnaire[i]);	
		for(j=0;j<strlen(dictionnaire[i]);j++){
			dictionnaire2[i][j] = (int) dictionnaire[i][j] - '0';
		}	
	}

	int num =0;  // Index de l'entier à envoyer ensuite
	for(i=0;i<sizeMessage;i++){
		//printf("%d\n",message[i]);
		for(j=0;j<strlen(dictionnaire[message[i]]);j++){
			outmessage[num] = dictionnaire2[message[i]][j];
			printf("%d",outmessage[num]);
			num++;
		}
		//printf("\n");			
	}	
}


	 





	

