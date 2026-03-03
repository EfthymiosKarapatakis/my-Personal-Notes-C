#include <stdio.h>
#include <stdbool.h>    // To be able to use bool (true, false). (9th).
#include <strings.h>    // To use strlen(), strcat(), strcpy(), strcmp(). (26th)
#include <stdlib.h>     // To use the rand(), srand(). (FindNumber1_100)
#include <time.h>       // To use time(). (FindNumber1_100)
#include <math.h>       // To use sqrt(), ceil(), floor(), row(). (34th)

/* 1st: Simle function, print and new lines.
int main(){                               //function
    printf("Hello World \n\n");           //printf = print
                                          //"\n" new line
    return 0;                             //to close the function
}
*/

/* 2nd: Variables.
int main(){
    int test = 69;                         //type VarName = Var;
                                           //type: int "0,1,2", float "19.99, -19.23", char "a, b, c"
                                                //FOR FLOAT:
``                                                  //another word for float is double but for bigger digit values with more precision
                                                    //float and double will automatically show 6 digits
                                                    //you can write "%.1f" for one digit, "%.2f" for two etc.
                                                //FOR CHAR:
                                                    //char  name = 'a';    //With single strings.
                                                    //To make a word:
                                                        // char greetings[]  = "Hello world!"   //You create a array.
                                            //You can also write:
                                                //int test;
                                                //test = 69;

    printf("my lucky number is %d", test);  //this is for variants
                                            //%d or %i for int
                                            //%c for char
                                            //%f for float
                                            //%s for strings (text, array)
    return 0;
}
*/

/* 3rd: Print two variable in one line.
int main(){
    printf("My number is %d and my letter is %c", 18, 'E');        //You could also place var in the places of 18, E
    return 0;
}
*/

/* 4th: Add variables together.
int main(){
    int one = 1;
    int two = 2;

    int three = one + two;                  //+, -, *, ^, /, %
    printf("%d", three);
                                            //Also you can Increases or decrease the value of a variable by 1:
                                                //int x = 5;
                                                //printf("%d", ++x);        //Or --x
    return 0;
}
*/

/* 5th: Constants.
int main(){
    const int items = 50;             //With the const command you make a var unchangeable and read only
    float prize = 9.99;
    char currency = '$';

    float total_cost = items * prize;

    printf("Your total is %.2f %c", total_cost, currency);

    return 0;
}
*/

/* 6th: Divisions with var.
int main(){
    float sum = (float) 5/2;           // if we didnt type (float) the sum will be 2 becose both 2 and 5 is int so we have to manual change that
    printf("%.1f", sum);

    return 0;
}
*/

/* 7th: Assignment operators (+=).
A list of all assignment operators:

x = 5
x += 3       or    x = x + 3
x -= 3       or    x = x - 3
x *= 3       or    x = x * 3
x /= 3       or    x = x / 3
x %= 3       or    x = x % 3
x &= 3       or    x = x & 3
x |= 3       or    x = x | 3
x ^= 3       or    x = x ^ 3
x >>= 3      or   x = x >> 3
x <<= 3      or   x = x << 3
*/

/* 8th: True false, comparison operators (!=) and logical operators (&&).
1 true                           //Sometimes is other numbers that is not 0
0 false

int x = 5;
int y = 3;
printf("%d", x > y);              // returns 1 (true) because 5 is greater than 3

A list of all comparison operators:
x == y   equal
x != y   not equal
x > y
x < y
x >= y
x <= y

A list of all logical operators:
&&    and     x < 5 && y > 6
||    or      x < 5 || y > 6
!     not     !(x < 5 && x < 10) 	Reverse the result, returns 0 if the result is 1
*/

/* 9th: Bool.
int main(){
    bool isProgrammingFun = true;          //This is int 1
    bool isFishTasty = false;              //this is int 0 so if you want to print it:
    printf("%d %d",isProgrammingFun, isFishTasty);          //Returns 1 0 (true false)


    printf("%d \n", isProgrammingFun == isFishTasty);          //Returns 0 (true != false)
    return 0;
}
*/

/* 10th: If, else if, else 1.
int main() {
    if (condition1) {
      // block of code to be executed if condition1 is true
    } else if (condition2) {
      // block of code to be executed if the condition1 is false and condition2 is true
    } else {
      // block of code to be executed if the condition1 is false and condition2 is false
    }

    return 0;
}
*/

/* 11th: If, else if, else 2.
int main() {
    int myage = 16;
    int votingage = 18;

    if (myage >= votingage){                         //if, else if, else
        printf("Old enough to vote!");
    } else {
        printf("Not old enough to vote.");
    }
    return 0;
}
        //  OR

int main(){int myage = 25;int votingage = 18; if(myage >= votingage){printf("You are old enough to vote!");} else{printf("You are not old enouph to vote.");} return 0;}
*/

/* 12th: Short Hand If...Else.
                        //Syntax:
//variable = (condition) ? ExpressionTrue : ExpressionFalse;
                        //Example :
int main() {
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");
    return 0;
}
*/

/* 13th: Switch.
                    //Syntax:

switch (Expression) {
    case x:
    // code block
    break;
    case y:
    // code block
    break;
    default:
    // code block
}
                    //Example:
int main () {
    int day = 4;

    switch (day) {
        case 1:
            printf("Monday");
            break;                          //When C reaches a break commant, it breaks out of the switch block.
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Wrong day number.");     //The defult commant run some code if theres no case found. For exmple day = 14 (day != 1-7).
    }
    return 0;
}
*/

/* 14th: While loops.
                        //Syntax:
while (condition) {
    //code block to be executed
}
                        //Example:
int main() {
    int i = 0;

    while (i <= 5) {
        printf("%i\n",i );
        i++;                         // i = i + 1
    }
    return 0;

}
*/

/* 15th: Do\While loops.
                        //Syntax
do {
    //code block to be executed
}
while (condition);
                        //Example
int main(){
    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);

    return 0;
}
*/

/* 16th: Simple programm with Switch and loops. (Days of a week)
int main() {
    int day = 1;
    int week = 1;
    do {
        printf("%i\n", week);

        switch(day){
            case 1:
                printf("monday\n");
                day++;
            case 2:
                printf("Tuesday\n");
                day++;
            case 3:
                printf("Wednesday\n");
                day++;
            case 4:
                printf("Thursday\n");
                day++;
            case 5:
                printf("Friday\n");
                day++;
            case 6:
                printf("Saturday\n");
                day++;
            case 7:
                printf("Sunday\n\n");
                day++;
            default:
                day = 1;
                week++;
        }
    }
    while (week <= 4);

    return 0;
}
*/

/* 17th: For loop.
                        //Syntax:
for (Expression 1; Expression 2; Expression 3){
    //Code block to be executed
}

Expression 1: is executed (one time) before the execution of the code block.
Expression 2: defines the condition for executing the code block.
Expression 3: is executed (every time) after the code block is executed.
                        //Example 1:
int main() {
    int i;

    for (i = 0; i <= 5; i++) {
        printf("%i\n", i);
    }
    return 0;
}
                        //Example 2:
int main() {
    int number = 2;
    int i;

    for (i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
*/

/* 19th: Break/ Continue.
                        //Break:
int main(){
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 4) {
        break;                  //it can break out of a loop.(we used it in switch)
        }
      printf("%d\n", i);        //0123
    }
}
                        //Continue:
int main() {
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue;           //it skips and continue to the next iteration in the loop
        }
        printf("%i\n", i);      //012356789, no 4
    }
    return 0;
}
//You can also break and continue in while loops
*/

/* 20th: Array.
                        // Example:
int myNumbers[] = {25, 50, 75, 100};
// Positions:       0   1   2   3  ...

// How to print an array element:
printf("%d", myNumbers[0]);     // Output: 25

// Change an array element:
myNumbers[0] = 33;          // Now myNumbers[] = {33, 50, 75, 100};

// How to loop through the array elements with the for loop:
int i;
for (i = 0; i < 4; i++){
    printf("%d", myNumbers[i]);         // Output: 33 50 75 100
}

// Another way to create an array:
int myNumbers[4];           // Create an array of four integers:

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
*/

/* 21st: Array sizes.
// To get the size of an array you use the sizeof() operator:
int myNumbers[] = {10, 25, 50, 75, 100};
printf("%lu", sizeof(myNumbers));       // Output 20.
                                        // It prints 20 instead of 5 because the sizeof operator return the size of a type in bytes.
                                        // int, float: 4 bytes (4x5=20).
                                        // double: 8 bytes.
                                        // char: 1 byte.

// But when you just want to find out how many elements an array has, you can use the following formula.
// (which divides the size of the array by the size of one array element):
int length = sizeof(myNumbers[]) / sizeof(myNumbers[0]);
printf("%i", length);           // Output: 5

// A better way (than the 20th) to loop through an array elements with a for loop
int i;
for (i = 0; i < length; i++) {
    printf("$d\n", myNumbers[i]);
}
*/

/* 22nd: Simple programms with arrays.
                        // 1:
int main () {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float averageAge, sum = 0;
    int i;
    int length = sizeof(ages) / sizeof(ages[0]);

    for (i = 0; i < length; i++) {
        sum += ages[i];
    }

    averageAge = sum / length;
    printf("The average age is: %.2f", averageAge);
    return 0;
}
                        // 2:
int main() {
    int ages[] = {50, 48, 61, 21 ,13, 18, 97};
    int length = sizeof(ages) / sizeof(ages[0]);
    int younger = ages[0];
    int i;

    for (i = 0; i < length; i++) {
        if (ages[i] < younger){
            younger = ages[i];
        }
    }
    printf("The younger is %d years old!", younger);
    return 0;
}
*/

/* 23rd: Two dimentional arrays.
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
            // [2]: first dimention (ROW 0)
                // {1, 4, 2}: 1: COLUMN 0
                    //        2: COLUMN 1
                    //        3: COLUMN 2
            //// [3]: second dimention (ROW 1)
                // {3, 6, 8}: 3: COLUMN 0
                    //        6: COLUMN 1
                    //        8: COLUMN 2

        COLUMN 0    COLUMN 1    COLUMN 2
ROW 0       1           4           2
ROW 1       3           6           8

// How to access elements on a two-dimentional array:
printf("%i", matrix[0][2])      // Output: 2
        //          |     row 0
        //             |  column 2

// How to change elements in a 2D array:
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int matrix[0][0] = 9
printf("%d", matrix[0][0]);     // print 9 instead of 1

// How to loop through a 2D array:
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j = 0;

for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
        print("%d\n", matrix[i][j]);
    }
}
*/

/* 24th: Strings.
int main() {
    // Make a string:
    char greetings[] = "Hello World!";
    printf("%s", greetings);        // %s for string
                                    // Output: Hello World:
    // Access string:
    printf("%c", greetings[0]);     // %c for char (single letter)
                                    // Output: H
    // Modify string:
    greetings[0] = 'J';             // '' because its a char
    printf("%s", greetings);        // Output: Jello World!

    // Loop through a string:
    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    int i;

    for (i = 0; i < length; i++) {
        printf("%c ", carName[i]);  // Output: V o l v o
    }

    // Another way to create a sting:
    char word[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};       // \0 tells C that this is the end of the string.
    printf("%s", word);

    // The size of bytes for both ways is the same
    return 0;
}
*/

/* 25th: Special characters.
// A common problem is:
char txt[] = "We are the so-called "vikings" from the north.";

// To solve the problem we add a \ before the special character:
char txt[] = "We are the so-called \"vikings\" from the north.";

// More examples:
\'      '
\"      "
\\      \

\n      new line
\t      Tab
\O      Null    (24th)
*/

/* 26th: <strings.h> Special commants.
// String length:       strlen()
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));     // Output: 26
// Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:
printf("%d", sizeof(alphabet));     // Output: 27

// Combine strings:     strcat()
char str1[20] = "Hello ";   // The size of str1 should be large enough to store the result of the two strings combined (20 in our example).
char str2[] = "World!";
strcat(str1, str2);     // Compine the str2 in str1 (it stores is str1).
printf("%s", str1);     // Output: Hello World!

// Copy string:         strcpy()
char str1[20] = "Hello World!";
char str2[20];          // The size of str2 should be large enough to store the copied string (20 in our example).
strcpy(str2, str1);     //Copy str1 to str2
printf("%s", str2);

// Compare strings:     strcmp()
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";
// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)
// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
*/

/* 27th: User input.
// For int input:
int myNum;
printf("Type a number:");
scanf("%d", &myNum);    // For two inputs:
                        // scanf("%d %c", &myNum, &myChar);
printf("Your number is %i", myNum);

// For string input:
char firstName[30];     // With strings in scanf(), you must specify the size of the string/array.
printf("Enter your first name: \n");
scanf("%s", firstName); // You don't have to use the reference operator (&).
printf("Hello %s", firstName);

//the scanf() function has some limitations:
// It considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word.

// To solve this problem we offen use the fgets() command:
// Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:
char fullName[30];
printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);
printf("Hello %s", fullName);
*/

/* 28th: Memory address / Pointers.
int main() {
    int myNum = 43;

    printf("%i\n", myNum);      // Output: 43
    printf("%p", &myNum);       // %p: To print pointers values
                                // Output: 0x7ffe30d9a794
                                    // The memory address is the location of where the variable is stored on the computer.
                                // You should also note that &myAge is often called a "pointer".
    return 0;
}

// A pointer is a variable that stores the memory address of another variable as its value.
// A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
int main() {
    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
        // Output the value of myAge (43)
    printf("%d\n", myAge);
        // Output the memory address of myAge (0x7ffe30d9a794)
    printf("%p\n", &myAge);
        // Output the memory address of myAge with the pointer (0x7ffe30d9a794)
    printf("%p\n", ptr);

    return 0;
}

// You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):
int main() {
    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration      // Or int *ptr = &myAge;
    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);

    return 0;
}
*/

/* 29th: Pointers arrays and loops.
int main() {
    int myNum[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNum) / sizeof(myNum[0]);
    int i;

    for (i = 0; i < length; i++){
        printf("%p \n", &myNum[i]);     // %p for pointers.
                                        // Output: the locations for each var.
    }
    return 0;
}
*/

/* 30th: Functions.

// To create a function:
void myFunction() {         // The void means that the function does not have a return value.
    // Code to be executed
    printf("This is a function.");
}

// To call a function:
int main() {
    myFunction();

    return 0;       // Output: This is a function.
}
*/

/* 31st: Function Parameters.
                        // Example 1: One parameter.
void myFunction(char name[]) {          // the var type the var name, ...
    printf("Hello %s\n", name);
}

int main() {
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");     // Output:
                                // Hello Liam
                                // Hello Jenny
                                // Hello Anja
    return 0;
}


                            // Example 2: Two parameter.
                            
void math(int x,int  y) {
    int sum = x + y;
    printf("The sum of %i and %i is %i\n",x , y, sum);
}

int main() {
    math(20, 1);        // 21
    math(14, 3);        // 17
    math(4, 26);        // 30

    return 0;
}


                        // Example 3: Return values.
int myFunction(int x) {             // int ant not void because it returns a number.
    return 5 + x;
}

int main() {
    printf("%i", myFunction(3));

    return 0;       // Output 8
}
*/

/* 32nd: Scopes.

                        // Local scopes:
void myFunction() {
    // Local variable:
    int x = 5;
    printf("%i", x);
}
int main() {
    myFunction();
    printf("%i", x);        // Error
    return 0;
}
                        // Global scopes:
// Global variable:
int x = 5
void myFunction() {
    // We can use x here:
    printf("%i", x);
}
int main() {
    // We can also use x here:
    printf("%i", x);
    return 0;
}
                        // Naming variables:
// Global var named x:
int x = 5;
void myFunction() {
    // Local variable x:
    int x = 45;
    printf("%i", x);    //prints the local variable (x = 45).
}
int main() {
    printf("%i", x);    //prints the global variable (x = 5).
    return 0;
}
// However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.
*/

/* 33rd: Function Declaration and Definition.

void myFunction() { // declaration
  // the body of the function (definition)
}
///////////////////////////////////////////////////////
// Function declaration
int myFunction(int x, int y);
// The main method
int main() {
  int result = myFunction(5, 3); // call the function
    printf("Result is = %d", result);
    return 0;
}
// Function definition
int myFunction(int x, int y) {
    return x + y;
}
*/

/* 34th: <math.h> Special commants.

// Square root:         sqrt()
printf("%f", sqrt(16));     //4

// Round a number:      ceil() / floor()
printf("%f", ceil(1.4));    //2.000
printf("%f", floor(1.4));   //1.000

// Power:               pow()
printf("%f", pow(4, 2));    //16.000
*/

/* 35th: Files.
                        // Syntax (create) file):
FILE *fptr
fptr = fopen(filename, mode);
            // filename: the name of the file (filename.txt)
            // mode:
                // w: write
                // a: add new data to a file
                // r: read

                    // Example:
int main() {
    FILE *fptr;
    // Create a file
    fptr = fopen("filename.txt", "w");
    // Close the file
    fclose(fptr);
    return 0;
}
//Note: The file is created in the same directory as your other C files

// If you want on a specific folder
fptr = fopen("C:\directoryname\filename.txt", "w"a);
*/

/* 36th: Write Read files.
                        // Syntax (write file):
int main(){
    FILE *fptr;
    // Create the file
    fptr = fopen("filename.txt", "w");
    // Write on the file
    fprintf(fptr, "Some text");
    // Close the file
    fclose(fptr);

    return 0;
}
                        // Syntax (appent content to a file):
int main() {
    FILE *fptr;
    // Open a file in append mode
    fptr = fopen("filename.txt", "a");        // if the file doesnt exist the a will do the work of w and create a new file and write in it
    // Appent some text to the file
    fprintf(fptr, "\nHi everybody!");
    fclose(fptr);

    return 0;
}

                        // Syntax (read file):
int main() {
    FILE *fptr;
    // Open a file in read mode
    fptr = fopen("filename.txt", "r");
    // Store the content of the file
    char myString[100];
    // Read the content and store it inside myString
    fgets(myString, 100, fptr);
        // The first parameter specifies where to store the file content, which will be in the myString array we just created.
        // The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
        // The third parameter requires a file pointer that is used to read the file (fptr in our example).
    // Print the file content
    printf("%s", myString);
    // Close the file
    fclose(fptr);

    return 0;
}
// If you try to open a file for reading that does not exist, the fopen() function will return NULL.

                        // Example:
//Tip: As a good practice, we can use an if statement to test for NULL, and print some text when the file does not exist:
int main() {
    FILE *fptr;
    fptr = fopen("filename.txt", "r");
    char myString[100];
    // If the file exist
    if(fptr != NULL) {
      // Read the content and print it
        while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
        }
    // If the file does not exist
    } else {
        printf("Not able to open the file.");
    }
    // Close the file
    fclose(fptr);

    return 0;
}
*/

/* 37th: Structures.
// Create a structure called myStructure
struct myStructure {
    int myNum;
    char myLetter;
};
int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    // Print values
    printf("My letter: %c\n", s1.myLetter);
    printf("My number: %d\n", s1.myNum);

    return 0;
}

// Unfortunately, you can't assign a value to an array like this:
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];  // String
};
int main() {
    struct myStructure s1;
    // Trying to assign a value to the string
    s1.myString = "Some text";
    // Trying to print the value
    printf("My string: %s", s1.myString);

    return 0;
}

// However, there is a solution for this! You can use the strcpy() function and assign the value to s1.myString, like this:
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30]; // String
};
int main() {
    struct myStructure s1;
    // Assign a value to the string using the strcpy function
    strcpy(s1.myString, "Some text");
    // Print the value
    printf("My string: %s", s1.myString);

    return 0;
}

                        // Sympler syntax:
// Create a structure
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};
int main() {
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};
    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}
*/

/* 38th: Enums
// An enum is a special type that represents a group of constants
enum Level{
    LOW,        // default: 0
    MEDIUM,     // 1
    HIGH        // 2
};
int main() {
    // Create an enum variable and assign a value to it:
    enum Level myVar = MEDIUM;
    // Print the enum variable
    printf("$d", myVar);        // Output: 1

    return 0;
}

            // Change values:
// Example 1:
enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

printf("%d", myVar); // Now outputs 50
// Example 2:
enum Level {
    LOW = 5,
    MEDIUM, // Now 6
    HIGH // Now 7
};

                        // Enums in a switch statement:
enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
};
int main() {
    enum Level myVar = MEDIUM;
    switch (myVar) {
        case 1:
            printf("Low level.");
            break;
        case 2:
            printf("Medium level.");
            break;
        case 3:
            printf("High level.");
            break;
    }
    return 0;
}
// Enums are used to give names to constants, which makes the code easier to read and maintain.
// Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
*/

/* 39th: Memory example.

struct list {
  int *data; // Points to the memory where the list items are stored
  int numItems; // Indicates how many items are currently in the list
  int size; // Indicates how many items fit in the allocated memory
};

void addToList(struct list *myList, int item);

int main() {
    struct list myList;
    int amount;

    // Create a list and start with enough space for 10 items
    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    // Find out if memory allocation was successful
    if (myList.data == NULL) {
        printf("Memory allocation failed");
        return 1; // Exit the program with an error code
    }

    // Add any number of items to the list specified by the amount variable
    amount = 44;
    for (int i = 0; i < amount; i++) {
        addToList(&myList, i + 1);
    }

    // Display the contents of the list
    for (int j = 0; j < myList.numItems; j++) {
        printf("%d ", myList.data[j]);
    }

    // Free the memory when it is no longer needed
    free(myList.data);
    myList.data = NULL;

    return 0;
    }

// This function adds an item to a list
void addToList(struct list *myList, int item) {

  // If the list is full then resize the memory to fit 10 more items
    if (myList->numItems == myList->size) {
        myList->size += 10;
        myList->data = realloc( myList->data, myList->size * sizeof(int) );
    }

    // Add the item to the end of the list
    myList->data[myList->numItems] = item;
    myList->numItems++;
}
*/
