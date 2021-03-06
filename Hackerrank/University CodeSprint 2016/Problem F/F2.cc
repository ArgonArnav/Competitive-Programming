#include <bits/stdc++.h>

#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define foreach(it, v) for(auto it=(v).begin(); it != (v).end(); ++it)

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define tr(...) cout<<__FUNCTION__<<' '<<__LINE__<<" = ";trace(#__VA_ARGS__, __VA_ARGS__)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

template<typename S, typename T> 
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.fi<<", "<<p.se<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
int l=v.size();for(int i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

template<typename T>
void trace(const char* name, T&& arg1){cout<<name<<" : "<<arg1<<endl;}

template<typename T, typename... Args>
void trace(const char* names, T&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma-names)<<" : "<<arg1<<" | ";trace(comma+1,args...);}

const ld PI = 3.1415926535897932384626433832795;

const int F = 7;

struct mybitset{
	unsigned int a[F];
	bool empty;
	mybitset(){
		for(int i = 0; i < F; i++) a[i] = 0;
        empty = true;
	}
	
	void set(unsigned int x){
		a[x/32] |= (1u << (x%32));
        empty = false;
	}	
	
	bool test(unsigned int x){
		return a[x/32]&(1u << (x%32));
	}
};

struct mynode{
  int x;
  mynode *nxt;
  mynode(int _x){
      x = _x;
      nxt = NULL;
  }
};

struct myvector{
    mynode *head, *tail;
    myvector(){
        head = NULL, tail = NULL;
    }
    
    void push_back(int x){
    	if(head == NULL){
    		head = tail = new mynode(x);
    	}
    	else{
    		tail->nxt = new mynode(x);
    		tail = tail->nxt;
    	}
    }
};

const int N = 50;
const int S = 200;
const int K = 2000;

const int M = 40;

mybitset dp[M][S][K];

int main(){
	
	myvector dp2[N-M][S][K];
	for(int i = 0; i < N-M; i++){
		for(int j = 0; j < S; j++){
			for(int k = 0; k < K; k++){
				dp2[i][j][k] = myvector();
			}
		}
	}
    
	for(int i = 0; i <= S; i++){
		dp2[0][i][0].pb(i);
	}
	
	
    
    
	return 0;
}
