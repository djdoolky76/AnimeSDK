#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int FNPCCrowdLodFragment_TypeDefinitionIndex = 73981;

	struct alignas(4) FNPCCrowdLodFragment
	{
		::System::Boolean IsUsing; // 0x10
		::System::Boolean LodSystemEnabled; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 VisualDistanceLodIndex; // 0x14
		::System::Int32 PhysicsDistanceLodIndex; // 0x18
		::System::Int32 CurrentLod; // 0x1C
		::System::Int32 NextLod; // 0x20
		::System::Int32 ForceLod; // 0x24
		::System::Int32 PhysicsLod; // 0x28
		::System::Boolean OverrideHide; // 0x2C
	};
}
