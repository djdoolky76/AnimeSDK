#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeVisible_TypeDefinitionIndex = 9324;

	enum class ENodeVisible : ::System::Int16
	{
		EnumCount = 6,
		TemporaryVisibleAtAround = 4,
		Visible = 1,
		VisibleByTriggerEvent = 3,
		Blocked = 5,
		VisibleAtGridAround = 2,
		All = 0,
	};
}
