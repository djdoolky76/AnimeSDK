#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameRainMode_TypeDefinitionIndex = 59168;

	enum class GalgameRainMode : ::System::Int32
	{
		None = 0,
		ForceRain = 2,
		ForceClear = 3,
		FollowScene = 1,
	};
}
