/*
 * MyADT.cpp
 * 
 * Class Description: A linear data collection ADT.
 * 
 * Class Invariant: Data collection with the following characteristics:
 *                  - This is a value-oriented data collection and 
 *                    the elements are kept in ascending sort order of search key.
 *                  - Each element is unique (no duplicates). 
 *                  - Its data structure (CDT) is not expandable. This signifies that 
 *                    when this data collection becomes full, you do not have to resize 
 *                    its data structure (not in this Assignment 1). 
 *
 * Author: AL and <Aryan Anand>
 * Last modified on: Jan. 2024
 */


#include <iostream>
#include <cctype>
#include "MyADT.h"     // Header file of MyADT file
#include "Profile.h"   // Header file of Profile class

using std::cout;
using std::endl;

    
// Default constructor.
MyADT::MyADT() {
   unsigned int i ;
   for(i =0;i< MAX_ALPHA;i++){
      elements[i]=nullptr;
      elementCount[i]=0;
   }
   //cout << "MyADT::default constructor executed!" << endl;   // For testing purposes ...
   // You can also use the above to figure out when this constructor is executed.
   // If you do uncomment it, make sure to comment it out again before you submit your Assignment 1.
 
   /* Put your code here */
   
}  

// Copy constructor - Covered in Lab 3
MyADT::MyADT(const MyADT& rhs) {
   unsigned int i;
    for(i =0;i< MAX_ALPHA;i++){
      if (rhs.elements[i]!=nullptr){
         elements[i]= new Profile[MAX_ELEMENTS];
         elementCount[i]=rhs.elementCount[i];
         for(unsigned int j=0 ;j<elementCount[i];++j ){
            elements[i][j]=rhs.elements[i][j];

         }

      }
      else{
         elements[i]=nullptr;
         elementCount[i] = 0;
      }
    }

   // cout << "MyADT::copy constructor executed!" << endl; // For testing purposes ... 
   // You can also use the above to figure out when this constructor is executed.
   // If you do uncomment it, make sure to comment it out again before you submit your Assignment 1.

   /* Put your code here */
   
}  

// Overloaded assignment operator - Covered in Lab 5
// Therefore, we shall not be overloading this operator in our Assignment 1
// MyADT & MyADT::operator=(const MyADT& rhs) {
   // cout << "MyADT::operator= executed!" << endl; // For testing purposes ... 
   // You can also use the above to figure out when this overloaded assignment = operator is executed.
   // If you do uncomment it, make sure to comment it out again before you submit your Assignment 1.
   
   /* Put your code here */

//}
    
// Destructor
// Description: Destroys this object, releasing heap-allocated memory.
MyADT::~MyADT() {
   unsigned int i;
      for ( i  = 0; i < MAX_ALPHA; i++) {
            delete[] elements[i];
            elements[i]=nullptr; 
             // Reset the element count
            elementCount[i] = 0;  
        }
   // cout << "MyADT::destructor" << endl;  // For testing purposes ...
   // You can also use the above to figure out when this destructor is executed.
   // If you do uncomment it, make sure to comment it out again before you submit your Assignment 1.
  
   /* Put your code here */
   
}

// Description: Returns the total number of elements currently stored in the data collection MyADT.  
unsigned int MyADT::getElementCount() const {

   /* Put your code here */
unsigned int j,counter=0 ;
   for(j =0;j< MAX_ALPHA;j++){
      counter= counter + elementCount[j];
}
return counter; 
}

// Description: Inserts an element in the data collection MyADT.
// Precondition: newElement must not already be in the data collection MyADT.  
// Postcondition: newElement inserted and the appropriate elementCount has been incremented.
//                Returns "true" when the insertion is successfull, otherwise "false".
bool MyADT::insert(const Profile& newElement) {
   char first ;
   int position ;
   first = newElement.getSearchKey( ) ;
   position=first-'a';

   if(elements[position]==nullptr)
   {
      elements[position]=new Profile[MAX_ELEMENTS];
      elements[position][0] = newElement ;
      elementCount[position] = 1;
   return true;
   }
   if (elementCount [position]==MAX_ELEMENTS)
   {
      return false;
   } 

   int temp=-1 ;
   for( unsigned int i=0;i<elementCount[position];i++)
   {
      if(elements[position][i]>newElement ){
         temp=i;
         break;
      }
   }
   if(temp==-1){
      temp=elementCount[position];
   for(int j=elementCount[position];j>temp;j--)
   {
      elements[position][j]=elements[position][j-1];

   }
   elements[position][temp]=newElement;
   elementCount[position]++;
   return true;
   /* Put your code here */
   
} 
 return false; 
}

// Description: Removes an element from the data collection MyADT. 
// Postcondition: toBeRemoved (if found) is removed and the appropriate elementCount is decremented.
//                Returns "true" when the removal is successfull, otherwise "false".  
bool MyADT::remove(const Profile& toBeRemoved) {
char index;
index = toBeRemoved.getSearchKey();
int searchKey=index-'a';


    if (elementCount[searchKey] > 0) {
        for (unsigned int i = 0; i < elementCount[searchKey]; ++i) {
            if (elements[searchKey][i] == toBeRemoved) {
                // Element found, remove itvoid MyADT::removeAll() {
                // You may need to shift elements to fill the gap
                for (unsigned int j = i; j < elementCount[searchKey] - 1; ++j) {
                    elements[searchKey][j] = elements[searchKey][j + 1];
                }

                // Decrement the element count
                --elementCount[searchKey];

                return true; // Element successfully removed
            }
        }
    }

    return false; // Element not found or collection is empty


   /* Put your code here */
   
}  


// Description: Removes all elements from the data collection MyADT. 
// Postcondition: MyADT reverts back to its initialization state, i.e., getsearchKey()
//                the state it is in once it has been constructed (once
//                the default constructor has executed). 
void MyADT::removeAll() {
   unsigned int i;
      for ( i  = 0; i < MAX_ALPHA; i++) {
            delete[] elements[i];
            elements[i]=nullptr; 
             // Reset the element count
            elementCount[i] = 0;  
        }
       
    
}

    /* Put your code here */
   

// Description: Searches for target element in the data collection MyADT. 
//              Returns a pointer to the element if found, otherwise, returns nullptr.
Profile* MyADT::search(const Profile& target) {
    char index;
    index = target.getSearchKey();
    int searchKey=index-'a';

    // Check if the array corresponding to the search key is not empty
    if (elementCount[searchKey] > 0) {
        // Loop through the array to find the target element
        for (unsigned int i = 0; i < elementCount[searchKey]; i++) {
            if (elements[searchKey][i]== target) {
                return &elements[searchKey][i];  // Return a pointer to the found element
            }
        }
    }

  return nullptr;   
}

void MyADT::print() {
  for(unsigned int i=0;i<MAX_ALPHA;i++ ){
      for(unsigned int j=0;j<elementCount[i]; j++){
         std::cout<<elements[i][j];
      }
  }
    /* Put your code here */  

} 

//  End of implementation file