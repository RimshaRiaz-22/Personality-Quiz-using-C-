// #include <set>
// #include <vector>
// #include <map>
// #include <fstream>
// #include <sstream>
#include <string>
#include <iostream>
#include <bits/stdc++.h>


using namespace std;
const int MAX = 26;
int options ();
int selecttest ();
int options2(string message[]);
int main ()
{
  int answer;
  int numOfQuestions;
  int testnumber;

  cout << "Welcome to the Personality Quiz!" << endl;

  cout << "\nChoose number of questions: ";
  cin >> numOfQuestions;

  //readquestion=readquestions();
  for (int i = 0; i < numOfQuestions; i++)
    {
      cout << "\nHow much do you agree with this statement?" << endl;
      // Random questions logic goes here 
     const int NMAX = 10;
   int r;
   string message[NMAX] = { 
                            "I am the life of the party",
                            "I talk to a lot of different people at parties",
                            "I start conversations",
                            "I love large parties",
                            "I don't talk a lot",
                            "I keep in the background",
                            "I am quiet around strangers"
                            "I don't like to draw attention to myself",
                            "I bottle up my feelings",
                            "I radiate joy"
                          };

   srand( time(0) );
      r = rand()%NMAX;
      cout << message[r] << endl;

      //    Take options
      answer = options ();

    }
  while (1)
    {
      testnumber = selecttest ();

    }
  return 0;
}


int
selecttest ()
{
  int selecttest;
  cout << "\n";
  cout << "1. BabyAnimals" << endl;
  cout << "2. Brooklyn99" << endl;
  cout << "3. Disney" << endl;
  cout << "4. Hogwarts" << endl;
  cout << "5. MyersBriggs" << endl;
  cout << "6. SesameStreet" << endl;
  cout << "7. StarWars" << endl;
  cout << "8. Vegetables" << endl;
  cout << "9. mine" << endl;
  cout << "0. To end program." << endl;

  cout << "\nChoose test number (1-9, or 0 to end): ";
  cin >> selecttest;

  switch (selecttest)
    {
    case 1:{
        // BabyAnimals();
        const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Puppy",
                            "Kitty",
                            "Bunny",
                            "Baby Seal",
                            "Baby Hamster",
                          };
    options2(message);
    //   cout << "You got Baby Hamster!" << endl;
      break;
    }
    case 2:{
          const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Jake Peralta",
                            "Rosa Diaz",
                            "Terry Jeffords",
                            "Amy Santiago",
                            "Gina Linetti",
                          };
    options2(message);
          // Brooklyn99();
    //   cout << "You got Rosa Diaz!" << endl;
      break;
    }
    case 3:{
            // Disney();
      const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Nemo",
                            "Remy",
                            "Aladdin",
                            "Mulan",
                            "Tinker Bell",
                          };
    options2(message);
      break;
    }
    case 4:{
            // Hogwarts();
      const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Hufflepuff",
                            "Slytherin",
                            "Aladdin",
                            "Ravenclaw",
                            "Gryffindor",
                          };
    options2(message);
      break;
    }
    case 5:
  {  // MyersBriggs();
     const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "ISTJ - The Inspector",
                            "ISTP - The Crafter",
                            "ISJF - The Protector",
                            "ISFP - The Artist",
                            "ENTP - The Debater",
                           
                          };
    options2(message);
      break;}
    case 6:{
    // SesameStreet();
       const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Big Bird",
                            "Oscar the Grouch",
                            "Elmo",
                            "ISFP - The Artist",
                            "ENTP - The Debater",
                           
                          };
    options2(message);
      break;
        
    }
    case 7:{
    // StarWars();
         const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Darth Vader",
                            "Luke Skywalker",
                            "Elmo",
                            "Han Solo",
                            "Princess Leia",
                           
                          };
    options2(message);
      break;}
    case 8:{
    // Vegetables();
       const int NMAX = 5;
  int r;
  string message[NMAX] = { 
                            "Mushroom",
                            "Potato",
                            "Onion",
                            "Brocolli",
                            "Carrot",
                           
                          };
    options2(message);
      break;}
    case 9:{
    // mine();
      cout << "    " << endl;
      break;}
    case 0:
      cout << "goodbye!" << endl;
      exit (1);
    default:
      cout << "***End***" << endl;
    }

  return selecttest;
}
int options2(string message[5]){
  int r;
  srand( time(0) );
      r = rand()%5;
      cout << "You got "+ message[r]+"." << endl;
      return 0;
}

int options ()
{
  int answer;
  cout << "\n";
  cout << "1. Strongly disagree" << endl;
  cout << "2. Disagree" << endl;
  cout << "3. Neutral" << endl;
  cout << "4. Agree" << endl;
  cout << "5. Strongly Agree" << endl;

  cout << "\nEnter your answer here (1-5): ";
  cin >> answer;
  return answer;
}



