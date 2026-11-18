#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnPointComponent_SpawnStyle.h"

#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xED545F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_TypeDefinitionIndex = 45810;

	class PathGraphSpawnPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::Single spawnInterval; // 0x10
		::System::Single spawnVarious; // 0x14
		::System::Boolean spawnDistanceLimit; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single minSpawnDistance; // 0x1C
		::System::Single maxSpawnDistance; // 0x20
		::System::Boolean spawnCountLimit; // 0x24
		::System::Byte _padding1[0x3];
		::System::Int32 maxSpawnCount; // 0x28
		::System::Boolean cameraFrustumLimit; // 0x2C
		::System::Byte _padding2[0x3];
		::NPCCrowd::AI::PathGraphSpawnPointComponent_SpawnStyle spawnStyle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
