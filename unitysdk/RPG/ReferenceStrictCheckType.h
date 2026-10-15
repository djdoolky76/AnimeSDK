#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int ReferenceStrictCheckType_TypeDefinitionIndex = 51714;

	enum class ReferenceStrictCheckType : ::System::Byte
	{
		AlwaysEnable = 0,
		OnlyEnableWhenDevelopment = 1,
		OnlyEnableInEditor = 2,
		AlwaysDisable = 3,
	};
}
