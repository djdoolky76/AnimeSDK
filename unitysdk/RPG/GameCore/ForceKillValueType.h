#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ForceKillValueType : ::System::Int32
	{
		None = 0,
		Ratio = 1,
		AbsoluteValue = 2,
	};
}
