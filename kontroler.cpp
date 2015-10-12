//
// Created by kelevragoodcat on 10/12/15.
//

#include "kontroler.h"

bool kontroler::check_win(char expression) {
    expression == 'y'? win=true : win= false;
    return win;
}
