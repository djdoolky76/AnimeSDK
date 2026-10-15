#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	enum class IdleLiveQuestStatus : ::System::Int32
	{
		None = 0,
		Doing = 1,
		Finish = 2,
		Close = 3,
	};
}
