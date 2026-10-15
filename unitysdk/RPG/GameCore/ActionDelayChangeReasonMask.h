#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayChangeReasonMask_TypeDefinitionIndex = 24737;

	enum class ActionDelayChangeReasonMask : ::System::UInt16
	{
		None = 0,
		All = 65535,
		Bit_Default = 1,
		Bit_Advance = 2,
		Bit_ActionEnd = 4,
		Bit_AllReset = 8,
		Bit_Link = 16,
		Bit_TaskReset = 32,
		Bit_ImmediateAction = 64,
		Bit_SpeedChange = 128,
		Mask_TurnBasedAdvance = 14,
	};
}
