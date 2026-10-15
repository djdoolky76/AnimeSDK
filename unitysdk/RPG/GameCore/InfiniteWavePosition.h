#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class InfiniteWavePosition : ::System::Int32
	{
		NextSummon = 0,
		EndOfOneThird = 1,
		EndOfTwoThirds = 2,
		End = 3,
	};
}
