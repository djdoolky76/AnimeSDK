#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MPJFIPNGENE_WorkProcessResult_TypeDefinitionIndex = 44030;

	enum class MPJFIPNGENE_WorkProcessResult : ::System::Int32
	{
		Blocked = 0,
		InProgress = 1,
		QueuedOnWorkerThread = 2,
		Finished = 3,
	};
