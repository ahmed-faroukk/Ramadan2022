#include <iostream>
#include <Windows.h>


using namespace std;
void printDimonds(long int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i * 2 - 1; k++)
		{
			cout << "*";
		}cout << endl;

	}

}
void printDimonds2(long int n)
{
	for (int i = n; i >=1 ; i--)
	{
		for (int j = 1 ; j<=n-i ; j++) 
		{
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			cout << "*";
		}cout << endl;

	}
	
}
void helal(long int n) 
{
	

		for (int j = 1; j < n-1; j++)
		{
			cout << " ";

		}
		cout << " * " << endl;

		for (int j = 1; j < n - 1; j++)
		{
			cout << " ";

		}
		cout << "***" << endl;

	


}



int main() {
	long int n;
	cin >> n;
	system("COLOR A");
	cout << "     Ramadan Kaream "<<endl;
	helal(n);
	printDimonds(n);
	system("COLOR E");

	cout << "******  Omar  *******"<<endl;

	printDimonds2(n);

	for (int i = 1; i <= n-n*0.5; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i * 2 - 1; k++)
		{
			cout << "*";
		}cout << endl;

	}
}
