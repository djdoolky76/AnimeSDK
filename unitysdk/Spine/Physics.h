#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int Physics_TypeDefinitionIndex = 33039;

	enum class Physics : ::System::Int32
	{
		None = 0,
		Reset = 1,
		Update = 2,
		Pose = 3,
	};
}
