#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/BB448E60290AC08C.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ABC::UI
{
	inline static constexpr unsigned int ButtonAudioEventTrigger_TypeDefinitionIndex = 7233;

	struct alignas(8) ButtonAudioEventTrigger
	{
		::B39AAAD1233537D7::BB448E60290AC08C JudgeTimeType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* InteractableEvent; // 0x18
		::System::String* UnInteractableEvent; // 0x20
	};
}
