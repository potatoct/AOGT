#include <iostream>
#include <windows.h>
//	Rota
using namespace std;
// Kl07
HANDLE h= GetStdHandle (STD_OUTPUT_HANDLE) ;

void g () { SetConsoleTextAttribute ( h , 2 ) ; }

void w () { SetConsoleTextAttribute ( h , 7 ) ; }

void b () { SetConsoleTextAttribute ( h , 1 ) ; }

void c () { SetConsoleTextAttribute ( h , 3 ) ; }

void bar () { 
	c () ; cout << "====================================== \n" ; w () ;
}

int main(){
	
	int  num , num2 , i , a , b , k = 1 , h = 0 ;
	
	const char* spam [ 2 ] = { " % " , " Personal stat " } ;
	
	do {
	
	bar () ;
		cout << " Armor \n" << " Of \n" << " God \n" << " Tool \n" ;
		
	bar () ;
		cout<< spam [ 1 ] << "Convertor \n" ;
		
	bar () ;
		cout << " Press any number to convert" ;
		cout << spam [ 0 ] << "to" << spam [ 1 ] << endl ;
		cout << " Press number 0 to convert" ;
		cout << spam [ 1 ] << "to" << spam [ 0 ] << endl ;
		cin >> b ;
		
	bar () ;
		if ( b > 0 ) { k = 0 ; h = 1 ; }	
		g () ; cout << spam [ k ] ;
		w () ; cout << "to" ;
		g () ; cout << spam [ h ] ;
		w () ; cout << "Convertor \n" ;
		
	bar () ;
		cout << " Input your" ;
		g () ; cout << spam [ k ] ;
		cin >> num;
		
	bar () ;
		switch ( b ) {
		
			case 0 : { //000000000000
			
				if ( num >= 255 ) {
					cout << " You have " ;
					g () ; cout << "75.0%\n" ;
					c () ; cout << " Max personal stat is 255 " ;
				}
			
				else {
					num2 = num*10 / 34 ;
					i = num*10 % 34 ;
					cout << " You have " ;
					g () ; cout << num2 << "." << i << spam [ 0 ] ;
				}
			break;
			}
		
			default : {
			
				if ( num >= 75 ) {
					cout << " You need " ;
					g () ; cout << "255 Points\n" ;
					c () ; cout << " Max % is 75% " ;
				}
			
				else {
					num2 = ( num * 34 ) / 10 ;
					i = ( num * 34 ) % 10 ;
	
					cout << " You need " ;
					g () ; cout << num2 << "." << i << " Points";
				
					if ( i >= 1 ){
						w () ; cout << "\n recommended " ;
						num2 += 1 ;
						g () ; cout << num2 << " Points";
					}
				}
			
			break;
			}	
		}
	
	cout << endl ; bar () ;
		cout << " Press any number to restart \n" ;
		cout << " Press number 0 to close \n";
		cin >> a ;
		
	system ( " cls " ) ;
	} while ( a != 0 ) ;
	
	return 0;
}
