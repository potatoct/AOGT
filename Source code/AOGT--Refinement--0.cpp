#include <iostream>
#include <windows.h>

using namespace std;

HANDLE h= GetStdHandle (STD_OUTPUT_HANDLE) ;

void g () { SetConsoleTextAttribute ( h , 2 ) ; }

void w () { SetConsoleTextAttribute ( h , 7 ) ; }

void c () { SetConsoleTextAttribute ( h , 3 ) ; }

void r () { SetConsoleTextAttribute ( h , 4 ) ; }

void bar () { 
	c () ; cout << "========================================================= \n" ; w () ;
}

void intro () {
	
bar () ;
		cout << " Armor \n" << " Of \n" << " God \n" << " Tool \n" ;
bar () ;

	cout << " Refinement" ; 
	g ( ) ; cout << " --0-- " ;
	w ( ) ; cout << "to" ;
	g ( ) ; cout << " --S-- \n\n" ;
	
		cout << "\t --Requirement-- \n" ; w ( ) ;
	
	cout << " 255 Tech character with" ;
	g ( ) ; cout << " lv 10 refinement skill \n" ; w ( ) ;
	cout << " 255 Luck character with" ;
	g ( ) ; cout << " lv 1 refinement skill \n" ; w ( ) ;
	cout << " 5stk Mithrill ore \n" ;
	cout << " 50pc Orichalcum ore \n" ;
	cout << " 50pc Anti-Deg \n" ;
	
bar ( ) ;
	
}

void step1 () {

bar ( ) ;
	g ( ) ; cout << "\a\t Step --1-- \n" ; w ( ) ;
	cout << " Use tech character \n" ;
	cout << " Refine with Mithrill ore untill" ;
	g ( ) ; cout << " 1500 points \n" ;
bar ( ) ;
	g ( ) ; cout << "\t --Optional Afternative Ore-- \n" ; w ( ) ;
	cout << " Mithrill ore/Damascus = 4 points" ;
	g ( ) ; cout << " 3 Stacks 78 Pieces \n" ; w ( ) ;
	cout << " High P Iron = 6 points" ;
	g ( ) ; cout << " Stacks 52 Pieces \n" ;w ( ) ;
	cout << " 50pc Anti-Mithrill = 8 points" ;
	g ( ) ; cout << " Stack 89 Pieces \n" ;w ( ) ;
	cout << " 50pc Anti-DegHigh P Damascus = 12 points" ;
	g ( ) ; cout << " Stack 26 Pieces \n" ;w ( ) ;
bar ( ) ;
	
}

void step2 () {

bar ( ) ;	
	g ( ) ; cout << "\a\t Step --2-- \n" ; w ( ) ;
	cout << " Use tech character \n" ;
	cout << " Refine normally to" ;
	g ( ) ; cout << " --C-- \n" ;
bar ( ) ;
	
}

void step3 () {

bar ( ) ;	
	g ( ) ; cout << "\a\t Step --3-- \n" ; w ( ) ;
	cout << " Use tech character \n" ;
	cout << " Refine with Orichalcum ore + Anti-Deg to" ;
	g ( ) ; cout << " --B-- \n" ;
bar ( ) ;
	
}

void step4 () {

bar ( ) ;	
	g ( ) ; cout << "\a\t Step --4-- \n" ; w ( ) ;
	cout << " Use tech character \n" ;
	cout << " Refine with Orichalcum ore + Anti-Deg to" ;
	g ( ) ; cout << " --s-- \n" ;
bar ( ) ;
	
}

int main(){
	int a = 1 , b ;
	
 do {
 	
 	intro () ;
 	
 	cout << " choose the step:" ;
	g () ; cout << " 1 , 2 , 3 , 4 \n" ;
	w () ;
 	cout << " Press number" ;
	g () ; cout << " 0 " ;
	w () ;
	cout << "to close \n" ;
 
 	g () ; cin >> b ;
 	
 	switch ( b ) {
 		
 		case 0 : a = 0 ; break ;
 		
 		case 1 : step1 () ; break ;
 		
 		case 2 : step2 () ; break ;
 		
 		case 3 : step3 () ; break ;
 		
 		default : {
 			
 			step4 () ;
 			if ( b > 4 ){
 				r () ; cout << " There is only 4 steps \n" ;
 				bar () ;
			 }
			break;
		 }
	 }
	
	if ( b > 0 ) system ( " pause " ) ;
 	
 	system ( " cls " ) ;
 } while ( a != 0 ) ;
	
	return 0;
}
