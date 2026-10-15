#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraWorkLeaveType : ::System::Int32
	{
		None = 0,
		Dither = 1,
		Break = 2,
		Recover = 3,
		WalkOut = 4,
		OpenBox = 5,
	};
}
