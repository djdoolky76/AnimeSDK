#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnterBattleState_TypeDefinitionIndex = 88918;

	enum class EnterBattleState : ::System::Int32
	{
		Unknown = 99,
		Idle = 2,
		ExitBattle = 0,
		EnterBattle = 1,
	};
}
