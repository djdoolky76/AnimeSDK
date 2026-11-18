#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamProperty_TypeDefinitionIndex = 65649;

	enum class TeamProperty : ::System::Int32
	{
		MaxEtherInfectionValue = 2,
		CurEtherInfectionValue = 1,
		BattleFieldErosionDelta = 4,
		EtherInfectionRecover = 3,
		Fever = 0,
		BattleFieldErosionDeltaMax = 5,
	};
}
