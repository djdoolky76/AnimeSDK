#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseButtonTrigger_TypeDefinitionIndex = 56352;

	enum class ConfigLevelResultPerforms_LoseButtonTrigger : ::System::Int32
	{
		Analyze = 3,
		Replay = 2,
		Retreat = 0,
		Rewind = 1,
		StartCount = 5,
		CountDown_Tick = 6,
		Init = 4,
		CountDown_TimeOut = 7,
	};
}
