#include <iostream>

using namespace std;
class Sum
{
    private:
    int n,a,b[100],i,sum=0;
    public:
    void get()
    {
        cout<<"enter your number";
        cin>>n;
        cin>>a;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
    }
    void display()
    {
        for(i=0;i<a;i++)
        {
            sum=sum+b[i];
        }
        cout<<"The answer is: "<<sum;
    }
};

int main()
{
  Sum s;
  s.get();
  s.display();
}
