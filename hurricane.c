/*=======================================================================1P*/
/* NAME= ADEOYE GANIYU OLUWASEGUN
*
*Purpose:
*      
*      This program is to work with linked list, dynamic memory allocation, FILE I/O character string.
*      The folder name is passed from command libne argument and each files in the folder is read separately into a 2D linked list.
*      The summary function then compute some various statistical measurement and print to the output screen and also to an output file.
*
*Program input:
*       This take the different input folder name and read the file into a linked list data structure*       
*
*Program output:
*       This write the output of the file read into a linked list and print the analysis with the summary function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "hurricane.h"

int main(int argc, char *argv[])
{
    int count,stormCount=0, headCount=0;
	int ind=0;
	DIR *fileDir;
	struct dirent *inputFile;
	char filename[30];
	header * head=NULL;
	
    printf("This program was called with \"%s\".\n", argv[0]);
    
    if (argc > 1)
     {
       for (count = 1; count < argc; count++)
        {
            printf("argv[%d] = %s\n", count, argv[count]);
	    }	//scanf("%s", argv[count]);
	   for (count = 1; count < argc; count++)
        {     
	        
			head=read_data(argv[count]);
			//printf("%d\n", ind);
			summary(atoi(argv[count]),head,"summary");
			//deleteStormMemory(head);
			//summary(head);
		}
     }
    else
     {
        printf("The command had no other arguments.\n");
     }
	 printf("\nGoodbye\n");
    
    return 0;
}


//in main function take the size of the hurricane to malooc the number of dynamic array

//* Remenber to delete your memory... Ask prof
