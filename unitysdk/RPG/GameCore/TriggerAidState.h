#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TriggerAidState : ::System::Int32
	{
		Prepare = 0,
		Excuting = 1,
		Reset = 2,
	};
}
