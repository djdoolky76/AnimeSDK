#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_ESlot_TypeDefinitionIndex = 57212;

	enum class CharacterOutfitComponent_ESlot : ::System::UInt64
	{
		None = 0,
		HeadDecor = 2048,
		Other = 18446744073709549567,
		All = 18446744073709551615,
	};
}
