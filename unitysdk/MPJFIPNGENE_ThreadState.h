#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MPJFIPNGENE_ThreadState_TypeDefinitionIndex = 44023;

	enum class MPJFIPNGENE_ThreadState : ::System::Int32
	{
		Uninitialized = 0,
		Initializing = 1,
		Idle = 2,
		Busy = 3,
		Finished = 4,
	};
