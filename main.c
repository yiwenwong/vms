#include <stdio.h>


static int insert_coins_total=0;
static int revenue_coins_total=0;


enum menu_level{
    INFO,INSERT_COIN,PRESS_PRODUCT,PRESS_RETURN,OPEN_SERVICE_MENU,
}