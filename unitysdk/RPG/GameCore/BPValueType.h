#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BPValueType : ::System::Int32
	{
		FinalTeamBP = 0,
		PureTeamCurrent = 1,
		Usable = 2,
		Additional = 3,
		Dirty = 4,
	};
}
