#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PassByValueSourceType : ::System::Int32
	{
		FCV = 0,
		FSV = 1,
		GroupProperty = 2,
		DynamicValue = 3,
	};
}
