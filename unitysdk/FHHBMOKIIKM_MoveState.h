#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FHHBMOKIIKM_MoveState_TypeDefinitionIndex = 53608;

	enum class FHHBMOKIIKM_MoveState : ::System::Int32
	{
		Idle = 0,
		Moving = 1,
		WaitStop = 2,
		Stopping = 3,
	};
