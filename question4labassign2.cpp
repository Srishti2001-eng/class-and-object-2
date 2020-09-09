#include<iostream>
using namespace std;
class COMPLEX
{
    float real,img;
    
    public:
    void input()
    {
        cout<<"Enter the real part"<<endl;
        cin>>real;
        cout<<"Enter the imaginary part"<<endl;
        cin>>img;
        
    }

    void show()
    {
       cout<<real<<"+i"<<img<<endl;
    }

};

int main()
{
    int n;
    cout<<"Enter no. of complex number:"<<endl;
    cin>>n;
    COMPLEX c[10];
    for(int i=0;i<n;i++)
    {
        cout<<"Complex number"<<i+1<<"="<<endl;
        c[i].show();
        return 0;
    }
    
    
}