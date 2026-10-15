#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillDamageRange : ::System::Int32
	{
		Unknow = 0,
		One = 1,
		Spread = 2,
		All = 3,
	};
}
