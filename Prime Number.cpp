#include <iostream>

using namespace std;

int main(int argc, char** argv) {
			int n, i, m = 0, prime = 0;
            cout<<"Enter a number to check if it is Prime --> ";
            cin>>n;
            
            if(cin.fail()){
			cin.clear();
			cout<<"Please Enter a Real Number only!\n\n";
			}
			
			else{
				if (n<=500){
            	m = n / 2;
            	for (i=2;i<=m;i++)
            		{
                		if(n% i== 0)
                		{
                    	cout<<"Number is not Prime\n\n";
                    	prime = 1;
                    	break;
                		}
            		}
           	 		if (prime == 0)
            		{
                	cout<<"The number is Prime\n\n";
            		}
				}
				else{
				cout<<"More than limit number!\n\n";
				} 	
			}
	cout<<"Submitted By: Jeff Jojer Jones E. Catulay\nBSCS 2B\n\n";
	system("pause");
}
