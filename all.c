// //write a  program to print Hello World.

// #include<stdio.h>
// void main(){
//      printf("hello world");
// }

// // write a program to swap two numbers
// //  i) with using third variable
// //  ii) witlh using same variable

// #include<stdio.h>
// void main(){
//     int a,b;
//     printf("enter two numbers:");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d",a);
//     printf("%d",b);
// }

// #include<stdio.h>
// void main(){
//     int a,b,temp;
//     printf("enter two numbers:");
//     scanf("%d%d",&a,&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d",a);
//     printf("%d",b);
// }

// //3.write a program to convert the celcius to farheight and vice versa.

// #include<stdio.h>
// void main(){
//     float celcius,farheight;
//     char choice;
//     printf("Enter your choice:");
//     scanf("%c",&choice);

//     switch(choice){
//         case 'c':
//         printf("enter the value of temp in farheight:");
//         scanf("%f",&farheight);
//         celcius = (farheight - 32)/1.8;
//         printf("\ncelcius temperature=%f",celcius);
//         break;
//         case 'f':
//         printf("enter the value of temp in celcius:");
//         scanf("%f",&celcius);
//         farheight = (1.8*celcius)+32;
//         printf("\nfarheight temperature=%f",farheight);
//         break;
//         default: printf("invalid temperature");
//     }
//     return 0;
//     }

// //write a program to calculate the  simple and compount interest

// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     float ci, si, p, t, r;
//     char choice;
//     printf("Enter the value of your choice:");
//     scanf("%c", &choice);
//     printf("enter the data:\n");

//     switch (choice)
//     {

//     case 's':
//         printf("Eter principle,time and rate of return:");
//         scanf("%f%f%f", &p, &t, &r);
//         si = p * t * r / 100;
//         printf("\ncompount interest=%f", ci);
//         break;
//     case 'c':
//         printf("Eter principle,time and rate of return:");
//         scanf("%f%f%f", &p, &t, &r);
//         ci = p * pow((1 + r / 100), t);
//         printf("\ncompount interest=%f", ci);
//         break;
//     default:
//         printf("invalid choice");
//     }
//     return 0;
// }

// // write a program to calculate the following:
// // i)square
// // ii)rectangle
// // iii)triangle

// #include <stdio.h>
// #include <math.h>
// void main(){
//     int a_square,a_rectangle,a_triangle,b,h;
//     char choice;
//     printf("Enter your choice:");
//     scanf("%c",&choice);

//     switch(choice){
//         case 's':
//          printf("enter the side length:");
//          scanf("%d",&b);
//          a_square =b*b;
//         printf("area of square",a_square);

//         break;
//         case 'r':
//          printf("enter the height  and width of the triangle");
//         scanf("%d%d",&b,&h);
//          a_rectangle = b*h;
//         printf("area of rectangle",a_rectangle);
//         break;
//         case 't':
//         printf("enter the height  and width of the triangle:");
//         scanf("%d%d",&b,&h);
//         a_triangle = b*h/2;
//         printf("\n area of triangle=%d",a_triangle);
//         break;
//         default: printf("invalid choice");
//     }
//     return 0;
//     }

// //write a program to the find the maximum of three numbers

// #include<stdio.h>

// int main(){
//     int num1, num2, num3;
//     printf("enter three number:");
//     scanf("%d%d%d",&num1,&num2,&num3);

//     if (num1>num2&&num1>num3)
//     {
//         printf("%d is maximum",num1);
//     }
//     else if (num2>num3){
//         printf("%d is maximum",num2);
//     }
//     else{
//         printf("%d is maximum",num3);
//     }
// }

// //write a program to the to find the given number is odd or even.

// #include<stdio.h>

// int main(){
//     int num;
//     printf("enter a number:");
//     scanf("%d",&num);

//     if (num%2==0){
//         printf("%d is even",num);
//     }
//     else{
//         printf("%d is odd",num);
//     }
// }

// //write a program to the to find the given number is positeve,negative or zero.

// #include <stdio.h>

// int main(){
//     int num;
//     printf("enter a number:");
//     scanf("%d",&num);

//     if (num>0){
//         printf("%d is positive",num);
//     }
//     else if(num<0){
//         printf("%d is negative",num);
//     }
//     else{
//         printf("%d is zero",num);
//     }

//     return 0;
// }

// // 9. A commueter munufacturing company has the following monthly compensation policy to their sales person,
// // i) minimum base salary : 1500
// // ii) bonus for every computer sold : 200 commission on total monthly sale : 2%

// // since the prices of computers are chaging the sales prices of each computer is fixed at the bigining of every month. where a program to compute sales person gross salary.

// // Hint. Gross salary = base + (quatity*bonus rate)+ (quantity * price)*commission rate.

// #include <stdio.h>
// void main(){
//     float quantity, price,gross,base,bonus;
//     printf("enter the quantity and price of computer:");
//     scanf("%f%f", &quantity, &price);
//     base = 1500;
//     bonus = 200;
//     gross = base + (quantity * bonus) + (quantity * price)*2/100;

//     printf("Gross salary=%f", gross);
//     return 0;

// }

// // 10) write a program to find  the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.

// #include <stdio.h>
// void main(){
//     int i,sum=0;
//     for(i=100;i<200;i++){
//         if(i%7==0){
//             sum=sum+i;
//         }
//     }
//     printf("\nsum=%d",sum);
//     return 0;
// }

// //11.) write a program to print the floyd triangle.

// #include <stdio.h>
// void main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for(k=5;k>=1;k--){
//         for(j=1;j<=k;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // practical
// // 1)wap to  cheak the pallindrome number

// #include <stdio.h>
// void main(){
//     int num,r,sum=0,orginal;
//     printf("enter any number");
//     scanf("%d",&num);
//     orginal=num;
//     while(num>0){
//         r = num%10;
//         sum = (sum*10) +r;
//         num = num/10;
// }
// if(orginal==sum){
//     printf("number is paliindrome");
// }
// else{
//     printf("number is not paliindrome");
// }
// }


// // 2) wap to find the sum ot digits of given number

// #include <stdio.h>
// void main(){
//     int num ,r,sum=0;
//     printf("enter any number:");
//     scanf("%d",&num);
//     while(num>0){
//         r = num%10;
//         sum +=r;
//         num = num/10;
// }
// printf("Sum of digit = %d\n",sum);

// }

// //Armstrong number
// #include <stdio.h>
// void main(){
//     int num,r ,arm=0,orginal;
//     printf("enter any number:");
//     scanf("%d",&num);
//     orginal= num;
//     while(num>0){
//         r = num%10;
//         arm = arm+(r*r*r);
//         num = num/10;
// }
// if(orginal==arm){
//     printf("The number is armstrong\n");
// }
// else{
//     printf("The number is not armstrong");
// }
// }

// //3) fibonacci number
// #include <stdio.h>
// void main() {
//     int num1, num2, num3, term;
//     printf("Enter the number of terms: ");
//     scanf("%d", &term);
//     num1 = 0;
//     num2 = 1;
//     printf("%d\t%d\t", num1, num2);
//     for (int i = 2; i < term; i++) {
//         num3 = num1 + num2;
//         printf("%d\t", num3);
//         num1 = num2;
//         num2 = num3;
       
//     }
// }

// // 5) wap to find the factoria of number
// #include <stdio.h>
// void main(){
//     int num,factorial=1;
//     printf("enter any number:");
//     scanf("%d",&num);
//     for(int i = num; i > 0; i--){
//         factorial = factorial*i;
// }
// printf("%d! = %d\n",num,factorial);
// }

// // practice
// // 6) wap to find the factorial of number
// // 7) wap to check given number is prime or not
// #include <stdio.h>
// void main(){
//     int num,count=0;
//     printf("enter any number:");
//     scanf("%d",&num);
//     for(int i = 1; i <= num; i++){
//         if(num%i==0){
//             count ++;
//         }
//     }
//     if(count==2){
//         printf("%d is prime number",num);
//     }
//     else{
//         printf("%d is not prime number",num);
//     }

// // }
// // 8) write a mean driven program for calculate the  following
// // a) add
// // b) subtract
// // c) multiply
// // d) divide
// // e) modulo
// //   using switch

// #include<stdio.h>
// void main(){
//     int a,b,sum,sub,div,mod,mul;
//     char choice;
//     printf("enter your choice:");
//     scanf("%c",&choice);
//     printf("enter two numbers:");
//     scanf("%d%d",&a,&b);
//     switch(choice){
//     {
//     case 'a':
//          sum = a+b;
//         printf("sum = %d",sum);
//         break;
//     case 's':
//          sub = a-b;
//         printf("subtraction = %d",sub);
//         break;
//     case 'm':
//          mul = a*b;
//         printf("multiply = %d",mul);
//         break;
//     case 'd':
//          div = a/b;
//         printf("division = %d",div);
//         break;
//     case 'o':
//          mod = a%b;
//         printf("mode = %d",mod);
//         break;
//     default:  printf("invalid choice");

//     }

// }
// }
// // string
// // 1) wap that reads the word by word and increments a cauntee each time until the string exit is entered
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     int count = 0;
//     printf("enter the string:");
//     while( strcmp(str , 'exit'))
//     {
//         scanf("%s", str);
//         printf("%d", count);
//         count++;
//     }
//     return 0;
// }

// // product of a matrix
// #include<stdio.h>
// void main(){
//     int i,j,row,col;
//     int matA[10][10],matB[10][10],matC[10][10];
//     printf("enter the row and column of the matrix: ");
//     scanf("%d%d",&row,&col);
//     printf("enter the element of the matrix A: ");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             scanf("%d",&matA[i][j]);
//         }

// }
//     printf("enter the element of the matrix B: ");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             scanf("%d",&matB[i][j]);
//         }

// }

// for(j=0;j<row;j++){
//     for(j=0;j<col;j++){
//         matC[i][j] = matA[i][j]+matB[i][j];
//     }
// }
// printf("Product of matrix is:\n");
// for(i=0;i<row;i++){
//     for(j=0;j<col;j++){
//         printf("%3d",matC[i][j]);
//     }
//     printf("\n");
// }
// }

// // Transpose the matrix
// #include <stdio.h>
// int main() {
//   int i,j,a[10][10], transpose[10][10], r, c;
//   printf("Enter rows and columns: ");
//   scanf("%d %d", &r, &c);

//   // asssigning elements to the matrix
//   printf("\nEnter matrix elements:\n");
//   for (i = 0; i < r; ++i){
//   for (j = 0; j < c; ++j) {
//     scanf("%d", &a[i][j]);
//   }
// }
//   // printing the matrix a[][]
//   printf("\nEntered matrix: \n");
//   for (i = 0; i < r; ++i){
//   for (j = 0; j < c; ++j) {
//     printf("%d  ", a[i][j]);

//   }
//   printf("\n");
// }
//   // computing the transpose
//   for (i = 0; i < r; ++i){
//   for (j = 0; j < c; ++j) {
//     transpose[j][i] = a[i][j];
//     printf("\nTranspose of the matrix:\n");
//   for (i = 0; i < c; ++i){
//   for (j = 0; j < r; ++j) {
//     printf("%d  ", transpose[i][j]);
//   }
//   printf("\n");
//   }
//   return 0;
// }
//   }
// }

// // C Program to Print Prime Numbers From 1 to 100
// #include <stdio.h>
// int main(){
//     int i, num, count;

//     // Checking for prime numbers
//     for (num = 1; num <= 100; num++){
//         count = 0;
//         for (i = 2; i <= num/2; i++){
//             if (num % i == 0){
//                 count++;
//                 break;
//             }
//         }

//         // Checking and Printing Prime Numbers
//         if (count == 0 && num != 1){
//             printf("%d \n", num);

//     }
//     }
//     return 0;
//     }

// // write a program to read an array and print the sum of elements of array
// #include <stdio.h>
// void main(){
//     int n, sum = 0;
//     printf("enter the no of elements:\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements of the array:\n");
//     for(int i = 0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//     printf("sum = %d",sum);
//     return 0;

// }

// // write a program to  find the sum of even and odd elements in the array of integers

// #include <stdio.h>
// void main(){
//     int n, sum_even = 0, sum_odd = 0;
//     printf("enter the size of the array of integers:\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the element of the array of integers:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             sum_even += arr[i];
//         }
//         else{
//             sum_odd += arr[i];
//         }
//  }
//  printf("sum of even elements = %d\n",sum_even);
//  printf("sum of odd elements = %d",sum_odd);

// }

// //  write a program to find the sum of even and odd index elements in the array of integers

// #include <stdio.h>
// void main()
// {
//     int n, sum_even = 0, sum_odd = 0;
//     printf("enter the size of the array of integers:\n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i)
//     {
//         if (i % 2 == 0)
//         {
//             sum_even += arr[i];
//         }
//         else
//         {
//             sum_odd += arr[i];
//         }
//     }
//     printf("sum of even elements = %d\n", sum_even);
//     printf("sum of odd elements = %d", sum_odd);
// }

// // write a program to multiply two matrix

// #include <stdio.h>
// void main()
// {
//     int row, col, i, j, matA[10][10], matB[10][10], matC[10][10];
//     printf("enter the row and column matrices\n");
//     scanf("%d%d", &row, &col);
//     printf("Enter the elements of first matrix:\n");
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &matA[i][j]);
//         }
//     }
//     printf("enter the element of second matrix:\n");
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &matB[i][j]);
//         }
//     }
//     for (i = 0; i < row; i++){
//         for(j=0; j < col; j++){
//             matC[i][j] = 0;
//             matC[i][j] = matA[i][j]*matB[i][j];
//         }
//     }
//     printf("multiplication of matrices\n");
//     for(i=0; i <row; i++){
//         for(j=0; j<col; j++){
//             printf("%3d",matC[i][j]);
//         }
//         printf("\n");
//     }
// }

// // define a stucture data type callded times_struct counting their m members integer haour, integer minutes, integer seconds. develop a C program that would assign valuues  to individual members and display the time in the following format:- 16:40:51

// #include <stdio.h>
// struct time{
//         int hour;
//         int minute;
//         int second;
//     };
// void main(){
//     struct time timer;
//     printf("Enter the time you want to display:\n");
//     scanf("%d%d%d", &timer.hour,&timer.minute,&timer.second);
//     printf("............time...........\n");
//     printf("%d:%d:%d",timer.hour,timer.minute,timer.second);
 
// }

// // C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers.
// #include <stdio.h>
// int checkPrime(int n);
// int main() {
//   int n, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   for (i = 2; i <= n / 2; ++i) {
//     // condition for i to be a prime number
//     if (checkPrime(i) == 1) {
//       // condition for n-i to be a prime number
//       if (checkPrime(n - i) == 1) {
//         printf("%d = %d + %d\n", n, i, n - i);
//         flag = 1;
//       }
//     }
//   }

//   if (flag == 0)
//     printf("%d cannot be expressed as the sum of two prime numbers.", n);

//   return 0;
// }

// //function to check prime number
// int checkPrime(int n) {
//   int i, isPrime = 1;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     isPrime = 0;
//   }
//   else {
//     for(i = 2; i <= n/2; ++i) {
//       if(n % i == 0) {
//         isPrime = 0;
//         break;
//       }
//     }
//   }

//   return isPrime;
// }


// // write a c program to calculate the factorial of given number using recursive function.
// #include<stdio.h>
// int factorial(int num);
// void main(){
//   int num;
//   printf("enter any number:\n");
//   scanf("%d", &num);
//   // int fact = factorial(num);
//   printf("factorial of %d = %1d\n", num, factorial(num));
//   return 0;
// }

//  int factorial(int num){
//   if(num==0){
//     return 1;
//   }
//   else{
//   return (num*factorial(num-1));
//   }
// }


// //Wap to print the fibonacci series of numbers using recursive function.

// #include <stdio.h>
// int fibonacci(int num){
//   if(num==0 || num==1){
//     return num;
//   }
//   else{
//     return fibonacci(num-1)+fibonacci(num-2);
//   }
// }

// int main(){
//   int num;
//   printf("enter the number of terms:\n");
//   scanf("%d", &num);
//   for(int i = 0; i < num; i++){
//   printf("%d\t",fibonacci(i));
//   }
//   return 0; 
// }

// //1. write a program to demonstrate the use of array in structure.
// #include <stdio.h>
// struct array{
//   int arr[10];
// };
// int main(){
//     struct array array[10];
//     printf("enter the elements in array:\n");
//     for(int i =0; i < 10; i++){
//         scanf("%d",&array[i].arr[i]);
//     }
//   for(int i = 0; i < 10; i++){
//       printf("%d\n",array[i].arr[i]);
//   }
//     return 0;
// }

// //write a c program to find the length of the string using recursion.

// #include <stdio.h>
// int length(char *str) {
//     if (str[0] == '\0') {
//         return 0;
//     } else {
//         return 1 + length(str + 1);
//     }
// }

// int main() {
//     char str[100];
//     printf("Enter the string:\n");
//     scanf("%s", str);  
//     int len = length(str);
//     printf("Length of the string = %d\n", len);
//     return 0;
// }


// //2. write a c program to reverse the string using recursion.

// #include <stdio.h>

// void reverse(char *str) {
//     if (*str) {
//         reverse(str + 1);
//         printf("%c", *str); 
//     }
// }

// int main() {
//     char a[10];
//     printf("Enter the string:\n");
//         scanf("%s", a);
//     reverse(a);
//     return 0;
// }
// //  Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks
// #include<stdio.h>
// struct student{
//     char name[50];
//     int age;
//     int tMarks;
    
// };
// int main(){
//     struct student s[100];
//     int noOfStudents;
//     printf("enter the number of students:\n");
//     scanf("%d", &noOfStudents);
//     for(int i = 0; i<noOfStudents; i++){
//          printf("enter the Name Age and Marks of the students %d:",i+1);
//          scanf("%s%d%d",s[i].name,&s[i].age,&s[i].tMarks);
//     }
    
//     printf("Name\t Age\t Total marks\n");
//     for(int i = 0; i<noOfStudents; i++){
//     printf("%s\t%d\t%d\n",s[i].name, s[i].age, s[i].tMarks);
//     }
// }

// w//rite a program to implement the linear search.
// #include<stdio.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//      printf("enter the element to be searched:\n");
//         int x;
//         scanf("%d", &x);
//         int flag = 0;
//     for(int i = 0; i<10; i++){
//         for(int j = 0; j<10; j++){
//             if(arr[j] == x){
//                 flag = 1;
//                 break;
//             }
//         }
//          }
//         if(flag == 0){
//             printf("element not found\n");
//         }
//         else{
//             printf("element found\n");
//         }
   
//      return 0;
// }

// //write a C program to implement binary search.
// #include <stdio.h>
// int binarySearch(int array[], int x, int low, int high) {
//   while (low <= high) {
//     int mid = low + (high - low) / 2;

//     if (array[mid] == x)
//       return mid;

//     if (array[mid] < x)
//       low = mid + 1;

//     else
//       high = mid - 1;
//   }

//   return -1;
// }

// int main(void) {
//   int array[] = {3, 4, 5, 6, 7, 8, 9};
//   int n = sizeof(array) / sizeof(array[0]);
//   int x; 
//   printf("Enter the element to be searched:\n");
//   scanf("%d", &x);
//   int result = binarySearch(array, x, 0, n - 1);
//   if (result == -1)
//     printf("Not found");
//   else
//     printf("Element is found at index %d", result);
//   return 0;
// }
// //write a C program to implement bubble    .
// #include <stdio.h>
// void swap(int* arr, int i, int j)
// {
// 	int temp = arr[i];
// 	arr[i] = arr[j];
// 	arr[j] = temp;
// }

// void bubbleSort(int arr[], int n)
// {
// 	int i, j;
// 	for (i = 0; i < n - 1; i++)
// 		for (j = 0; j < n - i - 1; j++)
// 			if (arr[j] > arr[j + 1]){
// 				swap(arr, j, j+1);
//             }
// }

// void printArray(int arr[], int size)
// {
// 	int i;
// 	for (i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// }
// int main()
// {
// 	int arr[] = { 5, 1, 4, 2, 8 };
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	bubbleSort(arr, N);
// 	printf("Sorted array: ");
// 	printArray(arr, N);
// 	return 0;
// }



// // write a program to implement the insertion sort
// // C program for insertion sort
// #include <math.h>
// #include <stdio.h>
// void insertionSort(int arr[], int n)
// {
// 	int i, key, j;
// 	for (i = 1; i < n; i++) 
// 	{
// 		key = arr[i];
// 		j = i - 1;
// 		while (j >= 0 && arr[j] > key) 
// 		{
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}
// }
// void printArray(int arr[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		printf("%d ", arr[i]);
// 	    printf("\t");
// }

// int main()
// {
// 	int arr[] = {12, 11, 13, 5, 6};
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	insertionSort(arr, n);
// 	printArray(arr, n);

// 	return 0;
// }


// //C program for implementation of selection sort 
// #include <stdio.h> 

// void swap(int* x, int* y) 
// { 
// 	int temp = *x; 
// 	*x = *y; 
// 	*y = temp; 
// } 

// void selectionSort(int arr[], int n) 
// { 
// 	int i, j, min_idx; 
// 	for (i = 0; i < n - 1; i++) { 
 
// 		min_idx = i; 
// 		for (j = i + 1; j < n; j++) 
// 			if (arr[j] < arr[min_idx]) 
// 				min_idx = j;
// 		swap(&arr[min_idx], &arr[i]); 
// 	} 
// } 

// void printArray(int arr[], int size) 
// { 
// 	int i; 
// 	for (i = 0; i < size; i++) 
// 		printf("%d ", arr[i]); 
// 	printf("\n"); 
// } 
 
// int main() 
// { 
// 	int arr[] = { 64, 25, 12, 22, 11 }; 
// 	int n = sizeof(arr) / sizeof(arr[0]); 
// 	selectionSort(arr, n); 
// 	printf("Sorted array: \n"); 
// 	printArray(arr, n); 
// 	return 0; 
// }

// // bill problem in c.
// #include <stdio.h>

// int main(){
//     float  units,payment;
//     printf("Enter Your Units:");
//     scanf("%f", &units);
    
//     if(units < 199){
//         payment = units * 1.2;
//         if(payment <= 100){
//             printf("Your Bill Amount = 100");
            
//         }
//         else{
//          printf("Your Bill Amount = %f", payment);
//         }
//     }
    
//     else if(units >= 200 && units <= 400){
//        payment = units * 1.5; 
//        printf("Your Bill Amount = %f", payment);
//     }
//     else if(units >= 400 && units <= 600){
//        payment = units * 1.8; 
//        printf("Your Bill Amount = %f", payment);
//     }
//     else{
//         payment = units * 2.0; 
//         printf("Your Bill Amount = %f", payment);
//     }
    
// }

// //seling product problem

// #include<stdio.h>
// int main(){
//     float purchase_amount, payable_amount;
//     printf("Enter Initial Amount:");
//     scanf("%f", &purchase_amount);

//  if(purchase_amount >= 8000){
//         payable_amount = purchase_amount - (purchase_amount*10/100);
//         printf("Payable Amount = %f", payable_amount);
//     }

//     else if(purchase_amount <= 8000 && purchase_amount >= 5000){
//         payable_amount = purchase_amount - (purchase_amount*8/100);
//         printf("Payable Amount = %f", payable_amount);
//     }

//     else if(purchase_amount <= 5000 && purchase_amount >= 1000){
//         payable_amount = purchase_amount - (purchase_amount*4/100);
//         printf("Payable Amount = %f", payable_amount);
//     }

//     else{
//         payable_amount = purchase_amount - 100;
//         printf("Payable Amount = %f", payable_amount);
//     }
// }

// //WAP to find the lenght of sting using pointer.

// #include<stdio.h>
 
// int lengthOfString(char* string){
//     int length = 0;
//     while(*string != '\0'){
//         length++;
//         string++;
//     }
//     return length;
// }

// int main(){
//     char string[] = "RisabKshetri";
//     int result = lengthOfString(string);
//     printf("Length of String = %d", result);
//     return 0;
// }

// //WAP to display the element of array using calloc() function.
// #include<stdio.h>
// #include<stdlib.h>
//  int main(){
//     int i,n;
//     int *array;
//     printf("Enter the number of Element: ");
//     scanf("%d", &n);
//     array = (int*) calloc(n,sizeof(int));
//      if(array == NULL){
//         printf("Error !");
//     }
//     else{
//     printf("Enter %d Elements : \n", n);
//     for(i = 0; i<n; i++){
//         scanf("%d", &array[i]);
//     }
//     printf("Element are : \n");
//     for(i = 0; i<n; i++){
//         printf("%d \t", array[i]);
//     }
//     }
//     return 0;
//  }

// //WAP to display the content in file. 
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//    char content[1000];
//    FILE *fptr;

   
//    fptr = fopen("myfile.txt","w");

//    if(fptr == NULL)
//    {
//       printf("Error!");   
//       exit(1);             
//    }

//    printf("Enter Your Content: ");
//    scanf("%[^\n]s",content);

 
//    fprintf(fptr,"%s",content);
//    fclose(fptr);

//    return 0;
// }

// //Write a C program to copy the contents of one file to another.
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *sourceFile, *destFile;
//     char srcFile[100], destFile[100], c;
//     printf("Enter sourse filename : \n");
//     scanf("%s", srcFile);
//     printf("Enter destination filename : \n");
//     scanf("%s", destFile);

//     // Open the source file in read mode
//      sourceFile = fopen(srcFile, "r");
//     if (sourceFile == NULL) {
//         printf("Cannot open source file.\n");
//         exit(0);
//     }

//     // Open the destination file in write mode
//     destFile = fopen(destFile, "w");
//     if (destFile == NULL) {
//         fclose(sourceFile);
//         printf("Cannot open destination file.\n");
//         exit(0);
//     }

//     // Read contents from source file and write to destination file
 
//     while ((c = fgetc(sourceFile)) != EOF){
//         fputc(c, destFile);
//     }
//         printf("Contents copied to destination file.\n");

//     // Close the files
//     fclose(sourceFile);
//     fclose(destFile);
//     return 0;
// }

// //Write a C program to merge two files into a third file.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *sourceFile1, *sourceFile2, *destFile;
//     char sourcePath1[100], sourcePath2[100], destPath[100];
//     char ch;

//     printf("Enter first source file path: ");
//     scanf("%s", sourcePath1);
//     printf("Enter second source file path: ");
//     scanf("%s", sourcePath2);
//     printf("Enter destination file path: ");
//     scanf("%s", destPath);

//     sourceFile1 = fopen(sourcePath1, "r");
//     sourceFile2 = fopen(sourcePath2, "r");
//     destFile    = fopen(destPath,    "w");

//     if (sourceFile1 == NULL || sourceFile2 == NULL || destFile == NULL)
//     {
//         printf("\nUnable to open file.\n");
//         printf("Please check if file exists and you have read/write privilege.\n");

//         exit(EXIT_FAILURE);
//     }


   
//     while ((ch = fgetc(sourceFile1)) != EOF)
//         fputc(ch, destFile);

//     while ((ch = fgetc(sourceFile2)) != EOF)
//         fputc(ch, destFile);

//     printf("\nFiles merged successfully to '%s'.\n", destPath);

//     fclose(sourceFile1);
//     fclose(sourceFile2);
//     fclose(destFile);

//     return 0;
// }

// //Write a C program to reverse the first n characters in a file.
//  #include <stdio.h>
// #include <stdlib.h>

// void reverseFirstNChars(const char* filename, int n) {
//     FILE *file = fopen(filename, "r+");
//     if (file == NULL) {
//         printf("Error opening file");
//         exit(0);
//     }

//     char *buffer = (char *)malloc(n * sizeof(char));
//     if (buffer == NULL) {
//         printf("Memory error");
//         fclose(file);
//        exit(1);
//     }

//     // Read the first n characters
//     if (fread(buffer, sizeof(char), n, file) != n) {
//        printf("Error reading file");
//         free(buffer);
//         fclose(file);
//         exit(0);
//     }

//     // Reverse the buffer
//     for (int i = 0; i < n / 2; i++) {
//         char temp = buffer[i];
//         buffer[i] = buffer[n - i - 1];
//         buffer[n - i - 1] = temp;
//     }

//     // Move the file pointer back to the start
//     fseek(file, 0, SEEK_SET);

//     // Write the reversed buffer back to the file
//     if (fwrite(buffer, sizeof(char), n, file) != n) {
//         printf("Error writing to file");
//         exit(0);
//     }

//     // Clean up
//     free(buffer);
//     fclose(file);
// }

// int main() {
//     const char* filename = "myfile.txt";
//     int n = 10; // Replace with the number of characters you want to reverse

//     reverseFirstNChars(filename, n);

//     return 0;
// }

// //check prime number usins recurion in c.

// #include<stdio.h> 
// int CheckPrime(int i,int num){
//     if(num==i){
//         return 0;
//     }
//     else{
//         if(num%i==0){
//             return 1;
//    }else{
//         return CheckPrime(i-1,num);
//     }
//  }
// }
// int main(){
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int result = CheckPrime(2,num);
//     if(result==0){
//         printf("%d is a Prime Number.", num);
//     }
//     else{
//         printf("%d is not a Prime Number.", num);
//     }
// }

// //pattern printing in C.
// #include<stdio.h>
// int main(){
//     int i,j,row;
//     printf("Enter no of row :");
//     scanf("%d",&row);

//     for(i=row;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// // here increment in loop increases the value only once on a iteration is completed.
//     return 0;
// }


// //progran to use the string function
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[100], str2[100];
//     printf("Enter string first : ");
//     scanf("%s",str1);
//     printf("Enter string second : ");
//     scanf("%s",str2);
//     if(strcmp(str1,str2)== 0){
//         printf("%s is equal to %s",str1,str2);   
//     }
//     else{
//         printf("%s is not equal to %s\n",str1,str2);
//         printf("combined String = %s\n",strcat(str1,str2));
//         printf("length of combined String = %d\n",strlen(strcat(str1,str2)));
//         printf("%s\n",str1);
//         printf("copied String = %s\n",strcpy(str2,str1));
//         printf("%s\n", str1);
//         printf("%s\n", str2); 
//         printf("%s\n", strrev(str1));
       
//     }

// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char ch;
//     FILE *fptr1, *fptr2, *fptr3;
//     fptr1 = fopen("myfile.txt", "r");
//     if(fptr1 == NULL){
//         printf("Error !\n");
//         exit(1);
//     }
//    fptr2 = fopen("destination.txt", "r");
//    if(fptr2 == NULL){
//     printf("Error !\n");
//     exit(1);
//    }
//    fptr3 = fopen("dest.txt", "w");
//    if(fptr2 == NULL){
//     printf("Error !\n");
//     exit(1);
//    }

//    while((ch = fgetc(fptr1)) !=EOF){
//     fputc(ch, fptr3);
//    }
//    while((ch = f kgetc(fptr2)) !=EOF){
//     fputc(ch, fptr3);
//    }
//    printf("content is copied successfully\n");
// }