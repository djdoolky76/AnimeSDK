#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AIActionType : ::System::Int32
	{
		None = 0,
		MoveTo = 1,
		Follow = 2,
		LeadWay = 3,
		PlaySO = 4,
	};
}
