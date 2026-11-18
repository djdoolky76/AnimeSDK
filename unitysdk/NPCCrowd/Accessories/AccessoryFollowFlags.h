#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int AccessoryFollowFlags_TypeDefinitionIndex = 72739;

	enum class AccessoryFollowFlags : ::System::Byte
	{
		None = 0,
		Scale = 4,
		Position = 1,
		OverrideSlotOffset = 16,
		Rotation = 2,
		RootOffset = 8,
	};
}
