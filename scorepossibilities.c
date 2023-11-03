#include <stdio.h>
#include <string.h>
/*I'm so serious, this is an absolutely insane assignment to give to students
who have done nothing but Python for over a year. We discussed almost none of this
and I feel like I did a pretty good job, but who knows. Thanks for grading.*/
void printCombinations(int score) { //Initialize combination function to print every combo we find
    int count = 0; //Initialize count at 0 since it is what will help us stop iterating
    char combination[100];//100 possible combos, banking a bit here

    for (int td2pt = 0; td2pt * 8 <= score; td2pt++) {
        /*Every for loop line will look similar, so I'm explaining here.
        Essentially I'm starting at 8 points and working my way down to 2, through
        8, 7, 6, 3, 2. At each point I'm subtracting the valuem and adding to a count
        of how many values we use of that given variable. After all of these iterations
        I eventually print, formatted in a way it prints in descending order*/
        for (int td7 = 0; td7 * 7 <= score - td2pt * 8; td7++) {
            for (int td = 0; td * 6 <= score - td2pt * 8 - td7 * 7; td++) {
                for (int fg = 0; fg * 3 <= score - td2pt * 8 - td7 * 7 - td * 6; fg++) {
                    for (int safety = 0; safety * 2 <= score - td2pt * 8 - td7 * 7 - td * 6 - fg * 3; safety++) {
                        if (td2pt * 8 + td7 * 7 + td * 6 + fg * 3 + safety * 2 == score) {
                            //Only if the combo equals the score passed in do we print it. Use sprintf for a series of formatted characters and strings
                            sprintf(combination, "%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety", td2pt, td7, td, fg, safety);
                            printf("%s\n", combination);
                            count++;
                        }
                    }
                }
            }
        }
    }
    //Just in case there isn't a single combination found
    if (count == 0) {
        printf("No combinations found.\n");
    }
}

int main() {
    int score;
    //Want to use a while loop, so initialize a stopping condition
    int stop = 0; 

    printf("Enter 0 or 1 to STOP\n");

    while (!stop) { //Check to see if we loop
        printf("Enter the NFL score: ");
        scanf("%d", &score);

        if (score <= 1) {//If the score is one of the bad values less than 1, set stop to what kills the while
            stop = 1;
            printf("Goodbye!\n");
        } else {
            printf("Possible combinations of scoring plays:\n");
            printCombinations(score);//Call our function and print the combos
        }
    }

    return 0;
}