#include <stdio.h>
#include "output_char_methods.c"

char buffer[200];
int main(void) {
	sprintf(buffer, "Cung, Chuc, Tan, Xuan");
	Output_first_character(buffer);
	Output_all_characters_by_string(buffer);
	Output_all_characters_by_string_one_by_one(buffer);
	Output_all_characters_by_looping(buffer);
}