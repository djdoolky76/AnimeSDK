#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AttackTotalDamageSumAlgo : ::System::Int32
	{
		SumAll = 0,
		IgnoreConvert = 1,
	};
}
