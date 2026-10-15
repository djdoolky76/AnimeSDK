#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CompareType : ::System::Int32
	{
		Unknow = 0,
		Greater = 1,
		GreaterEqual = 2,
		NotEqual = 3,
		Equal = 4,
		LessEqual = 5,
		Less = 6,
	};
}
