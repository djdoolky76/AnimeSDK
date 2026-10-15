#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillReadyDisplayOption : ::System::UInt16
	{
		None = 0,
		ShowOutline = 1,
		ShowCrossHair = 2,
		All = 65535,
	};
}
