#include <stdio.h>
#include <math.h>
#include <ctype.h>
void tri();
void c2f();
void SI();
void circ();
void marks();
void rect();
void cyl();
void compI();
void bank();
void voting();
void vow();
void leap();
void weight();
void tax();
void itemd();
void car_rental();
void npz();
void old();
void ebill();

int main() {
    int x;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Calculate the area of a triangle\n");
        printf("2. Convert Celsius to Fahrenheit\n");
        printf("3. Calculate Simple Interest\n");
        printf("4. Calculate the area of a circle and cylinder\n");
        printf("5. Calculate total marks, average, and percentage\n");
        printf("6. Calculate the perimeter of a rectangle\n");
        printf("7. Calculate the volume of a cylinder\n");
        printf("8. Calculate Compound Interest\n");
        printf("9. Bank operations\n");
        printf("10. Voting eligibility\n");
        printf("11. Vowel check\n");
        printf("12. Leap year check\n");
        printf("13. BMI calculation\n");
        printf("14. Tax calculation\n");
        printf("15. Item discount\n");
        printf("16. Car rental eligibility\n");
        printf("17. Number positivity check\n");
        printf("18. Oldest person\n");
        printf("19. Electricity bill calculation\n");
        printf("20. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x) {
            case 1:
                tri();
                break;
            case 2:
                c2f();
                break;
            case 3:
                SI();
                break;
            case 4:
                circ();
                break;
            case 5:
                marks();
                break;
            case 6:
                rect();
                break;
            case 7:
                cyl();
                break;
            case 8:
                compI();
                break;
            case 9:
                bank();
                break;
            case 10:
                voting();
                break;
            case 11:
                vow();
                break;
            case 12:
                leap();
                break;
            case 13:
                weight();
                break;
            case 14:
                tax();
                break;
            case 15:
                itemd();
                break;
            case 16:
                car_rental();
                break;
            case 17:
                npz();
                break;
            case 18:
                old();
                break;
            case 19:
                ebill();
                break;
            case 20:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 20.\n");
                break;
        }
    }

    return 0;
}
void tri(){
    float l,w,a;
    printf("Enter the length of the triangle : \n");
    scanf("%f",&l);
    printf("Enter the width of the triangle : \n");
    scanf("%f",&w);
    a = l*w;
    printf("the area of the triangle is : %.2f",a);
}
void c2f(){
    float c,f;
    printf("Enter the celcius value\n");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("The coversion is : %f",&f);
}
void SI(){
    float si,p,t,r;
    printf("enter Principal :\n");
    scanf("%f",&p);
    printf("enter time :\n");
    scanf("%f",&t);
    printf("enter r :\n");
    scanf("%f",&r);
    si = (p*t*r)/100;
    printf("The SI is : %f \n", si);

}

void circ(){
    float r, h, circle_area, cylinder_surface_area, cylinder_volume;
    const float PI = 3.14159;
    printf("Enter the radius: \n");
    scanf("%f", &r);
    circle_area = PI * r * r;
    printf("The area of the circle is: %.2f\n", circle_area);
    printf("Enter the height of the cylinder: \n");
    scanf("%f", &h);
    cylinder_surface_area = 2 * PI * r * (r + h);
    cylinder_volume = PI * r * r * h;
    printf("The surface area of the cylinder is: %.2f\n", cylinder_surface_area);
    printf("The volume of the cylinder is: %.2f\n", cylinder_volume);
}
void marks(){
    float marks[5], t = 0, average, percentage;
    int max = 100;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        t += marks[i];
    }
    average = t/5;
    percentage = (t / max) * 100;

    printf("\nTotal Marks = %.2f\n",t);
    printf("Average Marks = %.2f\n",average);
    printf("Percentage = %.2f%%\n",percentage);
}
void rect(){
    float l,w,p;
    printf("Enter the length of the rectangle: \n");
    scanf("%f",&l);
    printf("Enter the width of the rectangle: \n");
    scanf("%f",&w);
    p = 2*(l+w);
    printf("The perimeter of the rectangle is: %.2f\n", p);
}
void cyl(){
    float radius, height, volume;
    const float PI = 3.14159;
    printf("Enter the radius of the cylinder: \n");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: \n");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    printf("The volume of the cylinder is: %.2f\n", volume);
}
void compI(){
    float principal, rate, time, compound_interest;
    printf("Enter the principal amount: \n");
    scanf("%f", &principal);

    printf("Enter the annual interest rate): \n");
    scanf("%f", &rate);

    printf("Enter the time period: \n");
    scanf("%f", &time);
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("The compound interest is: %.2f\n", compound_interest);
}
void voting(){
    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    if (age>=18 ){
        printf("Your are allowed to vote");
    }
    else{
        printf("you are not able to vote");
    }
}
void vow(){
    char inp;
    printf("Enter the letter : \n");
    scanf("%s",&inp);
    inp = tolower(inp);
    if(inp == "a"||inp=="e"||inp=="i" ||inp== "o"||inp=="u"){
        printf("it is a vowel");
    }else{
        printf("It is not a vowel");
    }
}
void leap(){
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if(year%4 == 0){
        printf("%d is a leap year", year);
    } else{
        printf("%d is not a leap year\n", year);
    }
}
void weight(){
    int w,h;
    printf("Enter your weight : \n");
    scanf("%d", &w);
    printf("Enter your height : \n");
    scanf("%d",&h);
    int bmi = w /(h*h);
    if(bmi < 18.5){
        printf("You are underweight\n");
    } else if(bmi >=18.5 && bmi < 24.9){
        printf("You are normal weight\n");
    } else if(bmi >= 25 && bmi <29.9){
        printf("you are overweight\n");
    } else{
        printf("You are obese\n");
    }
}
void tax(){
    int income, tax = 0;

    printf("Enter your annual income: ");
    scanf("%d", &income);

    if (income <= 10000) {
        tax = 0.0;
    }else if (income <= 50000) {
        tax = (income - 10000) * 0.10;
    }else if (income <= 100000) {
        tax = (40000 * 0.10) + (income - 50000) * 0.20;
    } else {
        tax = (40000 * 0.10) + (50000 * 0.20) + (income - 100000) * 0.30;
    }
    printf("Your tax amount is: %d\n", tax);
}
void itemd(){
    int q;
    float ppitem, tprice, d = 0.0;

    printf("Enter the price per item: ");
    scanf("%f",&ppitem);

    printf("Enter the quantity of items purchased: ");
    scanf("%d", &q);
    tprice = ppitem * q;

    if (q >= 1 && q<= 10) {
        d = 0.05;
    } else if (q >= 1 && q <= 50) {
        d = 0.10;
    } else if (q > 50) {
        d= 0.15;
    }
    tprice= tprice -(tprice *d);
    printf("Total price after applying discount: %.2f\n", tprice);
}
void car_rental(){
    int age;
    char li;
    printf("What is your age?\n");
    scanf("%d", &age);
    if(age>= 21){
        printf("Do you have a driving license answer in (Y or N\n");
        scanf("%s", &li);
        li = tolower(li);

        if(li == "y"){
            printf("Your are able to rent the car\n");
        } else if(li == "n"){
            printf("You need a license to rent a car\n");
        } else
            printf("Enter a valid Input\n");

    } else{
        printf("You don't meet the minimum requirement\n");
    }
}

void npz(){
    int number;
    printf("Enter an integer: \n");
    scanf("%d",&number);
    if (number >= 0) {
        if (number > 0) {
            printf("The number is positive.\n");
        } else {
            printf("The number is zero.\n");
        }
    } else {
        printf("The number is negative.\n");
    }
}
void old(){
    int p1,p2,p3;
    printf("Enter the age of person 1: \n");
    scanf("%d", &p1);
    printf("Enter the age of person 2: \n");
    scanf("%d", &p2);
    printf("Enter the age of person 3: \n");
    scanf("%d", &p3);
    if(p1==p2 && p2==p3){
        printf("All of the person are of same age\n");
    } else if(p1>p2){
        if (p1>p3){
            printf("Person 1 is the oldest\n");
        } else{
            printf("Person 3 is the oldest\n");
        }
    } else if(p2>p1){
        if(p2>p3){
            printf("Person 2 is the oldest\n");
        } else{
            printf("Person 3 is the oldest\n");
        }
    }

}
void ebill(){
    int units;
    float bill = 0.0;
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 10.0);
    }else {
        bill = (100 * 5.0) + (100 * 10.0) + ((units - 200) * 15.0);
    }
    printf("The total electricity bill is: %.2f\n", bill);
}


void bank() {
    int ent;
    const int pin = 1011;
    float balance = 10000;
    int add, with;
    printf("Enter the 4 digit pin\n");
    scanf("%d", &ent);
    if (pin == ent) {
        while (1) {

            int opt;
            printf("Welcome to Sagarmatha bank\n");
            printf("1.Add funds\n");
            printf("2.withdraw\n");
            printf("3.check balance\n");
            printf("4.Exit\n");
            printf("Enter your choice: \n");
            scanf("%opt", &opt);
            switch (opt) {
                case 1:
                    printf("How much funds do you want to add?\n");
                    scanf("%d", &add);
                    if (add <= 0) {
                        printf("You need to fund more than that\n");
                    } else {
                        balance += add;
                        printf("Your new balance is\n %.2f", balance);
                    }
                    break;
                case 2:
                    printf("How much do you want to withdraw? \n");
                    scanf("%d", &with);
                    if (with > balance) {
                        printf("You do not have the sufficient amount to withdraw\n");
                    } else {
                        balance -= with;
                        printf("Your new balance is %f\n", balance);
                    }
                    break;
                case 3:
                    printf("Your balance is %.2f\n", balance);
                    break;
                case 4:
                    printf("Exited\n");
                    break;
                default:
                    printf("Enter a valid choice \n");
            }

        }
    } else{
        printf("invalid pin\n");
    }
}
