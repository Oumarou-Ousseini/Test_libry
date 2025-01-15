#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.c"
int main() {
 int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 return EXIT_SUCCESS;

}

