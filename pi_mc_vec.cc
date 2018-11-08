/**
    Program name:   pi_mc_vec.cc
    Purpose:        Compute pi using Monte Carlo Methods
    Details:        (Pseudo-)randomly create two dimensional vectors with x,y in [0, 1]
                    The probability of those points do land in the unit circle is pi/4.
                    For a sufficiently large number of iterations N this allows for an accurate 
                    computation of pi, by calculating the probability of a point to land in the unit circle
                    and multiplying this by 4.
                    This version allows for a higher number of iterations than the pi_mc.cc program, due to storing
                    the data points in vectors prior to computing pi.
                    
    Author:         Josua Goecking
    GitHub:         https://github.com/JosuaGoecking/Pi_MC
    
*/

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int main(){

// Read in number of iterations
  int N;
  cout << "Number of points:\n";
  cin >> N;

// Variable declarations
  vector <double> x;
  vector <double> y;
  double in = 0;
  double p;
  double pi;
  srand(time(NULL));
  x.clear();
  y.clear();


// Iterate and create random points, which are stored in a vector
  for(unsigned j=0; j<N; j++){
    x.push_back(((double) rand() / (RAND_MAX)));   
    y.push_back(((double) rand() / (RAND_MAX)));
  }
  
// Loop over the vector to compute the amount of points in the unit cirlce
  for(unsigned j=0; j<N; j++){
    double r = sqrt(x[j]*x[j] + y[j]*y[j]);
    if(r<=1){in++;}
 }

// Use the results to compute pi
  p = in/(double)N;
  pi=4*p;

  cout << "Pi = " << pi << endl;

  return 0;
}
