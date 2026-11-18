#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKCommandType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKDecisionFragment_TypeDefinitionIndex = 85553;

	struct alignas(4) FNPCCrowdLookAtIKDecisionFragment
	{
		::System::Boolean Valid; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 DesiredType; // 0x14
		::System::Int32 DesiredParam; // 0x18
		::System::Int32 TargetGeneration; // 0x1C
		::NPCCrowd::Animation::FNPCCrowdLookAtIKCommandType CommandType; // 0x20
		::System::Boolean HasCommand; // 0x21
	};
}
