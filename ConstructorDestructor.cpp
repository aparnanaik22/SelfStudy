#include<iostream>
#include<math.h>

using namespace std;
class electricity
{	private:
		int met, pre, cur, n;
		float m;
	public:
		electricity(){};
		
		int getdata()
			{
				cin>>met>>pre>>cur>>n;
				cout<<met<<pre<<cur<<n;
				return 0;
			}
		int process()
			{
				if(cur>pre) 
				{	n=cur-pre;
					cout<<"Current units are greater than previous units"<<"\n";
					return (3);
				}
				else 
					return (0);
			}
			
		float calculate()
		{	
			if(0<cur<50)
				m=2*cur;
			else if(50<cur<200)
				m=3.5*cur;
			else if(200<cur<500)
				m=4.5*cur;
			else if(500<cur)
				m=5*cur;
		}
		float display()
			{
				cout<<"Bill is"<< m<<"\n";
			}
	~electricity() {}
};	

int main() 
{
		
	electricity E;
	int a;
	abc:
	E.getdata();
	a=E.process();
	if(a==0)
	{	cout<<"wrong input"<<endl;
		goto abc;
	}
	else
	{	
		E.calculate();
		E.display();
	}
	return 0;
}
