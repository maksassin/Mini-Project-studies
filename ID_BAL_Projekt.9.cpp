#include<iostream>
#include<ctime>
#include<random>

using namespace std;

int n;
int t[1000];

int main() {
	cout<<"Podaj ilosc liczb w tablicy: ";
    cin >> n;
    srand(time(NULL));
    int L = 0;
	int P = n-1;
    int a;
    cout<<"Podaj do jakiej liczby beda losowane wartosci: ";
    cin >> a;
    int x = a+1;
    int ile = 0;
    int gdzie1 = 0;
    int gdzie2 = 0;
    
    for (int i = 0; i < n; i++)
	{
        t[i] = rand() % a + 1;
    }
    
    for (int i = 0; i < n; i++)
	{
			if (t[i]<x){
			x = t[i];
		}
        cout << t[i] << " ";
	}
	
	for (int i = 0; i < n; i++){

		if (t[i]==x){
			ile++;
		}	
	}
	
    for(int i = 0;i < n-1 ; i++){
    	if(t[L]==x){
			gdzie1=L;
		}else{
			L++;
		}
		if(t[P]==x){
			gdzie2=P;
		}else{
			P--;
		}
	}

	cout << endl <<"Najmniejsza wartosc: "<< x << endl;
	cout <<"Ile powtorzen: "<< ile << endl;
	cout <<"Najdalsza odleglosc: "<<gdzie2-gdzie1<<endl;
	 
    system("pause");
}
