#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CakeRaceCurveType : ::System::Int32
	{
		None = 0,
		Sin = 1,
		Linear = 2,
		Fall = 3,
		Parabole = 4,
		Custom = 5,
	};
}
