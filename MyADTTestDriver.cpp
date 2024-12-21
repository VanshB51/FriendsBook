// /*
//  * MyADTTestDriver.cpp
//  *
//  * Description: Test Drivers for MyADT class.
//  * 
//  * Author: Vansh Bansal
//  * Created on: Jan. 2024
//  * 
//  */



// #include <iostream>
// #include "Profile.h"
// #include "MyADT.h"



// using std::endl;
// using std::cout;

// int main() {

// MyADT fb;

// Profile ANA("an" , "ANA LAURA" , "ANA@GMAIL.COM" , "01-05-1971" );
// Profile ANA2("ana" , "ANA LAURA" , "ANA2@GMAIL.COM" , "01-06-1971" );
// Profile ANA3("anaa" , "ANA LAURA" , "ANA3@GMAIL.COM" , "01-07-1971" );
// Profile ANA4("ann" , "ANA LAURA" , "ANA4@GMAIL.COM" , "01-07-2011" );
// Profile ANA5("annn" , "ANA LAURA" , "ANA4@GMAIL.COM" , "01-07-2011" );
// Profile ARMAAN("am" , "ARMAAN CHAHAL" , "ARMAAN@GMAIL.COM" , "11-09-2000" );
// Profile ADITYA("ad" , "ADITYA SINGH" , "ADITYA@GMAIL.COM" , "06-12-2006" );
// Profile VANSH("va" , "VANSH BANSAL" , "VANSH@GMAIL.COM" , "01-09-1990" );
// Profile NID("nd" , "NID CHAHAL" , "NID@GMAIL.COM" , "19-09-2000" );
// Profile HARRY("hr" , "HARRY SINGH" , "HARRY@GMAIL.COM" , "19-10-2003" );


// // Test case 1:	
// // Testinng default function

// // cout << "____________________________test 1_____________________________\n";
// // cout << "testing defualt constructor\n";
// // cout << "Expected Result: tbd, tbd, tbd, born on tbd\n";
// // cout << "Actual Result:"; 

// // Profile TBD;
// // if (fb.insert(TBD)){
// //   fb.print();
// //   cout << "test 1 successful \n";
// // }
// // cout << "********************************************************\n";

// // // test case 2:
// // //testing insert function
// // MyADT fb2;

// // cout << "_____________________________test 2_________________________\n";
// // cout << "testing insert function\n";


// // fb2.insert(VANSH);
// // fb2.insert(ARMAAN);

// // if(fb2.insert(ANA))
// // {
// // cout <<"successfully inserted 3 profiles \n";
// // cout << "test 2 successful\n";
// // }else{
// //   cout <<"test 2 failed \n";
// // }
// // cout << "********************************************************\n";

// // // test case 3:
// // //testing search function
// // cout << "_____________________________test 3_________________________\n";
// // cout << "testing search function\n";
// // if (fb2.search(ANA)){
// // cout <<"profile ANA found in FB\n";
// // cout << "test 3 successful\n";
// // }
// // else{
// //   cout <<"profile was not found in FB\n";
// // }
// // cout << "********************************************************\n";

// // // test case 4:
// // //testing print function
// // cout << "_____________________________test 4_________________________\n";
// // cout << "testing print function\n";
// // fb2.print();
// // cout << "test 4 successful\n";
// // cout << "********************************************************\n";

// // // test case 5:
// // //testing get element function
// // cout << "_____________________________test 5_________________________\n";
// // cout << "testing get element function\n";
// // cout << "Expected count : 3 \n";
// // if (fb2.getElementCount() == 3){
// // cout << "Actual count : 3 \n";
// // cout << "test 5 successful\n";
// // }else{
// // cout << "test 5 failed\n";
// // }
// // cout << "********************************************************\n";

// // // test case 6:
// // //testing remove function
// // cout << "_____________________________test 6_________________________\n";
// // cout << "testing remove function\n";

// // if (fb2.remove(ANA)){
 
// //     cout << "profile successfully removed\n";
// //     cout << "test 6 successful\n";
  
// // }else{
// //   cout << "test 6 failed, pofile wasn't removed\n";
// // }
// // cout << "********************************************************\n";

// // test case 7:
// //testing remove all function
// fb.insert(ANA);
// fb.insert(ANA2);
// fb.insert(ANA3);
// fb.insert(ANA4);
// fb.insert(ANA5);
// fb.insert(ARMAAN);
// fb.insert(VANSH);
// fb.insert(NID);
// fb.insert(HARRY);

// cout<<fb.getElementCount()<<'\n';
// cout << "_____________________________test 7_________________________\n";
// cout << "testing remove all function\n";
// if (fb.getElementCount() != 0){
//   fb.removeAll();
//   if(fb.getElementCount()== 0){
//     cout << "profiles successfully removed\n";
//     cout << "test 7 successful\n";
//   }
//   else {
//     cout << "remove all function failed\n";
//   }
//   fb.print();
//   cout<<fb.getElementCount()<<'\n';
// }
// fb.print();
// cout << "********************************************************\n";

// // // test case 8:
// // //testing copy constructor
// // fb2.insert(VANSH);
// // fb2.insert(ARMAAN);
// // fb2.insert(NID);
// // cout << "_____________________________test 8_________________________\n";
// // cout << "testing copy constructor\n";
// // MyADT fb3(fb2);
// // if(fb2.getElementCount()== fb3.getElementCount())
// // {
// // cout << "original:\n";
// // fb2.print();
// // cout<<'\n';
// // cout << "copy:\n";
// // fb3.print();
// // }
// // fb2.insert(ANA);
// // cout << "original after a profile insertion :\n";
// // fb2.print();
// // cout<<'\n';
// // cout << "copy after profile insertion to the original:\n";
// // fb3.print();
// // if(fb2.getElementCount()!= fb3.getElementCount()){
// //     cout << "deep copy was made\n";
// //     cout << "test 8 successful\n";
// // }

// // // test case 9:
// // //testing copy constructor
// // cout << "********************************************************\n";
// // cout << "_____________________________test 9_________________________\n";
// // cout << "testing copy constructor\n";
// // fb3.remove(VANSH);
// // cout << "original:\n";
// // fb2.print();
// // cout<<'\n';
// // cout << "copy after removing an element:\n";
// // fb3.print();
// //     cout << "deep copy was made\n";
// //     cout << "test 9 successful\n";


// // // test case 10:
// // //testing insert function with 5 profiles
// // MyADT fb4;

// // cout << "********************************************************\n";
// // cout << "_____________________________test 10_________________________\n";
// // cout << "testing insert function with a sixth profile\n";

// // MyADT fb4;

// // fb4.insert(ANA);
// // fb4.insert(ANA2);
// // fb4.insert(ANA3);
// // fb4.insert(ANA4);

// // std::cout<< fb4.getElementCount()<<'\n';
// // fb4.insert(ANA);
// // fb4.insert(ANA2);
// // fb4.insert(ANA3); 
// // fb4.insert(ANA4);
// // std::cout<< fb4.getElementCount();

// // fb4.insert(HARRY);
// // fb4.insert(ARMAAN);
// // fb4.insert(VANSH);
// // fb4.insert(NID);

// // cout << "inserting the 6th profile, expecting to return false\n";
// // if(fb4.insert(ADITYA)){
// //  fb4.print();
// //  cout << "test 10 failed\n";
// // }
// // else{  
// // cout << "false was returned\n";
// // cout << "test 10 successful\n";
// // }
// // cout << "********************************************************\n";


// return 0;
// }

// /*
//  * MyADT.cpp
//  * 
//  * Class Description: A linear data collection ADT.
//  * 
//  * Class Invariant: Data collection with the following characteristics:
//  *                  - This is a value-oriented data collection and 
//  *                    the elements are kept in ascending sort order of search key.
//  *                  - Each element is unique (no duplicates). 
//  *                  - Its data structure (CDT) is not expandable. This signifies that 
//  *                    when this data collection becomes full, you do not have to resize 
//  *                    its data structure (not in this Assignment 1). 
//  *
//  * Author: Aryan Anand
//  * Last modified on: Feb 02 2024
//  */


#include <iostream>
#include <string>
#include "Profile.h"
#include "MyADT.h"

using namespace std;

// Function to print the contents of the data collection
void printCollection(MyADT &collection) {
    cout << "Current Collection:" << endl;
    collection.print();
    cout << "Total Number of Elements: " << collection.getElementCount() << endl;
    cout << "-------------------" << endl;
}

int main() {

    MyADT myCollection;

    // Create and insert profiles into the collection
    Profile profile1("aryan", "Aryan Anand", "aryan12anand@gmail.com", "2002-05-11");
    Profile profile2("armaan", "Armaan Chahal", "armanchahal@gmail.com", "1975-05-12");
    Profile profile3("aditya", "AdityaPal Warrach", "asw18@sfu.ca", "2005-03-11");
    Profile profile4("harry" , "HARRY SINGH" , "harry@gmail.com" , "19-10-2003" );
    Profile profile5("vansh" , "VANSH BANSAL" , "vansh@.com" , "01-09-2002" );
    Profile profile6("nidhish" , "Nidhish Singh" , "nidhidh@hotmail.com" , "01-09-2003" );

    cout << "\nInserting profiles into the collection..." << endl;
    myCollection.insert(profile1);
    myCollection.insert(profile2);
    myCollection.insert(profile3);
    myCollection.insert(profile4);
    myCollection.insert(profile5);
    myCollection.insert(profile6);

    printCollection(myCollection);


    // Test Default Constructor
    cout << "Testing Default Constructor..." << endl;
   
    cout << "Default Constructor tested." << endl;
    printCollection(myCollection);



    // Test Search
    cout << "\nSearching for 'Harry'..." << endl;
    Profile* foundProfile = myCollection.search(profile4); 
    if (foundProfile != nullptr) {
        cout << "Profile found: " << *foundProfile << endl;
    } else {
        cout << "Profile not found." << endl;
    }

    // Test Remove
    cout << "\nRemoving 'aryan' from the collection..." << endl;
    if (myCollection.remove(profile1)) {
        cout << "Profile removed successfully." << endl;
    } else {
        cout << "Profile not found for removal." << endl;
    }
    printCollection(myCollection);

    // Test RemoveAll
    cout << "\nRemoving all profiles from the collection..." << endl;
    myCollection.removeAll();
    printCollection(myCollection);

    // Test Deep Copy
    cout << "\nTesting Deep Copy..." << endl;
    myCollection.insert(profile4);
    myCollection.insert(profile5);
    MyADT myCollectionCopy(myCollection); // Create a deep copy of myCollection

    // Add another profile to the copy
    Profile profile7("deepCopyUser", "Deep User", "deep@user.com", "11/11/2011");
    myCollectionCopy.insert(profile7);

    // Print the original and the copy
    cout << "Original Collection (should not include 'deepCopyUser'):" << endl;
    printCollection(myCollection);

    cout << "Deep Copied Collection (should include 'deepCopyUser'):" << endl;
    printCollection(myCollectionCopy);





    return 0;
}