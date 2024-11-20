#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,X;
	cin>>N>>X;  
	
	bool found=false;
	
	for(int i=0;i<N;i++){ 
	    int element; 
	    cin>>element;
	    if(element == X){
	        found = true;
	        break;
	    }
	}
	
	if(found){
	    cout<<"YES"<<endl;
	}
	
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
