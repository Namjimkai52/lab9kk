    #include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;    



int main(){	
	
    double money, RATE, payment; 

    cout << "Enter initial loan: ";
    cin >> money; 
	cout << "Enter interest rate per year (%): ";
     cin >> RATE; 
	cout << "Enter amount you can pay per year: ";
     cin >> payment; 

     
    int year = 1;
    double pre = money; 
    double interest, total, PM, newBalance ; 

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
	while (pre > 0){
        
         interest = pre * ( RATE / 100 ) ; 
         total = pre + interest ; 
         PM = (total < payment) ? total : payment; 
         newBalance = total - PM ;

        cout << fixed << setprecision(2); 
        cout << setw(13) << left << year; 
	    cout << setw(13) << left << pre;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << PM;
        cout << setw(13) << left << newBalance;
        cout << "\n";	

        pre = newBalance;
        year++;
        
    }
    
    
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	return 0;
}