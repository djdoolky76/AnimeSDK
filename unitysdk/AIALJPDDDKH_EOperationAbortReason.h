#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AIALJPDDDKH_EOperationAbortReason_TypeDefinitionIndex = 58987;

	enum class AIALJPDDDKH_EOperationAbortReason : ::System::Int32
	{
		None = 0,
		TurnMissed = 1,
		PendingMissed = 2,
	};
