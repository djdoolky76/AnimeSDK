#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IBNBMCJIGID_TypeDefinitionIndex = 94006;

enum class IBNBMCJIGID : ::System::Int32
{
	NotStarted = 0,
	EndBattleSimulation = 2,
	InBattleSimulation = 1,
	EndBattleRealWorldTime = 3,
};
