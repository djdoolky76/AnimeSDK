#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ResolveMultiValueType : ::System::Int32
	{
		GetMax = 0,
		GetMin = 1,
		GetSum = 2,
	};
}
