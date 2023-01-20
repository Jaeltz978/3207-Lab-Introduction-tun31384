#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "random.h"

char randchar(){

	short asciiUpperCase = 65;
	short numLetters = 26;

	char example = (char)  (rand() % numLetters + asciiUpperCase);

	return(example);


}
