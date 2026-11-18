#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherCommandFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarDitherDecisionFragment_TypeDefinitionIndex = 81758;

	struct alignas(4) FNPCCrowdAvatarDitherDecisionFragment
	{
		::System::Boolean Valid; // 0x10
		::System::Byte _padding0[0x3];
		::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags Flags; // 0x14
		::System::Boolean NewCollisionDither; // 0x18
	};
}
