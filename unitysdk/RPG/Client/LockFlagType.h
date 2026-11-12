#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LockFlagType_TypeDefinitionIndex = 10190;

	enum class LockFlagType : ::System::Int32
	{
		Count = 0,
		OnOff = 1,
	};
}
