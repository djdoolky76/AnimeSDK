#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtSkillState : ::System::Int32
	{
		Invalid = 0,
		Ready = 1,
		Pending = 2,
		Using = 3,
		Finish = 4,
		Abort = 5,
		CD = 6,
		_Count = 7,
	};
}
