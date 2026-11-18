#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateSimpleValueType_TypeDefinitionIndex = 44186;

	enum class HollowCameraPredicateSimpleValueType : ::System::Int32
	{
		Distance = 1,
		DeltaZ = 2,
		DeltaZAbsolute = 3,
		None = 0,
	};
}
