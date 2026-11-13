#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KBDBCACNCJF_WaitState_TypeDefinitionIndex = 54256;

	enum class KBDBCACNCJF_WaitState : ::System::Int32
	{
		None = 0,
		WaitIdentifyFinish = 1,
		WaitPreviewFinish = 2,
		Finish = 3,
	};
