#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DamageDecalQuality_TypeDefinitionIndex = 27277;

	enum class DamageDecalQuality : ::System::Int32
	{
		High = 0,
		Low = 2,
		Medium = 1,
		Off = 3,
	};
}
