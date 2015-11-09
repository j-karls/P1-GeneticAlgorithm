/*
This function is created by: Asger Geel Weirsøe for use only in the P1-Project.
The function creates a document that writes the data used to generate a school schedule.


Date:           9/11
Version:        1.04
*/

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
   


int StudentData(int *studentData,char studentFirstName,char studentLastName,int numOfStudents){
    #if defined(_WIN32)
    _mkdir("./data");
     #else 
    mkdir("./data", 0700); 
     #endif
    int i;
    FILE *fptr;

    if ((fptr=fopen("data/StudentData.txt","r"))==NULL){ 
        printf("Did not find file, creating new\n");
        fptr = fopen("data/StudentData.txt", "w"); 
        fputs("//This entire document is dedicated to the processing of a school schedule.\n",fptr);
        fputs("//Please do not edit this file for any reasons. Unless you know what you are doing.\n\n",fptr);
        fputs("//The following data will represent: \n",fptr);
        fputs("//Unique ID:                 ID:\n",fptr);
        fputs("//Name:                      Name:\n",fptr);
        fputs("//Mundtlig Matematik:        Mm:\n",fptr);
        fputs("//Skriftlig Matematik:       Sm:\n",fptr);
        fputs("//Mundtlig Dansk:            Md:\n",fptr);
        fputs("//Skriftlig Dansk:           Sd:\n",fptr);
        fputs("//Mundtlig Fysik:            Mf:\n",fptr);
        fputs("//Skriftlig Fysik:           Sf:\n",fptr);
        fputs("//Mundtlig Engelsk:          Me:\n",fptr);
        fputs("//Skriftlig Engelsk:         Se:\n",fptr);
        fputs("//Mundtlig Kemi:             Mk:\n",fptr);
        fputs("//Skriftlig Kemi:            Sk:\n",fptr);
        fputs("//Mundtlig Teknologi:        Mt:\n",fptr);
        fputs("//Mundtlig Programmering:    Mp:\n",fptr);
        fputs("//Mundtlig Idéhistorie:      Mi:\n",fptr);
        fputs("//Mundtlig Biologi:          Mb:\n",fptr);
        fputs("//Mundtlig kom/it:           Mki:\n",fptr);
        fputs("//Mundtlig Samfundsfag:      Ms:\n\n\n\n",fptr);

        fputs("-------ALL STUDENTS--------\n",fptr);
        for(i = 0;i<numOfStudents;i++){

            fputs("--Student start--\n",fptr);
            fprintf(fptr, "Student nr: %i\n",i );
            fprintf(fptr,"ID: %i\n",studentData.unikID[i]);
            fprintf(fptr, "Name: %s %s\n",studentFirstName,studentLastName );
            fprintf(fptr,"Mm: %i\n",studentData.Mm[i]);
            fprintf(fptr,"Sm: %i\n",studentData.Sm[i]);
            fprintf(fptr,"Md: %i\n",studentData.Md[i]);
            fprintf(fptr,"Sd: %i\n",studentData.Sd[i]);
            fprintf(fptr,"Mf: %i\n",studentData.Mf[i]);
            fprintf(fptr,"Sf: %i\n",studentData.Sf[i]);
            fprintf(fptr,"Me: %i\n",studentData.Me[i]);
            fprintf(fptr,"Se: %i\n",studentData.Se[i]);
            fprintf(fptr,"Mk: %i\n",studentData.Mk[i]);
            fprintf(fptr,"Sk: %i\n",studentData.Sk[i]);
            fprintf(fptr,"Mt: %i\n",studentData.Mt[i]);
            fprintf(fptr,"Mp: %i\n",studentData.Mp[i]);
            fprintf(fptr,"Mi: %i\n",studentData.Mi[i]);
            fprintf(fptr,"Mb: %i\n",studentData.Mb[i]);
            fprintf(fptr,"Mki: %i\n",studentData.Mki[i]);
            fprintf(fptr,"Ms: %i\n",studentData.Ms[i]);
            fputs("--Student end--\n\n",fptr);
        }
    }
        
        fclose(fptr);

    
    return 0;
}
