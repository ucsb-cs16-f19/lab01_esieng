#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	int n;
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
	cin>>n;
	while(n!= -1){
		double pi = 0;
		for(int i=0; i<=n; i++){
			pi+=(pow(-1,i))/(2*i + 1);
		}
		if(n==0){
			cout<<"The approximate value of pi using "<<n+1<<" term is: "<<(pi*4)<<endl;
		}
		else{
			cout<<"The approximate value of pi using "<<n+1<<" terms is: "<<(pi*4)<<endl;
		}
		cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
		cin>>n;
	}
	return 0;
}
