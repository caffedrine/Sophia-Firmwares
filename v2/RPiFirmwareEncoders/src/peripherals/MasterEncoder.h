//
// Created by curiosul on 06.11.18.
//

#ifndef RPIFIRMWARE_MASTERENCODER_H
#define RPIFIRMWARE_MASTERENCODER_H

#include "Config.h"
#include "Globals.h"
#include "drivers/EncoderInterrupt.h"

class MasterEncoder : public EncoderInterrupt
{
public:
	explicit MasterEncoder(uint8_t gpio) : EncoderInterrupt(gpio, ENCODER_DEBOUNCING_TIME_US)
	{
		EncoderInterrupt::SetPullState(PullState::DOWN);
	}
	
	void onStep() override
	{
		OnMasterEncoderStep();
		//console->info("Master encoder: {0}", Encoder::Steps);
	}
protected:
	virtual void OnMasterEncoderStep() {};
private:
};

//MasterEncoder g_MasterEncoder(ENCODER_MASTER_GPIO);

#endif //RPIFIRMWARE_MASTERENCODER_H
