#include "main.h"

void initialize_screen(){
    pros::lcd::set_text(2, std::to_string((int) pros::battery::get_capacity()) + "%");
}