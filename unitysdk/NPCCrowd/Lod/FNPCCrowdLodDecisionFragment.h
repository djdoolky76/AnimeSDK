#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int FNPCCrowdLodDecisionFragment_TypeDefinitionIndex = 46264;

	struct alignas(4) FNPCCrowdLodDecisionFragment
	{
		::System::Boolean valid; // 0x10
		::System::Boolean lodSystemEnabled; // 0x11
		::System::Boolean applyVisualLod; // 0x12
		::System::Boolean rendererMaterialsChanged; // 0x13
		::System::Boolean physicsLodChanged; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 oldLod; // 0x18
		::System::Int32 newLevel; // 0x1C
		::System::Int32 nextLodLevel; // 0x20
		::System::Int32 oldPhysicsLod; // 0x24
		::System::Int32 newPhysicsLod; // 0x28
	};
}
