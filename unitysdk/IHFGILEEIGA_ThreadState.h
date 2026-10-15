#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IHFGILEEIGA_ThreadState_TypeDefinitionIndex = 59571;

	enum class IHFGILEEIGA_ThreadState : ::System::Int32
	{
		None = 0,
		Stopping = 1,
		UserRetrying = 2,
		Running = 3,
		Success = 4,
		Failed = 5,
		Abort = 6,
	};
