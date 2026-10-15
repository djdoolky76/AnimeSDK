#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TimeRewindDisableControlReason : ::System::Int32
	{
		Debug = 1,
		TaskDisable = 2,
	};
}
