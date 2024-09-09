#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Optional functions for a double representing the user’s typed in value
double askForUserInput(const char *prompt);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function that calls other functions
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function that reads other inputs
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

// Function to calculate and print the distance between two points
double calculateDistance() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate and print the perimeter of the rectangle
double calculatePerimeter() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double perimeter = 2 * (width + height);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 3.0; // Example difficulty level
}

// Function to calculate and print the area of the rectangle
double calculateArea() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area = width * height;
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 2.0; // Example difficulty level
}

// Function to calculate and print the width of the rectangle
double calculateWidth() {
    double x1 = askForUserInput("Enter x1: ");
    double x2 = askForUserInput("Enter x2: ");
    
    double width = fabs(x2 - x1);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, askForUserInput("Enter y1: "));
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, askForUserInput("Enter y2: "));
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 1.0; // Example difficulty level
}

// Function to calculate and print the height of the rectangle
double calculateHeight() {
    double y1 = askForUserInput("Enter y1: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double height = fabs(y2 - y1);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", askForUserInput("Enter x1: "), y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", askForUserInput("Enter x2: "), y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 1.0; // Example difficulty level
}

