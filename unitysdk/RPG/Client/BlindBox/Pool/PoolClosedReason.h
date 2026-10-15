#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Pool
{
	enum class PoolClosedReason : ::System::Int32
	{
		None = 0,
		FeatureSwitchClosed = 1,
		NotInSchedule = 2,
	};
}
