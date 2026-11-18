#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EndOfFramePhase_TypeDefinitionIndex = 8854;

	enum class EndOfFramePhase : ::System::Int32
	{
		UpdateTimestamp = 1,
		UpdateGameplayTag = 0,
		Count = 1,
	};
}
