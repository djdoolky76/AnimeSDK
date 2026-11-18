#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBubbleInsertType_TypeDefinitionIndex = 12399;

	enum class EBubbleInsertType : ::System::Int16
	{
		Duration = 3,
		None = 0,
		EnumCount = 4,
		End = 2,
		Begin = 1,
	};
}
