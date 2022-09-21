/**
 * @file Vector.cpp
 * @author Jacqueline Bybee
 * @date 2022-07-19
 * @brief Self-Made-Vector
 * 
 * Implementation of the Vector class to better understand and use it.
 */

#include "Vector.h"
#include <iostream>
#include <fstream>

using namespace std;

Vector::Vector() {
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
};
/* Description:
 *    Default constructor.  Initializes an empty vector.
 * Post-conditions:
 *    vec_ptr is NULL, vec_size=0, and vec_capacity=0.
 */

Vector::Vector(const Vector &other){
  vec_ptr = new int[other.vec_capacity];
  vec_capacity = other.vec_capacity;
  vec_size = other.vec_size;
  for (int i = 0; i < other.vec_capacity; i++){
    vec_ptr[i] = other.vec_ptr;
  }
  
}
/* Description:
  *    Copy constructor.  Initializes a dynamic array of the appropriate
  *    size/capacity and copies data from other's array to the new array.
  * Post-conditions:
  *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
  *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
  */

Vector::~Vector(){
  delete [] vec_ptr;
}
/* Description:
 *    Destructor.  Deallocates vec_ptr.
 * Postconditions:
 *    vec_ptr has been deallocated, current_size=0, and capacity=0.
 */

Vector::Vector& operator=(const Vector &other){
  ne
}
/* Description:
 *    Assignment operator.  Initializes a dynamic array of the appropriate
 *    size/capacity and copies data from other's array to the new array.
 * Post-conditions:
 *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
 *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
 */

Vector::size(){
  return vec_size;
}
/* Description:
 *    Returns the current number of elements in the vector.
 */

Vector::capacity(){
  return vec_capacity;
}
/* Description:
 *    Returns the currently allocated storage capacity of the vector.
 */

Vector::push_back(int element){
  
}
/* Description:
 *    Similar to std::vector.push_back(int element), stores element at the end of the vector.
 * Postconditions:
 *    Item element has is stored at the end of the vector.
 * Notes:
 *    If necessary, calls reserve() before adding element to the end of the vector.
 *    This reserve doubles the current capacity of the vector.
 */

Vector::reserve(int n){
  if (vec_capacity << n){
    vec_capacity = n;
    return;
  }
  else{
    return;
  }
}
/* Description:
 *    Requests that the vector capacity be resized at least enough to contain n elements.
 *
 *    If n is greater than the current capacity, the function causes the container to reallocate
 *    its storage increasing its capacity to n (or greater).
 *
 *    If n is less than or equal to the current capacity, the call does nothing (no reallocation
 *    or change in vector capacity).
 *
 *    This function has no effect on vector size and cannot alter its elements.
 *
 * Postconditions:
 *    Vector capacity is now n.  Vector size (and contents) remains the same.
 *
 */

& Vector::operator[](unsigned int index){
  return vec_ptr[index];
}
/* Description:
 *    Returns a reference to the element at position index.
 */
