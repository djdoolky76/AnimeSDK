#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class StoryLineSwitchReason : ::System::Int32
	{
		Server = 0,
		SwitchPage = 1,
		Mission = 2,
		Handbook = 3,
		Activity = 4,
		Other = 5,
	};
}
