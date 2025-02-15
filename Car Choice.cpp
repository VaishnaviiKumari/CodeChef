 #include <bits/stdc++.h>
using namespace std;  
  
int main() {    
	// your code goes here      
	int t;  
	cin>>t;       
	while(t--){ 
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2; 
	     
	    float a = y1/x1;
	    float b = y2/x2;
	    
	    if(a<b) cout<<-1<<endl;
	    else if (b<a) cout<<1<<endl;
	    else if(a==b) cout<<0<<endl;
	}
    return 0;
}
