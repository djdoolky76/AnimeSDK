#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PlanetFesToastItem_Status : ::System::Int32
	{
		Init = 0,
		Hiding = 1,
		FadeIn = 2,
		Showing = 3,
		FadeOut = 4,
	};
}
