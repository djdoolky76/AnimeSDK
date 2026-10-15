#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveCharacterStateMask_TypeDefinitionIndex = 24652;

	enum class SaveCharacterStateMask : ::System::UInt32
	{
		None = 0,
		All = 4294967295,
		HP = 1,
		SP = 2,
		Stance = 4,
		BP = 8,
		Status = 16,
	};
}
