// Amina Habib
// BS Data science 
 //subject: programing fundamentals
// submitted to : Ma'am Ayesha Hakim
#include<iostream>
#include<cmath>
using namespace std;

				//sum..................
				int  sum(int  a,int  b)
				{
					return(a+b);
				}
				
				//subtract.............
				int subtract(int c,int  d)
				{
					return(c-d);
				}
				
				//multiply.............
				int mul(int e, int f)
				{
					return(e*f);
				}
				
				//divide...............
				float div(float h,float j)
				{
					return(h/j);
				}
				
					//square...............
				float squ(float k)
				{
					return(sqrt(k));
				}
					//log.................
				double log(double l)
				{
					return log(l);
}
  // main () function starts from here

int main()
{
	float n1,n2;
	char o;
		cout<<"Enter the number\n\n";
		cin>>n1;
		cout<<"Enter the second number\n\n";
		cin>>n2;
		cout<<"Enter operation from +,-,*,/,r=x²,log=l \n\n";
		cin>>o;
		
		switch(o) {
			case'+':
				cout<<"Sum is: " <<sum(n1,n2);
			
	break;
				
			case'-':
				cout<<"Subtraction is : " <<subtract(n1,n2);
				
break;	
				
			case'*':
				cout<<"Product is : " <<mul(n1,n2);

				break;	
				
			case'/':
				cout<<"Division is : " <<div(n1,n2);

				break;	
				
			case'r':
				cout<<"Square root is : " <<squ(n1);

				break;
				
			case'l':
				cout<<"Log is : " << log (n1);   
 
				break;
				

				
			default:
		cout<<"Data is invalid";
}
		
		
return 0;		
}