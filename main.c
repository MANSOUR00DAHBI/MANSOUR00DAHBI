
#include <stdio.h>

 int c , nc,nl ,nw,cw=0 ; // Declartion count and word and line 
 char TEXTE[1024];  // Array Store text 
 int cdiget[128]={0};
 int wdiget[128]={0};
#define GET(c) ((c)=getchar())
#define GET_CHAR GET(c) !=EOF
 #define Line printf("\n")
int main (){

	printf(" Enter text ( CTRL+D to End ) \n");
    nl=nw=c =0;
    while( GET_CHAR){
    	++nc;
        ++cw;
    TEXTE[nc]=c;
    wdiget[nw]= cw ;
    if(c == '\n'){
        ++nl;
    }if(c == ' ' || c == '\t' || c == '\n'){
        ++nw;
        cw =0;
    }
    if (c > 0 && c < 128){
        ++cdiget[c];
    }
   // wdiget[nw] = cw;
    };

    Line;
    for (int i = 0; i < nw; ++i)
    {
        for (int j = 0; j < wdiget[i]; ++j){
            printf("*" );
        }
        Line;
    }
    Line;

    printf("count : %d Word : %d Line : %d\n",nc,nw+1,nl+1 );
    Line;
    for (int i = 0; i < c; ++i){
    	printf("%c", TEXTE[i]);
    }
    Line;
    int i ,j ;
    for( i = 0; i < 127;++i){
        if (cdiget[i]  > 0 && (i > 32 && i < 126) ){
            printf(" %c : ",i );
            for ( j = 0; j < cdiget[i]; ++j){
                putchar('*');
            }
         printf(" %d \n", j);
        }
    }
    Line;
	return 0;
}
