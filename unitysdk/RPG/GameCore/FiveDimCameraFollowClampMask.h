#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraFollowClampMask_TypeDefinitionIndex = 18614;

	enum class FiveDimCameraFollowClampMask : ::System::UInt32
	{
		None = 0,
		Left = 1,
		Down = 2,
		Right = 4,
		Up = 8,
	};
}
