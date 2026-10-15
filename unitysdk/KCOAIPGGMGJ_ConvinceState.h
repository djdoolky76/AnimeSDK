#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KCOAIPGGMGJ_ConvinceState_TypeDefinitionIndex = 60683;

	enum class KCOAIPGGMGJ_ConvinceState : ::System::Int32
	{
		Disable = 0,
		Init = 1,
		Start = 2,
		TurnBegin = 3,
		TurnOption = 4,
		TurnSkill = 5,
		TurnResult = 6,
		AllTurnEnd = 7,
	};
