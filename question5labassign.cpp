#include<iostream>
using namespace std;

class dis11
{
   float feet;
   int Inches;

   public:

   void getdata()
   {
       cout<<"Enter Inches: "<<endl;
       cin>>Inches;
       cout<<"Enter feet: "<<endl;
       cin>>feet;
   }

   void add(dis11 d1,dis11 d2)
   {
       Inches = d1.Inches+d2.Inches;
       feet=d1.feet+d2.feet+(Inches/12);
       Inches=Inches%12;
   }

   dis11 add(dis11 d2)
   {
       dis11 temp;
       temp.Inches=Inches+d2.Inches;
       temp.Inches=feet+d2.feet+(temp.Inches/12);
       temp.Inches=temp.Inches%12;
       return temp;

   }

   void show()
   {
       cout<<"Inches"<<Inches<<endl;
       cout<<"feet"<<feet<<endl;
   }



};

int main()
{
    dis11 c1,c2,c3,c4;
    c1.getdata();
    c2.getdata();
    c3.add(c1,c2);
    c4=c1.add(c2);
    c1.show();
    c2.show();
    c3.show();
    c4.show();


}