#include<iostream>
using namespace std;
int j=0;
class studentinfo{ //Class declaration
private :
    string name;
    int usn;
    int m1,m2,m3;
    float total,percentage;

public :
    studentinfo()   //declaring studentinfo member function (constructor)
    {
        j++;
        cout<<"Enter the Information of student "<<j<<endl;
        cout<<"Enter the student name : ";
        cin>>name;
        cout<<"Enter the usn of the student : ";
        cin>>usn;
        cout<<"Enter the marks of the marks of three subjects : ";
        cin>>m1>>m2>>m3;
    }
    void calculate()    //declaring calculate member function
    {
        total=m1+m2+m3;
        percentage=(total/3);
    }
    void showdata(int i)     //declaring member function to show the data
    {
        cout<<"Student "<<i+1<<" details"<<endl;
        cout<<"\tThe student name is : "<<name;
        cout<<"\tThe student usn is : "<<usn;
        cout<<"\tThe student marks for\n\tm1 : "<<m1<<"\n\tm2 is :"<<m2<<"\n\tm3 is :"<<m3<<endl;
        cout<<"\tThe Total is : "<<total<<endl<<"The percentage is :"<<percentage<<"%"<<endl;
        cout<<endl;
    }
};  //End of class

int main()
{
    int i,n;
    cout<<"Enter the number of students :";
    cin>>n;
    studentinfo s[n];
    for(i=0;i<n;i++)
    {
        s[i].calculate();   //calling calculate function
        s[i].showdata(i);    //calling showdata function
    }
    return 0;
}

