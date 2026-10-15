#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EBJBACDPFOF_SuperEventState_TypeDefinitionIndex = 77258;

	enum class EBJBACDPFOF_SuperEventState : ::System::Int32
	{
		Unknown = 0,
		Ordered = 1,
		Prepare = 2,
		Countdown = 3,
		Started = 4,
		Finish = 5,
	};
