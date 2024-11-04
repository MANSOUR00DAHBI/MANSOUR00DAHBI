
#include <stdio.h>

 int c , nc;
 char TEXTE[1024]; 
#define GET(c) ((c)=getchar())
#define GET_CHAR GET(c) !=EOF
 #define Line printf("\n")
int main (){

	printf("Hello World !\n");
    while( GET_CHAR){
    	++nc;
    TEXTE[nc]=c;
    };
    Line;
    printf("%d\n",nc );
    Line;
    for (int i = 0; i < 100; ++i){
    	printf("-%c", TEXTE[i]);
    }
    Line;
	return 0;
}
