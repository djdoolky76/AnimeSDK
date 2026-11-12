#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterType_TypeDefinitionIndex = 18207;

	enum class RtBattleCharacterType : ::System::Int32
	{
		Normal = 0,
		Background = 1,
	};
}
