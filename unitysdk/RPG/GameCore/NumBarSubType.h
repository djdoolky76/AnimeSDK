#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class NumBarSubType : ::System::Int32
	{
		NotShow = 0,
		Fraction = 1,
		PureNum = 2,
		Percent = 3,
	};
}
