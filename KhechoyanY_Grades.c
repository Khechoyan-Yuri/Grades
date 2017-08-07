/*This program will ask fir and accept user inputs for: points earned in course and total points allowed
It will calculate: Earned Points/Total Points * 100
It then calculate: Weighted Grade = .3(HW) + .15(Lab) + .2(Quiz) + .2(Exam) + .15(Finals)
Along with a weighted percentage, it will associate a grade

Created: 10-20-15

Yuri Khechoyan
*/

#include <stdio.h>

int main (void){

float hwGrade, totalHW, labGrade, totalLab, quizGrade, totalQuiz, examGrade, totalExam, finalsGrade, totalFinals,  grandTotalEarned;
float grandTotalHW, grandTotalLab, grandTotalQuiz, grandTotal, grandTotalExam, grandTotalFinals, grandTotalCouldEarn, weightedGrade;

    //Print out to user what program does
    printf("This program will ask for your points earned for each category (HW, Labs, Quizzes, Exams, and Finals)\n");
    printf("Then calculate a weighted grade, and give you a letter grade along with a percentage. \n\n");

            //Ask and receive Homework grade
            printf("Please enter homework grade: ");
            scanf("%f", &hwGrade);
            printf("You have entered: %.2f", hwGrade);

                //Ask for HW total
                printf("\nPlease enter the Total Homework Grade: ");
                scanf("%f", &totalHW);

            //Ask and receive Lab grade
            printf("\nPlease enter lab grade: ");
            scanf("%f", &labGrade);
            printf("You have entered: %.2f", labGrade);

                //Ask for Lab total
                printf("\nPlease enter Total Lab Grade: ");
                scanf("%f", &totalLab);

            //Ask and receive Quiz grade
            printf("\nPlease enter Quiz grade: ");
            scanf("%f", &quizGrade);
            printf("You have entered: %.2f", quizGrade);

                //Ask for Quiz total
                printf("\nPlease enter the Total Quiz Grade: ");
                scanf("%f", &totalQuiz);

            //Ask and receive Exam grade
            printf("\nPlease enter Exam grade: ");
            scanf("%f", &examGrade);
            printf("You have entered: %.2f", examGrade);

                //Ask for Exam total
                printf("\nPlease enter the Total Exam Grade: ");
                scanf("%f", &totalExam);

            //Ask and receive Finals grade
            printf("\nPlease enter Finals grade: ");
            scanf("%f", &finalsGrade);
            printf("You have entered: %.2f", finalsGrade);

                //Ask for Quiz total
                printf("\nPlease enter the Total Finals Grade: ");
                scanf("%f", &totalFinals);

    //Calculate Average Homework grade
    grandTotalHW = hwGrade/totalHW*100;
    printf("\nYour Average HW Grade is %.2f%%\n", grandTotalHW);

    //Calculate Average Lab Grade
    grandTotalLab = labGrade/totalLab*100;
    printf("Your Average Lab Grade is %.2f%%\n", grandTotalLab);

    //Calculate Average Quiz Grade
    grandTotalQuiz = quizGrade/totalQuiz*100;
    printf("Your Average Quiz Grade is %.2f%%\n", grandTotalQuiz);

    //Calculate Average Exam Grade
    grandTotalExam = examGrade/totalExam*100;
    printf("Your Average Exam Grade is %.2f%%\n", grandTotalExam);

    //Calculate Average Finals Grade
    grandTotalFinals = finalsGrade/totalFinals*100;
    printf("Your Average Finals Grade is %.2f%%\n", grandTotalFinals);

    //Calculate how many points were Earned in Total
    grandTotalEarned = hwGrade + labGrade + quizGrade + examGrade + finalsGrade;

    //Calculate how many Points could have been earned
    grandTotalCouldEarn = totalHW + totalLab + totalQuiz + totalExam + totalFinals;

    //Calculate how many points were Earned in Total
    grandTotalEarned = hwGrade + labGrade + quizGrade + examGrade + finalsGrade;

    //Calculate
    grandTotalCouldEarn = totalHW + totalLab + totalQuiz + totalExam + totalFinals;

        //Calculate Weighted Grade
        weightedGrade = (grandTotalHW * .3) + (grandTotalLab* .15) + (grandTotalQuiz* .2) + (grandTotalExam* .2) + (grandTotalFinals* .15);


        if(weightedGrade>=60 && weightedGrade<=69){
            printf("\nYour Weighted Grade is: %.2f%% which is a D!", weightedGrade);
        }
            if(weightedGrade>=70 && weightedGrade<=79){
                printf("\nYour Weighted Grade is: %.2f%% which is a C!", weightedGrade);
            }
                if(weightedGrade>=80 && weightedGrade<=89){
                    printf("\nYour Weighted Grade is: %.2f%% which is a B!", weightedGrade);
            }
                    if(weightedGrade>=90 && weightedGrade<=100){
                        printf("\nYour Weighted Grade is: %.2f%% which is an A!", weightedGrade);
            }
                        if(weightedGrade>=0 && weightedGrade<=59){
                           printf("\nYour Weighted Grade is: %.2f%% which is an F!", weightedGrade);
                        }


}

