#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ActivityGuessTheSilhouetteDataStatus : ::System::Int32
	{
		UnKnow = 0,
		NotStart = 1,
		IsStart = 2,
		Completed = 3,
	};
}
