#include<iostream>
using namespace std;
main()
{
	int days,week,year;
	int n;
	cout<<"Enter the days : ";
	cin>>n;
	year=n/365;
	days=n%365;
	week=days/7;
	days=days%7;
	cout<<"Years are : "<<year;
	cout<<"\nWeek are : "<<week;
	cout<<"\nDays  are : "<<days;
	
}