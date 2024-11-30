#include <bits/stdc++.h>
using namespace std;

int main() { 
	// your code goes here   
	string a,b;
	cin>>a>>b; 
	
	if((a=="R" && b=="B") || (b=="R" && a=="B")){
	    cout<<"R"<<endl;
	}
	else if((a=="G" && b=="B") || (b=="G" && a=="B")){
	    cout<<"B"<<endl;
	}
	else if((a=="G" && b=="R") || (b=="G" && a=="R")){
	    cout<<"R"<<endl;
	}
	else if((a=="G" && b=="G")  || (b=="G" && a=="G")){
	    cout<<"G"<<endl;
	}
	else if((a=="R" && b=="R") || (b=="R" && a=="R")){
	    cout<<"R"<<endl;
	}
	else if((a=="B" && b=="B") || (b=="B" && a=="B")){
	    cout<<"B"<<endl;
	}
	

}
