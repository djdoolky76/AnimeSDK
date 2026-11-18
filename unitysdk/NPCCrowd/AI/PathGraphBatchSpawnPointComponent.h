#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB0E70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointComponent_TypeDefinitionIndex = 81278;

	class PathGraphBatchSpawnPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* availableSpawnSlots; // 0x10
		::System::Boolean spawnDistanceLimit; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single minSpawnDistance; // 0x1C
		::System::Single maxSpawnDistance; // 0x20
		::System::Boolean spawnCountLimit; // 0x24
		::System::Byte _padding1[0x3];
		::System::Int32 maxSpawnCount; // 0x28
		::System::Boolean cameraFrustumLimit; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
