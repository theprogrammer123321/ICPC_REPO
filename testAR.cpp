#include<bits/stdc++.h>

using namespace std;


int mulsum(vector<vector<int>> vt1,vector<vector<int>> vt2){
	int c2=vt2[0].size();
	int r1=vt1[0].size();
	int c1r2=vt2.size();
	vector<vector<int>> res;

	int sum=0;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			sum=0;
			for(int k=0;k<c1r2;k++){
				sum+=vt1[i][k]*vt2[k][j];
			}
			res[i][j]=sum;
		}
	}
	sum=0;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			
			sum+=res[i][j];
		}
	}
	return sum;	
}

vector<vector<int>> transpose(vector<vector<int>> mat){
	int c=mat[0].size();
	int r=mat.size();
	vector<vector<int>> temp=mat;

	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			temp[i][j]=mat[j][i];
		}
	}
	return temp;
}
int main() {

	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	// int t;
	// cin>>t;
	// for(int i=0)
	
	
	return 0;
}