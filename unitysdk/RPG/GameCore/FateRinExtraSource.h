#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinExtraSource_TypeDefinitionIndex = 57170;

	enum class FateRinExtraSource : ::System::Byte
	{
		Self = 0,
		Attacker = 1,
		Count = 2,
	};
}
