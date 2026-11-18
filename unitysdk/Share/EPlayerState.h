#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerState_TypeDefinitionIndex = 10040;

	enum class EPlayerState : ::System::Int16
	{
		Death = 1,
		Alive = 0,
		EnumCount = 2,
	};
}
