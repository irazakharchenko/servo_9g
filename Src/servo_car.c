#include "tim.h"

int turnLight(int curAn){
	if(curAn < 0){
		return 0;
	}
	turnServoCar(curAn);
	turnServoCar(2200);
	return 1;

}

void turnServoCar(int angle){
	TIM3->CCR2 = angle;
	HAL_Delay(1000);
}
