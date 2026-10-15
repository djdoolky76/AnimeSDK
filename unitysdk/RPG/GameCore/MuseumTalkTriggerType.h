#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MuseumTalkTriggerType : ::System::Int32
	{
		Unknown = 0,
		EnterOpenDay = 1,
		Market = 3,
		ReturnOpenDay = 4,
	};
}
