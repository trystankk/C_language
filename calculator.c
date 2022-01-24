#include <stdio.h>
#include <conio.h>

int main() {
  char menu;
  
  //display functions menu selection
  printf("\n\nA) Addition 2 number");
  printf("\n\nB) Devide 2 number");
  printf("\n\nC) Multiply 2 number");
  printf("\n\nD) Modulus 2 number");
  printf("\n\nE) Decimal to Binary");
  printf("\n\nF) Decimal to Octal");
  printf("\n\nG) Decimal to Hexadecimal");
  
  //Prompt user input character A to G
  printf("\n\nPlease enter your selection [A,B,C,D,E,F,G]: ");
  scanf("%c", &menu);
 
 //declare  and initialise working storage
 int num01 = 0;         // hold user input
 int num02 = 0;         // hold user input
 int additionAns = 0;   // hold the total answer with numbers
 int devideAns = 0;     // hold the answer of Devide
 int multiplyAns = 0;   // hold the answer of Multiply 
 int modulusAns = 0;    // hold the answer of Modulus
 int decimalNum = 0;    // hold the decimal numbers and user input
 long binaryNum = 0;    // hold the number of Binary
 int remainNum = 0;     // hold the number of remainder
 int mainNum = 1;       // hold the number of main as 1
 int octalNum = 0;      // hold the number of Octal
 char hexaNum[50];      // hold the characters for Hexadecimal with array
 int i = 0;             // hold an'i' value to use later in array
 
 
  switch(menu)
  {
        case 'A': case'a':        // case select by character
      
                // Prompt user input 2 numbers
                printf("\n\nPlease enter first number (Only Positive digits): ");
                scanf("%d", &num01);
                printf("\n\nPlease enter second number (Only Positive digits) : ");
                scanf("%d", &num02);
                additionAns = num01 + num02;      // Addition formula with 2 number
                  
                // Print the result
                printf("\n\n%d + %d is equal to %d", num01, num02, additionAns);
                break;
      
        case 'B': case 'b':       // case select by character

                // Prompt user input 2 numbers
                printf("\n\nPlease enter first number (Large numbers & Positive digits): ");
                scanf("%d", &num01);
                printf("\n\nPlease enter second number (Small numbers & Positive digits) : ");
                scanf("%d", &num02);
                devideAns = num01 / num02;      // Devide formula with 2 number
            
                // Print the result
                printf("\n\n%d / %d is equal to %d", num01, num02, devideAns);
                break;
    
        
        case 'C': case 'c':     //case select by character
    
                // Prompt user input 2 numbers
                printf("\n\nPlease enter first number (Only Positive digits) : ");
                scanf("%d", &num01);
                printf("\n\nPlease enter second number (Only Positive digits) : ");
                scanf("%d", &num02);
                multiplyAns = num01 * num02;        // Multiply formula with two number
        
                // Print the result
                printf("\n\n%d / %d is equal to %d", num01, num02, multiplyAns);
                break;
      
      
        case 'D': case 'd':     //case select by character
    
                // Prompt user input 2 numbers
                printf("\n\nPlease enter first number (Large numbers & Positive digits): ");
                scanf("%d", &num01);
                printf("\n\nPlease enter second number (Small numbers & Positive digits) : ");
                scanf("%d", &num02);
                modulusAns = num01 % num02;        // modular formula with two number
        
                // Print the result
                printf("\n\n%d / %d is equal to %d", num01, num02, modulusAns);
                break;
                
        case 'E': case 'e':     //case select by character
   
                // Prompt user input decimal numbers
                printf("\n\nPlease enter Decimal number : ");
                scanf("%d", &decimalNum);

                // compute the require result
                while(decimalNum != 0)                  //while loop with condition to hold the decimal number to input
                {
                    remainNum = decimalNum % 2;         //compute remainder by decimal modular with 2
                    binaryNum = binaryNum + remainNum * mainNum; //compute to get binary number by using binary number + the remaining number * temporary number
                    mainNum = mainNum * 10;             //use temporary number * 10
                    decimalNum = decimalNum / 2;        //get the decimal number devide by 2
                }
                
                // Print the result
                printf("\n\nDecimal is equivalent to %ld Binary", binaryNum);
                break;
                
        case 'F': case 'f':     //case select by character
   
                // Prompt user input decimal numbers
                printf("\n\nPlease enter Decimal number : ");
                scanf("%d", &decimalNum);

                // compute the require result
                while(decimalNum != 0)                  //while loop with condition to hold the decimal number to input
                {
                    remainNum = decimalNum % 8;         //use remaining number % by 8bits
                    octalNum = octalNum + remainNum * mainNum;  //compute to get octal number by using octal number + the remaining number * temporary number
                    mainNum = mainNum * 10;             //get the temporary number (mainNum) * 10
                    decimalNum = decimalNum / 8;        //get decimalNum devide by 8
                }
                
                // Print the result
                printf("\n\nDecimal is equivalent to %d Octal", octalNum);
                break;        
                
        case 'G': case 'g':     //case select by character
   
                // Prompt user input decimal numbers
                printf("\n\nPlease enter Decimal number : ");
                scanf("%d", &decimalNum);

                // compute the require result
                while(decimalNum != 0)                  //while loop with condition to hold the decimal number to input
                {
                    remainNum = decimalNum % 16;        //decimal number % 16 to get remainNum
                    if(remainNum < 10)                  //if statement to check remainNum if less than 10
                        remainNum = remainNum+48;       //get the remainNum to add 48 if remainNum is less than 10
                    else                                    
                        remainNum = remainNum+55;       //if remainNum not less than 10, add 55    
                    hexaNum[i] = remainNum;             //final remainNum value initialise to hexaNum[i] as the initial value
                    i++;                                //'i' value increase 1
                    decimalNum = decimalNum / 16;       //decimal number /16 for the decimalNum
                }  
                // Print the result
                 printf("\n\nDecimal is equivalent to ");   
                   for(i=i-1; i>=0; i--)                //for loop to run 'i' value to 0
                    printf("%c", hexaNum[i]);           
                break;        
  
  return 0;
  }
}
