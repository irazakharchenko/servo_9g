#include "tim.h"

int turnLight(int curAn){
	if(curAn < 0){
		return 0;
	}
	TIM3->CCR2 = curAn;
	HAL_Delay(1000);
	TIM3->CCR2 = 1900;
	HAL_Delay(1000);
	return 1;


}
