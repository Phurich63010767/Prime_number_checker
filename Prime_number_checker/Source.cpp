#include<iostream>
using namespace std;

void check(int x ,int c,int i)
{
	int arr[10], t = 0, *p=&arr[t];
	if (x == 1)
	{
		cout << "1 Doesn't count as prime number.";
	}
	if (x == 2)
	{
		cout << "2 is prime number.";
	}
	if (i <= x)
	{
	CHECK:
		if ((i == x) && (c == 0))
		{
			cout << x << " is prime number.";
			goto END;
		}
		if (x % i == 0)
		{
			cout << x << " is not a prime number." << endl;
			cout << "Can be divided by: ";
			c++;
			while (i < x)
			{
				if (x % i == 0)
				{
					arr[t] = i;
					t++;
					p++;
					cout << i << " ";
				}
				i++;
			}
			cout << endl;
			cout << t << " Numbers." << endl;
			cout << "Highest dividable number is: " << *--p << endl;
		}
		if ((i < x) || (x % i != 0))
		{
			i++;
			goto CHECK;
		}
	}

END:;
}
int main()
{
	int x, c = 0, i = 2;
	cout << "Enter number: ";
	cin >> x;
	check(x, c, i);
	
	return 0;
}