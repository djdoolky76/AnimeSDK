#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PlanetFesAvatarEventOptionType : ::System::Int32
	{
		None = 0,
		Random = 1,
		Negative = 2,
		Positive = 3,
		Single = 4,
	};
}
