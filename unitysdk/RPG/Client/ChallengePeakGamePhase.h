#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChallengePeakGamePhase : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Starting = 2,
		Gaming = 3,
		Settled = 4,
		Closing = 5,
		Closed = 6,
	};
}
