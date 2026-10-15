#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonopolyEffectShowType : ::System::Int32
	{
		Silent = 0,
		Toast = 1,
		Effect = 2,
		EffectOnCurCell = 3,
	};
}
