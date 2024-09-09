int main(int argc, char **argc); {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
double calculateDistance(); {
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
double calculatePerimeter(); {
    double distance = calculateDistance();
    
    // Use the same points to compute width and height for perimeter calculation
    double width = fabs(askForUserInput("Enter x2: ") - askForUserInput("Enter x1: "));
    double height = fabs(askForUserInput("Enter y2: ") - askForUserInput("Enter y1: "));
    
    double perimeter = 2 * (width + height);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", width, height);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", width, height);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 3.0; // Example difficulty level
}
double calculateArea(); {
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
double calculateWidth(); {
    double x1 = askForUserInput("Enter x1: ");
    double x2 = askForUserInput("Enter x2: ");
    
    double width = fabs(x2 - x1);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, askForUserInput("Enter y1: "));
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, askForUserInput("Enter y2: "));
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 1.0; // Example difficulty level
}
double calculateHeight(); {
    double y1 = askForUserInput("Enter y1: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double height = fabs(y2 - y1);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", askForUserInput("Enter x1: "), y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", askForUserInput("Enter x2: "), y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 1.0; // Example difficulty level
}
