#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EFairyState_TypeDefinitionIndex = 10271;

	enum class EFairyState : ::System::Byte
	{
		Unlock = 0,
		Close = 1,
		EnumCount = 2,
	};
}
