#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimAssistEscapeConfig_TypeDefinitionIndex = 70537;

	struct alignas(4) CharacterAimAssistEscapeConfig
	{
		::System::Boolean enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single timeWindow; // 0x14
		::System::Single inputThreshold; // 0x18
		::System::Single cooldownDuration; // 0x1C
	};
}
