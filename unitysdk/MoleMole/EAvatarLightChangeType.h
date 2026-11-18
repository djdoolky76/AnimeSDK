#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EAvatarLightChangeType_TypeDefinitionIndex = 56914;

	enum class EAvatarLightChangeType : ::System::Int32
	{
		Linear = 2,
		Instant = 0,
		ByCurve = 3,
		Lerp = 1,
	};
}
