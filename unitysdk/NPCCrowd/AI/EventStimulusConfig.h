#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class EventStimulusItem; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EventStimulusConfig_TypeDefinitionIndex = 50097;

	struct alignas(8) EventStimulusConfig
	{
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::NPCCrowd::AI::EventStimulusItem* eventStimulus; // 0x18
	};
}
