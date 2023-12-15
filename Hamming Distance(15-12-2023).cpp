/**
    # Enjoy the journey #
**/

/**
    # It falls to me to inform you that this one is in the bag #
**/

// Red_Next_Century (GrandMaster : MuohlaG ) || MIT_NEXT_Century (: //

// Microsoft_Next_Year || Apple_Next_Year || Google_Next_Year || ITWORX_Next_Year || Valeo_Next_Year || Noon_Next_Year (: //

#include<bits/stdc++.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
#define MuohlaG ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define  ll long long
#define endl "\n";
const int MAX = 200002;
const int MOD = 1e9 + 7;
#define TC_Galhoum(t) while (t--)
#define ld long double
#define loop(i,a,b)       for (int i = a; i < b; i++)
#define  loop_back(n)     for(int i=size-1; i>=0; --i)
#define MEM(a,b) memset((a),(b),sizeof(a))
#define ll_loop(n)   for(ll i=0;i<n;i++)
#define each(a, x)   for (auto& a : (x))
#define  loop1(n)     for(int i=1; i<=n; i++)
#define  YES         cout << "YES"<<endl;
#define  NO          cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
typedef pair <int, int> ii;
int r[10000001] = {0};
// ======================================================================================== //
template <typename T>
vector<T> invec(int size) {
    vector<T> resultVector;
    for (int i = 0; i < size; ++i) {
        T element;
        cin >> element;
        resultVector.push_back(element);
    }
    return resultVector;
}

template <typename T>
void outvec(const vector<T>& inputVector) {
    for (const T& element : inputVector) {
        cout << element << " ";
    }
    cout << endl;
}

template <typename T>
T* inarr(T* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    return arr;
}

template <typename T>
void outarr(T* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int gcd(int a , int b){
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int lcm(int a , int b){
	return (a * b) / gcd(a , b);
}

inline int end () {
	int N;
	cin >> N;
	return N;
}

inline long long endll () {
	ll N;
	cin >> N;
	return N;
}

inline string read () {
	string st;
	cin >> st;
	return st;
}

inline double du () {
	double N;
	cin >> N;
	return N;
}

inline long double doll () {
	long double N;
	cin >> N;
	return N;
}

inline long long int endi () {
	long double N;
	cin >> N;
	return N;
}

inline char cend () {
	char c;
	cin >> c;
	return c;
}

// ======================================================================================== //
               // I won't go back on my Word ... that is my Ninja way! :) ! //
// ========================== WHILE(NOT SUCCESS) Keep_Trying() ============================ //
void File(){
   // freopen("input.txt", "r", stdin);
   // freopen("Output.txt", "w", stdout);
}

void preprocessing() {
	// 4 3
	// 4 7      {3 , 6} , {4 , 7} , {6 , 8} , {15 , 1}
	// 15 1
	// 3 6
	// 6 8
}

int iterateBits(int num1 , int num2){
	const int totBits = 32;
	int ret = 0;
	for(int i = 0 ; i < totBits ; i++){
		if(((num1 >> i) & 1) and !((num2 >> i) & 1)){
			ret++;
		}
		if(!((num1 >> i) & 1) and ((num2 >> i) & 1)){
			ret++;
		}
	}
	return ret;
}
void MindSet(){
	int a = end() , b = end();
	int ans = iterateBits(a , b);
	cout << ans << endl;
}
// ======================================================================================== //
int main() {
// ===================== Opportunities don't happen. You Create Them ====================== //
	#ifdef Mohamed_Ahmed_Galhoum
		auto begin = std::chrono::high_resolution_clock::now();
	#endif
	MuohlaG
	File();
	preprocessing();
	int t = 1;
//	t = end();
	TC_Galhoum(t) {
		MindSet();
	}
	cerr << "Galhoum here" << endl;
	#ifdef Mohamed_Ahmed_Galhoum
		auto end = std::chrono::high_resolution_clock::now();
		cerr << setprecision(4) << fixed;
		cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
    #endif
	return 0;
}
// ======================================================================================== //
