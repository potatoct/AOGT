#include <iostream>
#include <windows.h>

using namespace std;


HANDLE h= GetStdHandle (STD_OUTPUT_HANDLE) ;

void g () { SetConsoleTextAttribute ( h , 2 ) ; }

void w () { SetConsoleTextAttribute ( h , 7 ) ; }

void b () { SetConsoleTextAttribute ( h , 1 ) ; }

void c () { SetConsoleTextAttribute ( h , 3 ) ; }

void bar () { 
	c () ; cout << "=================================== \n" ; w () ;
}

int main(){
	
	int  num , num2 , i , a ;
	
	do {
	
	bar () ;
		cout << " Armor \n" << " Of \n" << " God \n" << " Tool \n" ;
	
	bar () ;
		cout << " Stack convertor \n" ;
		
	bar () ;
		cout << " Input your number " ;
		g () ; cin >> num;
		w () ;
		
		num2 = num / 99 ;
		i = num % 99 ;
	
	bar () ;
		cout << " You have " ;
		g () ; cout << num2 ;
		b () ;	if ( num2 > 1 ) cout << " Stacks " ;
				else cout << " Stack " ;
		g () ; cout << i;
		b () ;	if ( i > 1 ) cout << " Pieces " ;
				else cout << " Piece " ;
		
	
	cout << endl ;
	bar () ;
		cout << " Press number 0 to close \n";
		cout << " Press any number to restart \n" ;
		cin >> a ;
		
	system ( " cls " ) ;
	
	} while ( a != 0 ) ;
	
	return 0;
}
