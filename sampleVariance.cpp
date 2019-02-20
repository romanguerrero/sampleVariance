/***********************
 * File:sampleVariance.cpp
 * By:Roman Guerrero
 * Date:2/19/19
 * Description:Contains function that calculates sample variance (POPULATION) 
 * from a vector and size of the vector
 * *********************/

#include <iostream>
#include <vector> //std::vector
#include <math.h> //std::abs

/********************************************
 *          sample variance formula 
 *      sv = 1/n * summation(x - mean)^2
 * *****************************************/

double sampleVariance(std::vector<int> vect) {

  double total,
         mean;
  int    size = vect.size();

  //1. Calculate the mean
  for (int i = 0; i < size; i++) { //sum values of vector
    total += vect[i];
  }
  
  mean = total / size;             //calculate mean

  //2. Subtract mean from each data point and take the square of those distances
  total = 0; //reset total
  
  for (int i=0; i < size; i++) {
    total += pow (vect[i] - mean, 2.0);  
  }

  return total / size;

}

//Testing
int main() {
  
  std::vector<int> v1{23, 28, 39, 18};

  std::cout << sampleVariance(v1) << std::endl;

  return 0;
}

