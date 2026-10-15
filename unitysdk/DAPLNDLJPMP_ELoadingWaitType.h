#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DAPLNDLJPMP_ELoadingWaitType_TypeDefinitionIndex = 59687;

	enum class DAPLNDLJPMP_ELoadingWaitType : ::System::Int32
	{
		None = 0,
		EnterBattle = 1,
		EnterAdventure = 2,
		RestartBattle = 3,
		Default = 4,
	};
