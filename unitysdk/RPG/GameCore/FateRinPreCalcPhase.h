#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinPreCalcPhase_TypeDefinitionIndex = 55968;

	enum class FateRinPreCalcPhase : ::System::Byte
	{
		Begin = 0,
		LightTeamRecover = 1,
		LightTeamAttack = 2,
		DarkTeamRecover = 3,
		DarkTeamAttack = 4,
		HandDiscard = 5,
		End = 6,
		Count = 7,
	};
}
