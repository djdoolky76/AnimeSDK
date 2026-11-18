#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_EventType_TypeDefinitionIndex = 53254;

	enum class ConfigChessboardTriggerEventNode_EventType : ::System::Int32
	{
		PerformEvent = 0,
		SwitchEvent = 1,
		CustomEvent = 2,
	};
}
