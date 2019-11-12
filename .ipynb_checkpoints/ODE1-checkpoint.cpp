

#include <iostream> 
using namespace std; 
  
float func(float w, float y) 
{ 
    return -(w*y); 
} 
  
// Function for Euler formula 
void euler(float x0, float y, float h, float x) 
{ 
    float temp = -0; 
  
    // Iterating till the point at which we 
    // need approximation 
    while (x0 < x) { 
        temp = y; 
        y = y + (h * func(1.0, y)); 
        x0 = x0 + h; 
    } 
  
    // Printing approximation 
    cout<<"StepSize: " << h <<endl;
    
    cout << "Approximate solution at t = "
         << x << "  is  " << y << endl; 
} 
  
// Driver program 
int main() 
{ 
    // Initial Values 
    float x0 = 0; 
    float y0 = 1; 
    float h = 1; 
  
    // Value of x at which we need approximation 
    float x = 4; 
  
    euler(x0, y0, h, x); 
    return 0; 
} 
