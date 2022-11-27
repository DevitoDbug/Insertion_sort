#include <iostream>

using namespace std;
void insertion_sort( int num [] , int size );

int main()
{
    int no;
    cout << " Enter the number of items you want to sort using ***insertion sort***\n";
    cin >> no;

    //declaration of the array according to the number of items specified by the user
    int numbers [no] ;

    //taking the inputs from the user
    for ( int i = 0 ; i < no ; i++)
    {
        cout << "Enter the value number: "<< i+1 <<" " ;
        cin >> numbers [i];

    }
    insertion_sort( numbers , no );

    //displaying the sorted numbers
    cout << "The sorted numbers are"<<endl;
    for ( int i = 0 ; i < no ; i++)
    {
        cout << numbers[i] << endl;

    }

return 0 ;
}


void insertion_sort( int num [] , int size )
{
    for ( int i =  1 ; i  < size  ; i++)
    {
        int value = num [i];
        int space  = i - 1;

        while ( value  < num[space] && space >= 0)
        {
            num [space + 1] = num [space];
            space -- ;
        }
        num [space + 1] = value ;


    }

}
