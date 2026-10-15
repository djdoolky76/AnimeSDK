#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FindChestReplaceType : ::System::Int32
	{
		None = 0,
		Always = 1,
		HiddenOrUnload = 2,
		GroupPropertyLocked = 3,
	};
}
