#pragma once
#include "unitysdk/unitysdk.h"

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int LaunchMode_TypeDefinitionIndex = 50095;

	enum class LaunchMode : ::System::Int32
	{
		Random = 0,
		Sequential = 1,
	};
}
