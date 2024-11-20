#include <iostream> 
#include <vector>
#include <numeric>


//objects and variables from the standard library

using namespace std;

int main(){
    
    //Iniatialising these Integers

    int Monthly_Budget;
    int Count;
    
    //Asking Budget

    std::cout << "Enter Monthly Budget :$ ";
    std::cin >> Monthly_Budget;

    //Cautionary while loop helping if negative or zero value given

    while (Monthly_Budget <=0){

        std::cout << "Please Enter A Valid Amount :$ " << std::endl;
        std::cin >> Monthly_Budget;
    }
    
    //Entering The Number Of Expenses

        std::cout << "How many expenses would you like to submit?: " ;
        std::cin >> Count;

    // Same Thing Here Again

    while (Count <=0){

        std::cout << "Please Enter A Valid Amount : " << std::endl;
        std::cin >> Count;
    }

    //Making Class Of Expenses And Categories by vectors 

    vector <int> Expenses (Count);
    vector <string> Categories (Count);

    // Count is there because it holds the value of count 


    // loop to ask about categories and expenses and precaution added aswell

    for (int i=0 ; i<Count ; i++){
        cout << "Enter Category :" ;
        cin >> Categories [i];

        cout<< "Enter Expense :$" ;
        cin >> Expenses [i];

    // While has its own bracket remember

    while ( Expenses [i] <= 0 ){    
        cout << "Enter Valid Expense For " << Categories [i] << " : " << endl;
        cin >> Expenses [i];
        }
    }
    

        // This is showing For Ex: "Food :$ "

	 for (int i = 0; i < Categories.size(); i++) {
        
        cout << Categories[i]<<":$"<<Expenses[i] << endl;
        
     }

    /*This takes the first Element with .begin and through the last
    element with .end and it accumulates by adding the expenses and
    than that becomes sum*/

     int sum = accumulate (Expenses.begin() , Expenses.end() , 0 );

    if (sum > Monthly_Budget){

        cout << "You Have exceed the budget upto : $" << sum - Monthly_Budget << endl;

     } else {

        cout << "The total expense is : $" << sum << endl;

        cout << "Remaining Budget is : $" << Monthly_Budget - sum << endl;

     }

    return 0;

} 