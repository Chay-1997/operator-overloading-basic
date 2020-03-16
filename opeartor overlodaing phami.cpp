#include<iostream>
using namespace std;
class Bill
{
	private :
		int no;
		double amount;
	public:
		Bill()
		
		{
		int no=0;
		double amount=0;	
				}		
		Bill(int n,double amt)
		{
			no=n;
			amount=amt;
			
		}
		Bill operator+(double amt)
		
		{
		this->amount=amount+amt;
		return *this;
			
		}
		void print()
		{
			cout<<"the amount and bill are"<<no<<' '<<amount<<endl;
			
		}
	};
	int main()
	{
		Bill bill(123,4000);
		bill+4000;
		bill.print();
		
	}
