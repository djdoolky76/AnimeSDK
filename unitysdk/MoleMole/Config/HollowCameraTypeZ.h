#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraTypeZ_TypeDefinitionIndex = 85128;

	enum class HollowCameraTypeZ : ::System::Int32
	{
		LastZ = 2,
		DynamicZ = 0,
		FixedZ = 1,
	};
}
