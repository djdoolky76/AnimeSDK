#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CakeSpeakerPolicy : ::System::Int32
	{
		Singlelnstance = 0,
		RoundRobin = 1,
	};
}
