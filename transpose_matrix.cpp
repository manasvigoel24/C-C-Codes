# include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &mat,int n){
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        swap(mat[i][j],mat[j][i]);
    }
   }
}
int main(){
    int n;
    cout<<"Enter the size of matrix"<<endl;
    cin>>n;
vector<vector<int>> mat(n, vector<int>(n));
cout<<"Enter the values"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cin>>mat[i][j];
    }
}
transpose(mat,n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

}
