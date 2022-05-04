#include <iostream>
using namespace std;

const float feet_in_m {0.3048};
const float foot{12};
const float pounds {2.20462};

float calculation_height(float feet, float inches){
    return (feet + (inches/foot))*feet_in_m;
    
    }
float calculation_weight (float weight){
    
     return weight/pounds;
    
    }

int main() {
    float feet;
    float inches;
    float weight;
    
    cout <<"Welcome to BMI caclulator"<<endl;
    cout << "\nEnter your height in feet: "<<endl;
    cin >> feet;
    cout << "Enter your height in inches: "<<endl;
    cin>> inches;
    cout << " Your height in m is: "<< calculation_height(feet,inches)<<endl;
    cout <<"\n============================="<<endl;
    
    cout << "\nEnter your weight in pounds:"<<endl;
    cin >> weight;
    cout << "Your weight in kg is "<<calculation_weight (weight);
    cout <<"\n=============================="<<endl;
    cout << "\nYour BMI is "<<calculation_weight (weight)/( calculation_height(feet,inches)*calculation_height(feet,inches));
    
  cout<<endl;
    return 0;
    }
