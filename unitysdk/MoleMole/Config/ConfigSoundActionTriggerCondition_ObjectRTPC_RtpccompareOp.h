#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp_TypeDefinitionIndex = 58104;

	enum class ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp : ::System::Int32
	{
		LessThan = 3,
		GreaterThan = 1,
		LessThanOrEqual = 5,
		Equal = 2,
		GreaterThanOrEqual = 4,
		NotEqual = 6,
	};
}
