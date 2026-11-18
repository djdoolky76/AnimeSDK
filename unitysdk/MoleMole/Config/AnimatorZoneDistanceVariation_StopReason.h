#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_StopReason_TypeDefinitionIndex = 80284;

	enum class AnimatorZoneDistanceVariation_StopReason : ::System::Int32
	{
		ToOtherState = 2,
		OverMaxMoveDistance = 3,
		HitOther = 0,
		ExitZone = 1,
	};
}
