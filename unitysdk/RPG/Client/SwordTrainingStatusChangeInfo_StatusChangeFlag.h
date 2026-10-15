#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SwordTrainingStatusChangeInfo_StatusChangeFlag : ::System::Int32
	{
		None = 0,
		StatusPower = 2,
		StatusAgility = 4,
		StatusToughness = 8,
		StatusPerception = 16,
	};
}
