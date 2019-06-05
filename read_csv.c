#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/stdcsv.h"
#include "include/data_operation.h"

int main(){

	struct car* car_info = (struct car*)malloc(sizeof(struct car));
        if (!car_info) {
                printf("Error allocating: car_info\n");
                exit(1);
        }
	struct car* temp = (struct car*)malloc(sizeof(struct car));
	
	car_info = read_line(car_info);
	temp = get_trips_period(car_info,temp,"27/05/2019", "28/05/2019");
	free_list(car_info);
	print_list(temp);
        free_list(temp);     
}

