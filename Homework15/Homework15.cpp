
#include "Header.h"

int main() {
	srand(time(0));
	int size;
	set_array_size(&size, true);
	int* ar;
	array_memory_allocation(&ar, size);
	random_fill_array(ar, size);
	print_array(ar, size);
	add_element_at_the_end_of_array(&ar, &size, 100);
	print_array(ar, size);
	delete_element_at_the_end_from_array(&ar, &size);
	print_array(ar, size);
	add_element_at_the_array(&ar, &size, 16, 6);
	print_array(ar, size);
	delete_element_at_the_array(&ar, &size, 3);
	print_array(ar, size);
	array_free_memory(ar);
}


