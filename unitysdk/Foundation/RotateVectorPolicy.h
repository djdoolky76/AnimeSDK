#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int RotateVectorPolicy_TypeDefinitionIndex = 8876;

	enum class RotateVectorPolicy : ::System::Byte
	{
		ByOrientation = 1,
		WithoutTwist = 2,
		ByShortestPath = 0,
		Default = 0,
	};
}
