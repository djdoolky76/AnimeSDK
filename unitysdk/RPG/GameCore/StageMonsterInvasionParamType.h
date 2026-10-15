#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StageMonsterInvasionParamType : ::System::Int32
	{
		KillThresh = 0,
		MaxHPRatio = 1,
		NormalDamageConvertRatio = 2,
		ElationDamageConvertRatio = 3,
		MaxHPRatioForMultHP = 4,
	};
}
