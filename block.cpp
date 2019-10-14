#include <iostream>
#include <string>
using namespace std;

int main(){
	int row, col;
	cout<<"Enter number of rows and columns:"<<endl;
	cin>>row>>col;
	while((row != 0) & (col != 0)){
		string s="";
		for(int i=0; i<col; i++){
			s+="X.";
		}
		s+="\n";
		string result = "";
		for(int i=0; i<row; i++){
			result+=s;
		}
		cout<<result<<
			"Enter number of rows and columns:"<<endl;
		cin>>row>>col;
	}
	return 0;
}

