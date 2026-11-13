#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SteerSpeedMode_TypeDefinitionIndex = 25069;

	enum class SteerSpeedMode : ::System::Int32
	{
		Duration = 0,
		Speed = 1,
	};
}
