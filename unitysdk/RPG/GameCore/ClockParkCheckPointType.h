#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ClockParkCheckPointType : ::System::Int32
	{
		AttrGreaterEqual = 1,
		AttrSumGreaterEqual = 2,
		CheckTypeNone = 3,
		OwnBuff = 4,
	};
}
