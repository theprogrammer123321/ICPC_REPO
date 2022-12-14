#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mulsum(vector<vector<int>> x, vector<vector<int>> y);
vector<vector<int>> transpose(vector<vector<int>> x);

int main(){
    int cases;
    vector<vector<int>> m1;
    vector<vector<int>> m2;
    cin >> cases;

    for(int i = 0; i < cases; i++){
        int x, y, x1, y1, input;
        cin >> x >> y;
        
        m1.clear();
        m2.clear();

        // populate m1
        for(int r = 0; r < x; r++){
            for(int c = 0; c < y; c++){
                cin >> input;
                m1[r][c] = input;
            }
        }
        
        cin >> x1 >> y1;

        // if Multiplication not possible
        if(y != x1 && y != y1){
            cout << "Not Possible";
            continue;
        }

        // populate m2
        for(int r = 0; r < x1; r++){
            for(int c = 0; c < y1; c++){
                cin >> input;
                m1[r][c] = input;
            }
        }

        if(y == x1)
            cout << "Case # " << i << mulsum(m1, m2);
        else if(y == y1)
            transpose(m2);
            cout << "Case # " << i << mulsum(m1, m2);
    }
}

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
