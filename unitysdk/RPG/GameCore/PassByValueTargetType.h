#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PassByValueTargetType : ::System::Int32
	{
		FCV = 0,
		GroupProperty = 2,
		DynamicValue = 3,
	};
}
