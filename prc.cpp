#include<bits/stdc++.h>
using namespace std;
int main(){
string s ="ab cbd ddd da   dd ";
stringstream stream(s);
/// stream<<s<<endl;
string w;
while(stream>>w){
    cout<<w<<endl;
}

 return 0;
}
