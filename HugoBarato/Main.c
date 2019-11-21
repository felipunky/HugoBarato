#include <math.h>
#include <stdio.h>

int Square( int y );
double SquareRoot( int y );

int main() 
{

	for( int x = 1; x <= 10; ++x )
	{
	
		printf( "%d ", Square( x ) );
	
	}

	printf( " \n" );

	for( int i = 1; i <= 10; ++i )
	{

		printf( "%.2lf ", SquareRoot( ( double ) i ) );

	}

	printf( " \n" );

}

int Square( y )
{

	return y * y;

}

double SquareRoot( y )
{

	return sqrt( y );

}