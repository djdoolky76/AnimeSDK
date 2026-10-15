#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ShieldValueType : ::System::Int32
	{
		Self = 0,
		Team = 1,
		Total = 2,
	};
}
