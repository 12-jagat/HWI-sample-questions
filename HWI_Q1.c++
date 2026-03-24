// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int e;
    cin>>e;
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        
    }
    sort(v.begin(),v.end(),[](int a,int b){
        return a > b;
    });
    
    int res=0;
    
   for (int i = 0; i < n && e > 0; i++) {
            for (int j = 0; j < 2 && e > 0; j++) {
                e -= v[i];
                res++;
            }
        }

    cout<<endl;

   cout<<"result:"<<endl;
  if(e>0)
    cout<<-1;
  else{
      cout<<res<<endl;
  }
  
}

    return 0;
}