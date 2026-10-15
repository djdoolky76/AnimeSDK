#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ElectricChain_UpdateType : ::System::Int32
	{
		Interrupted = 0,
		Smooth = 1,
		SmoothInterrupt = 2,
	};
}
