#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MPChangeStatus : ::System::Int32
	{
		Default = 0,
		Increase = 1,
		Overflow = 2,
		Decrease = 3,
	};
}
