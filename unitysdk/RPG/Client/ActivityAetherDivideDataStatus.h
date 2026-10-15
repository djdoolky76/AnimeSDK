#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ActivityAetherDivideDataStatus : ::System::Int32
	{
		UnKnow = 0,
		Locked = 1,
		IsStart = 2,
		Completed = 3,
	};
}
