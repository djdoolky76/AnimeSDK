#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ActivityStateEnum : ::System::Int32
	{
		None = 0,
		Locked = 1,
		PreGuide = 2,
		InProgress = 3,
	};
}
