#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvSystemResult : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Success = 2,
		Fail = 3,
	};
}
