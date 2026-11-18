#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherCommandFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarDitherCommand_TypeDefinitionIndex = 90943;

	struct alignas(4) FNPCCrowdAvatarDitherCommand
	{
		::System::Int32 CrowdIndex; // 0x10
		::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags Flags; // 0x14
	};
}
