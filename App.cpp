#include <iostream>

using namespace std;

//start the main method(first method to run )
int main(void)
{
    //initialize integer variables to use latter in the program
    int T,i,j,year,month,day,row;
    // initialize two dimension that years numbers through 100 years
    int YEAR[28][4];
    // initialize date array that hold the days numbers that will be constant numbers
    int DATE[8];
    // initialize integer variable
    int date;

     // Say Hellooooooooooooo
    cout << "\n Welcome TO My Program ! \n\n\n\n" ;
   //  here the user should enter his choice to know which century we will work on
   cout << "Please choose the time : \n";
   cout << " 1 => (1801 - 1900) \n 2 => (1901 - 2000) \n 3 => (2001 - 2100) \n";

    //we take the choice of the user ans store it in (T) so T will = 1 or 2 or 3
    cout << " \n enter your choice  :";
    cin >> T ;

    //here we start to take the date from the user
    cout <<"\n Enter your date :\n\n";

    //we take last two numbers from the year and store it in (year) Example if the year was 1999 the the user should enter 99
    cout << "\nlast two number of the year :";
    cin>>year;

    // we take the month number and store it in (month)
    cout << "\nThe Month :";
    cin >>month;

    //we take the day number and store it in (day)
    cout <<"\nThe Day :";
    cin >>day;
    //put some space ;)
    cout<<"\n\n";

    // Okay lets start with the complex calculations here
    //  initialize Month two dimensions array and full it's values, it's constant values for all dates
    int MONTH[28][12]={4,0,0,3,5,1,3,6,2,4,0,2,5,1,1,4,6,2,4,0,3,5,1,3,6,2,2,5,0,3,5,1,4,6,3,4,0,3,4,0,2,5,0,3,6,1,4,6,2,5,5,1,3,6,1,4,0,2,5,0,3,6,6,2,4,0,2,5,1,3,6,1,4,0,0,3,5,1,3,6,2,4,0,2,
                       5,1,2,5,0,3,5,1,4,6,2,4,0,3,3,6,1,4,6,2,5,0,3,5,1,4,4,0,2,5,0,3,6,1,4,6,2,5,5,1,3,6,1,4,0,2,5,0,3,6,0,3,5,1,3,6,2,4,0,2,5,1,1,4,6,2,4,0,3,5,1,3,6,2,2,5,0,3,5,1,4,6,2,4,
                       0,3,3,6,1,4,6,2,5,0,3,5,1,4,5,1,3,6,1,4,0,2,5,0,3,6,6,2,4,0,2,5,1,3,6,1,4,0,0,3,5,1,3,6,2,4,0,2,5,1,1,4,6,2,4,0,3,5,1,3,6,2,3,6,1,4,6,2,5,0,3,5,1,4,4,0,2,5,0,3,6,1,4,6,
                       2,5,5,1,3,6,1,4,0,2,5,0,3,6,6,2,4,0,2,5,1,3,6,1,4,0,1,4,6,2,4,0,3,5,1,3,6,2,2,5,0,3,5,1,4,6,2,4,0,3,3,6,1,4,6,2,5,0,3,5,1,4,4,0,2,5,0,3,6,1,4,6,2,5,6,2,4,0,2,5,1,3,6,1};

    //  initialize Day two dimensions array and full it's values, it's constant values for all dates
    int DAY[7][6]={1,8,15,22,29,36,2,9,16,23,30,37,3,10,17,24,31,0,4,11,18,25,32,0,5,12,19,26,33,0,6,13,20,27,34,0,7,14,21,28,35,0};

    //now we remember the (T) variable that holds 1 or 2 or 3 depends on user's choice
    // if user choose 1 the YEAR two dimension array will be filled with constant values
    // if user choose 2 the YEAR two dimension array will be filled with other constant values that different from choice 1 , and so on if T = 3

    //the years
    switch(T)
    {
    case 1 :
       {int YEAR[28][4]={1,29,57,85,2,30,58,86,3,31,59,87,4,32,60,88,5,33,61,89,6,34,62,90,7,35,63,91,8,36,64,92,9,37,65,93,10,38,66,94,11,39,67,95,12,40,68,96,13,41,69,97,14,42
                        ,70,98,15,43,71,99,16,44,72,0,17,45,73,0,18,46,74,0,19,47,75,0,20,48,76,0,21,49,77,0,22,50,78,0,23,51,79,0,24,52,80,0,25,53,81,0,26,54,82,0,27,55,83,0,28,56,84,0};


    //by now we have values for the full date from user and have values for the arrays that we work on them (month array , day array , year array)
    // in this loop we enter the year array YEAR[28][4] and search for the number that = the year from user input ...yes that last two number from the year
    //when we find this number we store it's row value in row variable so after this we got the row value of the number that match with year that user entered
    // WE HAVE THE ------ROW------ VALUE
   for(i=0;i<28;i++)
     {
         for(j=0;j<4;j++)
         {
             if ( year == YEAR[i][j])
             {
                  row = i;
             }
         }
     }}
    break;

    case 2 :
       { int YEAR[28][4]={0,25,53,81,0,26,54,82,0,27,55,83,0,28,56,84,1,29,57,85,2,30,58,86,3,31,59,87,4,32,60,88,5,33,61,89,6,34,62,90,7,35,63,91,8,36,64,92,9,37,65,93,10,38,66,94,11,39,67
                           ,95,12,40,68,96,13,41,69,97,14,42,70,98,15,43,71,99,16,44,72,0,17,45,73,0,18,46,74,0,1947,75,0,20,48,76,0,21,49,77,0,22,50,78,0,23,51,79,0,24,52,80,0};
        for(i=0;i<28;i++)
     {
         for(j=0;j<4;j++)
         {
             if ( year == YEAR[i][j])
             {
                  row = i;
             }
         }
     }}
     break;

    case 3 :
        {int YEAR[28][4]={0,9,37,65,0,10,38,66,0,11,39,67,0,12,40,68,0,13,41,69,0,14,42,70,0,15,43,71,0,16,44,72,0,17,45,73,0,18,46,74,0,19,47,75,0,20,48,76,0,21,49,77,0,22,50,78,0,23,51,79
                          ,0,24,52,80,0,25,53,81,0,26,54,82,0,27,55,83,0,28,56,84,1,29,57,85,2,30,58,86,3,31,59,87,4,32,60,88,5,33,61,89,6,34,62,90,7,35,63,91,8,36,64,92};
    for(i=0;i<28;i++)
     {
         for(j=0;j<4;j++)
         {
             if ( year == YEAR[i][j])
             {
                  row = i;
             }
         }
     }}
     break;

     // make a default result to dump users that will enter wrong value XD
    default:
        {cout<<"Wrong Number ! ! ! !";}
        break;

    }

    //okay by now we have the row value in all 3 cases
    //the next equation is the sweat it's very important to under stand so we will explain it carefully
    // so by now we have 3 information the [day] from user , the [month] from user , the row value that we just calculated
    //FIRST----(MONTH[row][month-1])----we enter in MONTH array and get the value with this location in it row as a row value and month-1 as a column value
    // after we get this we add to it the day value that come from the user
    // after adding them we store it in (number)variable this is our result this our finally ;)

    int number = (MONTH[row][month-1])+day;

    //by now we have number and it holds value
    //we search in DAY array for the same value and if it in 1st row then it was sunday if 2ed it was monday and so forth.

             for(j=0;j<6;j++)
               {
                   if(number==DAY[0][j])
                   {
                       cout <<"You Was Born On == SUNDAY ==\n\n\n";
                   }
               }

               for(j=0;j<6;j++)
               {
                   if(number==DAY[1][j])
                   {
                       cout <<"You Was Born On ==  MONDAY  ==\n\n\n";
                   }
               }
               for(j=0;j<6;j++)
               {
                   if(number==DAY[2][j])
                   {
                       cout <<"You Was Born On ==  TUESDAY  ==\n\n\n";
                   }
               }
               for(j=0;j<6;j++)
               {
                   if(number==DAY[3][j])
                   {
                       cout <<"You Was Born On ==  WEDNESDAY  ==\n\n\n";
                   }
               }
               for(j=0;j<6;j++)
               {
                   if(number==DAY[4][j])
                   {
                       cout <<"You Was Born On ==  THURSDAY  ==\n\n\n";
                   }
               }
               for(j=0;j<6;j++)
               {
                   if(number==DAY[5][j])
                   {
                       cout <<"You Was Born On ==  FRIDAY  ==\n\n\n";
                   }
               }
               for(j=0;j<6;j++)
               {
                   if(number==DAY[6][j])
                   {
                       cout <<"You Was Born On ==  SATURDAY  ==\n\n\n";
                   }
               }



}
