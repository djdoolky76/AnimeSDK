#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickingGroup_TypeDefinitionIndex = 8829;

	enum class ETickingGroup : ::System::Byte
	{
		Count = 7,
		LateUpdate = 5,
		PostLateUpdate = 6,
		None = 0,
		PostUpdate = 3,
		Update = 2,
		PreLateUpdate = 4,
		PreUpdate = 1,
	};
}
