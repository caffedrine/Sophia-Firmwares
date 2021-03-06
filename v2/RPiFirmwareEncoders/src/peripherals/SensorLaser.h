//
// Created by curiosul on 06.11.18.
//

#ifndef RPIFIRMWARE_SENSORLASER_H
#define RPIFIRMWARE_SENSORLASER_H

#include "Config.h"
#include "Globals.h"
#include "drivers/GpioPooling.h"

class SensorLaser : public GpioPooling
{
public:
	explicit SensorLaser(uint8_t _gpio) : GpioPooling(_gpio, 10)
	{
		GpioPooling::SetPullState(PullState::DOWN);
	}
	
	bool IsCourtainPresent()
	{
		return (bool)(GpioPooling::CurrentState);
	}
};

SensorLaser g_SensorLaser(SENSOR_LASER_CUT_GPIO);

#endif //RPIFIRMWARE_SENSORLASER_H
