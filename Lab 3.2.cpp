#include <stdio.h>
int main() {
	int i = 0 ;
	int N = 7 ;
	printf( "--|Show'Hello world' to screen %d lines\n" , N ) ;
	for( i = 0 ; i < N ; i++ ) { 
		printf( "[ %d ] Hello World \n" , i ) ;
	}//end for
	char star ='*'; 
	int     b = 8 ; 
	int     c = 0 ;
	int     d = 0 ;
	printf( "\n" ) ; 
	while( c < b ) { 
		d = 0 ;	
		while( d < b ) { 
			if( c < d ) 
			printf( "%c", star ) ; 
			d++ ; 
		}//end while d<b
		printf( "%s", "\n" ) ; 
		c += 1 ;
	}//end while c<b
	return 0 ;	
}//end main function
