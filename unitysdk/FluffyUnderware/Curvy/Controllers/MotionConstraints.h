#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MotionConstraints_TypeDefinitionIndex = 37554;

	enum class MotionConstraints : ::System::Int32
	{
		FreezePositionZ = 4,
		FreezeRotationY = 16,
		FreezePositionX = 1,
		FreezeRotationX = 8,
		FreezePositionY = 2,
		FreezeRotationZ = 32,
		None = 0,
	};
}
