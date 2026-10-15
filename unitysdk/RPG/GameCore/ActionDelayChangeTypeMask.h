#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActionDelayChangeTypeMask : ::System::UInt16
	{
		None = 0,
		Bit_Increase = 1,
		Bit_Decrease = 2,
		All = 65535,
	};
}
