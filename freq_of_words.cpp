# include <bits/stdc++.h>
using namespace std;
int main(){
 string str;
 
    cout << "Please the sentence: \n";
    getline(cin, str);
    cout << str<<endl;
    string m;
    unordered_map <string,int>mp;
    for(int i=0;i<str.length();i++){
        
        if(str[i]==' ')
        {  mp[m]++;
            m.clear();
        }
        else{
            m+=str[i];
        }
    }
    for(auto &it:mp){
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    return 0;
}
