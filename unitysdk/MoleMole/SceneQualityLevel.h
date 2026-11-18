#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SceneQualityLevel_TypeDefinitionIndex = 40038;

	enum class SceneQualityLevel : ::System::Int32
	{
		High = 2,
		Low = 0,
		Medium = 1,
	};
}
