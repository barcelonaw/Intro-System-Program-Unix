/*************MICO B********/

#include "lab9_10.h"


void Redirection(int argc, char *argv[])

{

	int out = 0;
	int in = 0;

	for(int i=0; i<argc; i++)
	{
		if(strcmp(argv[i],">")==0)
		{
			if(out != 0)
			{
				fprintf(stderr,"More than one file detected.\n");
				exit(EXIT_FAILURE);
			}


			if(i==0){
				fprintf(stderr, "No command entered.\n"); 
				exit(EXIT_FAILURE);
			}
			out = i;
		}
		if(strcmp(argv[i],"<")==0){
			if(in != 0){
				fprintf(stderr, "Cannot output to more than one file.\n"); 
				exit(EXIT_FAILURE);
			}
			else if(i==0){
				fprintf(stderr, "No command entered.\n"); 
				exit(EXIT_FAILURE);
			}
			in = i;
		}
	}

	if(out != 0){
		if(argv[out+1] == '\0'){
			fprintf(stderr, "There is no file.\n"); 
			exit(EXIT_FAILURE);
		}
		int fd = open(argv[out+1], O_RDWR | S_IWUSR | O_TRUNC, S_IRUSR | O_CREAT);
		if(fd==-1){
			fprintf(stderr, "Cannot open/create file.\n"); 
			exit(EXIT_FAILURE);
		}
		dup2(fd, 1);
		close(fd);
		argv[out] = NULL;
	}

	if(in!=0){
		if(strcmp(argv[in+1], "<")==0){
			fprintf(stderr, "There is no file.\n"); 
			exit(EXIT_FAILURE);
		}
		int fd = open(argv[out+1], O_RDONLY );

		if(fd==-1){
			fprintf(stderr, "Cannot open/create file.\n"); 
			exit(EXIT_FAILURE);
		}
		dup2(fd, 1);
		close(fd);
		argv[in] = NULL;
	}
}

