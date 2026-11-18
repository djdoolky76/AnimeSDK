#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKInputFragment_TypeDefinitionIndex = 43086;

	struct alignas(4) FNPCCrowdLookAtIKInputFragment
	{
		::System::Boolean Valid; // 0x10
		::System::Boolean AvatarEnabled; // 0x11
		::System::Boolean AnimationEnabled; // 0x12
		::System::Boolean DefaultConfigEnabled; // 0x13
		::System::Boolean IsPathNpc; // 0x14
		::System::Boolean ForceApply; // 0x15
		::System::Byte _padding0[0x2];
		::System::UInt32 EntityId; // 0x18
		::System::Int32 TagId; // 0x1C
		::System::Int32 OverrideType; // 0x20
		::System::Int32 OverrideParam; // 0x24
		::System::Int32 TraitType; // 0x28
	};
}
