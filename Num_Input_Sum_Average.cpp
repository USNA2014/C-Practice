//Sum, max, min of 15 user input numbers as well as the average of said numbers between 0 and 100

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float number;
    float sum;
    float average;
    float minimum, maximum;
    
    for (int i=0; i<15; i++)
    {
        cout<<"\nPlease enter a number between 0 and 100: ";
        cin>>number;
        if (number<0)
        {
            cout<<"\nNumber is too low, try again";
            --i;
        }
        else if (number>100)
        {
            cout<<"\nNumber is too high, try again";
            --i;
        }
        else
        {
        
		if(i==0)
        {
            minimum=number;
            maximum=number;
        }    
        minimum= min(number, minimum);
        maximum= max(number, maximum);
        sum += number;
        
        }
        
    }
    average= sum/15;
    cout<<"The sum of your 15 numbers is: "<<sum<<"\nThe average of your 15 numbers is: "<<average<<"\nThe max is: "<<maximum<<"\nThe min is: "<<minimum;
    return 0;
}

