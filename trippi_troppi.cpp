#include <iostream>
using namespace std;
int main()
{
    
    int t,n,a,b;
    cin>>t;
    while(t--){
    string a,b,c;
    cin>>a>>b>>c;
    
    string modern_name="";
    modern_name+=a[0];
    modern_name+=b[0];
    modern_name+=c[0];
    cout << modern_name<<endl;
  
}
    return 0;
}
