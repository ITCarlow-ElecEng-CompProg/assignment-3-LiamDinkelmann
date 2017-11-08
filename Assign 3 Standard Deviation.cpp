#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int i;
	double n[10], o[10], p[10], pvar, var, sd, avg, tot;
	
	
	cout<<"Enter 10 values \n";
		
	for(i=0;i<10;i++)
	{
		cin>>n[i];
	}
	
	tot=n[0];							//Assigning variable tot to the value stored in n[0]
	
	for(i=0;i<9;i++)
	{
		tot = tot + n[i+1];				//Adding each successive number within the array, within the limit of 10 numbers
	}	
	
	
	avg = tot / 10;						//Finding the average of all the input values and storing it in variable avg
										
										
										//The code from this point is to find the standard deviation
										
										
									
	for(i=0;i<10;i++)
	{
		o[i] = n[i] - avg;				//Find the value of each number in the n array, minus the mean of the numbers and storing them in an array labbeled o
	}
	 
	for(i=0;i<10;i++)
	{
		p[i] = o[i] * o[i];				//Finding the square of each value stored in the array labelled o and storing it in the array labelled p
	}
	
	pvar = p[0];						//Setting the variable pvar to hold the value stored in the first address loction of the p array
	 
	for(i=0;i<9;i++)
	{
		pvar = pvar + p[i+1];			//Setting the variable pvar to store the sum of all values in the p array
	}
	 
	var = pvar / 9;						//Finding the variance of the input values
	
	sd = sqrt(var);						//Finding the standard deviation by getting the square root of the variance
									
									
									
										//Following is the desired output information from the program
	
	cout<<"\n \nThe Average Value of inputed values is "<<avg<<endl;	
	cout<<"The Standard Deviation of inputed values is "<<sd<<endl;		
	
	return 0;
}
