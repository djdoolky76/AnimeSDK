#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_LocalAxisType_TypeDefinitionIndex = 70333;

	enum class AnimatorZoneRotateBone_LocalAxisType : ::System::Int32
	{
		LocalX = 1,
		LocalY = 2,
		WorldY = 8,
		LocalZ = 0,
		EntityZ = 3,
		WorldX = 7,
		WorldZ = 6,
		EntityX = 4,
		EntityY = 5,
	};
}
