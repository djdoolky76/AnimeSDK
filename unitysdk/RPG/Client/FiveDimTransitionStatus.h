#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FiveDimTransitionStatus : ::System::Int32
	{
		None = 0,
		Opening = 1,
		FadeIn = 2,
		AfterFadeIn = 3,
		Closing = 4,
	};
}
