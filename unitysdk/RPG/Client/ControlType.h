#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ControlType : ::System::Int32
	{
		TAP = 0,
		CLICK = 1,
		PRESS = 2,
	};
}
