#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x115B2DF0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointConfig_TypeDefinitionIndex = 57895;

	class PathGraphBatchSpawnPointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* availableSpawnSlots; // 0x48
		::System::Boolean spawnDistanceLimit; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single minSpawnDistance; // 0x54
		::System::Single maxSpawnDistance; // 0x58
		::System::Boolean spawnCountLimit; // 0x5C
		::System::Byte _padding1[0x3];
		::System::Int32 maxSpawnCount; // 0x60
		::System::Boolean cameraFrustumLimit; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
