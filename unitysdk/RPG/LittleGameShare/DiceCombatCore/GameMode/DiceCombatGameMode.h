#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore::GameMode
{
	inline static constexpr unsigned int DiceCombatGameMode_TypeDefinitionIndex = 36541;

	enum class DiceCombatGameMode : ::System::Byte
	{
		OneVSOne = 0,
		TwoVsOne = 1,
	};
}
