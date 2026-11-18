#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityType_TypeDefinitionIndex = 38773;

	enum class ChessEntityType : ::System::Int32
	{
		DefenseSceneAntivirus = 4,
		RedAlert = 2,
		DefenseSceneVirus = 3,
		Coin = 0,
		RedBlock = 1,
		DefenseSceneTrap = 5,
		Normal = 6,
	};
}
