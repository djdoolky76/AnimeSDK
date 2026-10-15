#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillUseType : ::System::Int32
	{
		Unknow = 0,
		UIButtonClick = 1,
		SelectEntity = 2,
		Passive = 3,
		UIButtonPress = 4,
		AutoUse = 5,
	};
}
