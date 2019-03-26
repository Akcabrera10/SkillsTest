#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{	
    double hourlyrate, grossincome, netincome, suppliesamount, bondsamount;
    double clothesamount, pbondsamount, hoursamount;
    
    const double TAX_RATE_PERCENTAGE = 0.14;
    const double CLOTHES_PERCENTAGE = 0.10;
    const double SCHOOL_PERCENTAGE = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE = 0.25;
    const double PARENTS_CONTRIBUTION = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hoursamount;
    
    cout << "What was the hourly rate: (in $): ";
    cin >> hourlyrate;
    
    grossincome = hoursamount * hourlyrate;
    netincome = grossincome *= TAX_RATE_PERCENTAGE;
    clothesamount = netincome * CLOTHES_PERCENTAGE;
    suppliesamount = netincome * SCHOOL_PERCENTAGE;
    // for remaining income
    netincome -= (clothesamount + suppliesamount); 
    bondsamount = netincome * SAVINGS_BONDS_PERCENTAGE;
    pbondsamount = bondsamount * PARENTS_CONTRIBUTION;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income (before taxes): $" << grossincome << endl;
    cout << "Net Income (after taxes): $" << netincome << endl;
    cout << "Clothes & Other Accessories: $" << clothesamount << endl;
    cout << "School Supplies: $" << suppliesamount << endl;
    cout << "Savings Bonds: $" << bondsamount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<pbondsamount << endl;
    cout << "PROGRAM SUBMITTED BY ARVYN CABRERA FROM SECTION 1-13" << endl; 
    
    getch();
    return 0;
    
}
