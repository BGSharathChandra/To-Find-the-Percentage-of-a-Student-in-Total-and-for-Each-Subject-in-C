//This a program to Find the Percentage scored by a Student in each Subject,Whether the Student as Passed or Failed in Each Subject,The overall Total Marks and The Overall Percentage and whether the Student as Passed or Failed overall.
#include <stdio.h>

int main()
{
    
    float Physicsmarks,Physicstotalmarks,Physicspercentage;
    float chemistrymarks,chemistrytotalmarks,chemistrypercentage;
    float Biologymarks,Biologytotalmarks,Biologypercentage;
    float mathsmarks,mathstotalmarks,mathspercentage;
    float socialsciencemarks,socialsciencetotalmarks,socialsciencepercentage;
    float firstlanguagemarks,firstlanguagetotalmarks,firstlanguagepercentage;
    float secondlanguagemarks,secondlanguagetotalmarks,secondlanguagepercentage;
    float totalpercentage;
    int totalmarks;/*Here Total Marks Means that the total marks the exam was there for multiplied by the number of subject.Example a exam was there for 100 marks so it becomes the total
    marks you could have scored in a subject but here we are calculating for 5 subject so you must Enter 100*5 or the total marks the exam was conducted multiplied by 5*/
    int  Totalmarksscored;//Here I meant to write Total marks scored as C dosen't take space I have written as Totalmarksscored. Total marks scored is the marks you have scored in Total.
   
    //Inputs for Physics
    printf("Enter the Marks scored in Physics Exam:");
    scanf("%f", &Physicsmarks);
    printf("Enter the Total Marks which  was there in thr Physics Exam:");
    scanf("%f", &Physicstotalmarks);

    //Inputs for Chemistry
    printf("Enter the Marks scored in Chemistry Exam:");
    scanf("%f", &chemistrymarks);
    printf("Enter the Total Marks which  was there in the Chemistry Exam:");
    scanf("%f", &chemistrytotalmarks);

    //Inputs for Biology
    printf("Enter the Marks scored in Biology Exam:");
    scanf("%f", &Biologymarks);
     printf( "Enter the Total Marks which was there in the Biology Exam:");
    scanf("%f", &Biologytotalmarks);

    //Inputs for Mathematics
    printf("Enter the Marks scored in Mathematics Exam:");
    scanf("%f", &mathsmarks);
    printf("Enter  the Total Marks which  was there in the Mathematics Exam:");
    scanf("%f", &mathstotalmarks);

    //Inputs of Social
    printf("Enter the Marks scored in Social Science Exam:");
    scanf("%f", &socialsciencemarks);
    printf("Enter the Total Marks which  was there in the Social Science Exam:");
    scanf("%f", &socialsciencetotalmarks);     

    //Inputs for First Language
    printf("Enter the Marks scored in First Language Exam:");
    scanf("%f", &firstlanguagemarks);
    printf("Enter the Total Marks which  was there in the First Language Exam:");
    scanf("%f", &firstlanguagetotalmarks);   

    //Inputs for Second Languge
    printf("Enter the Marks scored in Second Language Exam:");
    scanf("%f", &secondlanguagemarks);
    printf("Enter the Total Marks which  was there in the Second Language Exam:");
    scanf("%f", &secondlanguagetotalmarks); 

    printf("The Outputs\n\n");

    //Calculating The Percentage scored in every Subject,The Total Marks the exam was for and the Total Percentage.

    //Calculating The Percentage scored in every Subject
    Physicspercentage =(Physicsmarks/Physicstotalmarks)*100;
    chemistrypercentage =(chemistrymarks/chemistrytotalmarks)*100;
    Biologypercentage =(Biologymarks /Biologytotalmarks)*100;
    mathspercentage =(mathsmarks/mathstotalmarks)*100;
    socialsciencepercentage =(socialsciencemarks/socialsciencetotalmarks)*100;
    firstlanguagepercentage =(firstlanguagemarks/firstlanguagetotalmarks)*100;
    secondlanguagepercentage  =(secondlanguagemarks/secondlanguagetotalmarks)*100;


    totalmarks = Physicstotalmarks+chemistrytotalmarks+Biologytotalmarks+mathstotalmarks+socialsciencetotalmarks+firstlanguagetotalmarks+secondlanguagetotalmarks;//Calculating the total marks the Exam was there for.
    Totalmarksscored = Physicsmarks + chemistrymarks + Biologymarks + mathsmarks + socialsciencemarks;//Calculating Total marks scored by You
    totalpercentage = 100 * (Physicsmarks + chemistrymarks + Biologymarks + mathsmarks + socialsciencemarks) / totalmarks;//Calculating the Percentage

    //Printing  the Percentage of all the Subjects,Whether the Student has failed in any subject or he has totally failed in an exam and the total percentage and the total marks.
    //Printing the Outputs of Physics
    printf("The Outputs of the Student in Physics\n");
    printf("The Marks Scored by the Student in the exam is %f\n",Physicsmarks);
    printf("The Percentage of the Student in Physics is %f\n",Physicspercentage);
    if (Physicspercentage>40)
    {
        printf("The Student as PASSED in Physics Exam\n\n");
    }
    else
    {
        printf("The Student has FAILED in Physics Exam\n\n");
    }
    //Printing the Outputs of Chemistry
    printf("The Outputs of the Student in Chemistry\n");
    printf("The Marks scores by the student in Chemistry is %f\n",chemistrymarks);
    printf("The percentage scored by the Student in Chemistry is %f\n",chemistrypercentage);
    if (chemistrypercentage>40)
    {
        printf("The Student as PASSED in Chemistry Exam\n\n");
    }
    else
    {
        printf("The Student as FAILED in Chemistry Exam\n\n");
    }
    //Printing the Outputs of Biology
    printf("The Outputs of the Student in Biology.\n");
    printf("The Marks scored by the Student in Biolgy is %f\n",Biologymarks);
    printf("The Percentage of the Student in Biology is %f\n",Biologypercentage);
    if (Biologypercentage>40)
    {
        printf("The Student as PASSED in Biology Exam\n\n");
    }
    else
    {
        printf("The Student as FAILED in Biology Exam\n\n");
    }
    
    //Printing the Outputs in C
    printf("The Outputs of the Student in Mathematics \n");
    printf("The Marks Scored by the Student in Mathematics is %f\n",mathsmarks);
    printf("The Percentage of the Student in Mathematics is %f\n",mathspercentage);
    if (mathspercentage>40)
    {
        printf("The Student as PASSED in the Mathematics Exam\n\n");
    }
    else
    {
        printf("The Student as FAILED in Mathematics Exam\n\n");
    }
    //Printing the Outputs of Social Science
    printf("The Outputs of Student in Social Science\n");
    printf("The Marks scored by The Student in Mathematics is %f\n",socialsciencemarks);
    printf("The Percentage of The Student is %f\n",socialsciencepercentage);
    if (socialsciencepercentage>40)
    {
       printf("The Student as PASSED in Social Science Exam\n\n");
    }
    else
    {
        printf("The Student as FAILED in the Social Science Exam\n\n");
    }
    //Printing the Output of First Language 
    printf("The Outputs of the Student In First language\n");
    printf("The Marks Scored by The Student in First Language is %f\n",firstlanguagemarks);
    printf("The Percentage of The Student in Fist Language is%f\n",firstlanguagepercentage);
    if (firstlanguagepercentage>40)
    {
        printf("The Student as PASSED in the First Language Exam\n\n");
    }
    else
    {
        printf("The Student as FAILED in the First Language Exam\n\n");
    }
    //Printing the Output of Second Language 
    printf("The Outputs of the Student In Second language\n");
    printf("The Marks Scored by The Student in First Language is %f\n",secondlanguagemarks);
    printf("The Percentage of The Student in Fist Language is%f\n",secondlanguagepercentage);
    if (secondlanguagepercentage>40)
    {
        printf("The Student as PASSED in the Second Language Exam\n\n");
    }
    else
    {
        printf("The Student as FAILED in the Second Language Exam\n\n");
    }

    printf("This is The Total Marks and Percentage Scored by The Student\n");
    printf("The Total Marks You have scored is %d\n", Totalmarksscored);
    printf("The Percentage you have scored in total is %f\n", totalpercentage);

    if (totalpercentage > 40)
    {
        printf("The Student as Passed the exam");
    }
    else
    {
        printf("The Student has FAILED the Exam");
    }

    return 0;
}