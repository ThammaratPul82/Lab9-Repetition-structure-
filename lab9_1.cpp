#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,ipy,ppy,ints,total,newb;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>ipy;
	cout << "Enter amount you can pay per year: ";
	cin>>ppy;
	
	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year=1;
	while(1){

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		ints=(loan*ipy)/100;
		cout << setw(13) << left << ints;
		total=loan+ints;
		
		newb=total-ppy;
		if (total<=ppy){
			ppy=total;
			newb=0;
			cout << setw(13) << left << total;
			cout << setw(13) << left << ppy;
			cout << setw(13) << left << newb;
			break;
		}
		cout << setw(13) << left << total;
		cout << setw(13) << left << ppy;
		cout << setw(13) << left << newb;
		loan=newb;
		cout << "\n";
		year++;
	}
	return 0;
}