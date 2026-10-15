#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MarbleBuffOperationType : ::System::Int32
	{
		Equal = 0,
		Greater = 1,
		EqualOrGreater = 2,
		Less = 3,
		EqualOrLess = 4,
		NotEqual = 5,
	};
}
