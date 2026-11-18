#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKAppliedState_TypeDefinitionIndex = 81378;

	struct alignas(4) FNPCCrowdLookAtIKAppliedState
	{
		::System::Boolean HasTarget; // 0x10
		::System::Boolean Resolved; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 TargetType; // 0x14
		::System::Int32 TargetParam; // 0x18
		::System::Int32 TargetGeneration; // 0x1C
	};
}
