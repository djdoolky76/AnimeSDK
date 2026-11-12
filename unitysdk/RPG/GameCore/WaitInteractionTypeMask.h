#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitInteractionTypeMask_TypeDefinitionIndex = 24944;

	enum class WaitInteractionTypeMask : ::System::UInt32
	{
		None = 0,
		All = 4294967295,
		TalkDialogueGraphBegin = 1,
		TriggerUIConfirm = 2,
		TriggerUIButtonConfirm = 4,
		OptionTriggered = 8,
		LookAtPhase = 16,
		BeHit = 32,
	};
}
