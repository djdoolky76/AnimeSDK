#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 47893;

	enum class UpdateMode : ::System::Int32
	{
		FixFrame = 0,
		AutoFrame2D = 11,
		MovementCheck = 2,
		AutoFrame = 1,
		FixFrame2D = 10,
	};
}
