#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RuntimeAnimatorConditionMode : ::System::Int32
	{
		If = 1,
		IfNot = 2,
		Greater = 3,
		Less = 4,
		Equals = 6,
		NotEqual = 7,
	};
}
