#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ButtonShowPriority : ::System::Int32
	{
		High = 100,
		Default = 10,
		Low = 1,
	};
}
