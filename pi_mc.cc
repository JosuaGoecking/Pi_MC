/**
    Program name:   pi_mc.cc
    Purpose:        Compute pi using Monte Carlo Methods
    Details:        (Pseudo-)randomly create two dimensional vectors with x,y in [0, 1]
                    The probability of those points do land in the unit circle is pi/4.
                    For a sufficiently large number of iterations N this allows for an accurate 
                    computation of pi, by calculating the probability of a point to land in the unit circle
                    and multiplying this by 4.
                    
    Author:         Josua Goecking
    GitHub:         https://github.com/JosuaGoecking/Pi_MC
    
*/

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

// Read in number of iterations
  int N;
  cout << "Number of points:\n";
  cin >> N;

// Variable declarations
  double x[N];
  double y[N];
  double in = 0;
  double p;
  double pi;
  srand(time(NULL));

// Iterate and create random points in a unit square
  for(unsigned j=0; j<N; j++){x[j]=0; y[j]=0;
    x[j] = ((double) rand() / (RAND_MAX));   
    y[j] = ((double) rand() / (RAND_MAX));

// Check if the points are inside the unit circle
    double r = sqrt(x[j]*x[j] + y[j]*y[j]);
    if(r<=1){in++;}
 }
 
 // Use the results to compute pi
  p = in/(double)N;
  pi=4*p;

  cout << "Pi = " << pi << endl;

  return 0;
}
