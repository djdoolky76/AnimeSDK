#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ZoneSteerType_TypeDefinitionIndex = 88939;

	enum class AnimatorZoneLockTarget_ZoneSteerType : ::System::Int32
	{
		Fixed = 2,
		Instant = 0,
		Clamp = 1,
		None = 3,
	};
}
