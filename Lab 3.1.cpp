#include <stdio.h>
int main() {
	int   N   ;       
	float sum ;  
	char  x   ;    
	printf( "Please enter value:" ) ;
	scanf( "%d  %f  %c" , &N , &sum , &x ) ;
	printf( "%d  %.2f  %c" , N , sum , x ) ; 
	return 0 ; 
}
