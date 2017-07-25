#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
#include<vector>
#include<utility>
#include<queue>
#include<stack>

#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define fi first
#define se second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define LET(x, a)  __typeof(a) x(a)
#define foreach(it, v) for(LET(it, v.begin()); it != v.end(); it++)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

#define tr(x) cout<<x<<endl;
#define tr2(x,y) cout<<x<<" "<<y<<endl;
#define tr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
#define tr4(w,x,y,z) cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;

using namespace std;

int t, n, a[71][71], x[71][71], mx;

int main(){
	sd(t);
	while(t--){
		sd(n);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				sd(a[i][j]);
			}
		}
		
		mx = 0;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				x[i][j] = x[i-1][j]^a[i][j];
			}
		}
		
		for(int i = 1; i <= n; i++){
			for(int p = i; p <= n; p++){
				for(int j = 1; j <= n; j++){
					int val = 0;	
					for(int q = j; q <= n; q++){
						val ^= (x[p][q]^x[i-1][q]);
						mx = max(mx, val);
					}
				}
			}
		}
		
		printf("%d\n", mx);
		
	}
	return 0;
}