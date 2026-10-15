#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BenefitActivityState : ::System::UInt32
	{
		LOCKED = 0,
		WAITING_CHOOSE = 1,
		WAITING_RESULT = 2,
		WAITING_RESULT_EXTENDED = 3,
		OVER = 4,
	};
}
