#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::GPUPrefab { class MonoNPCCrowdGPUGroupController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_SPAWNEDGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F15F0)

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int GPUPrefabCrowdBenchmarkBehavior_SpawnedGroupInfo_TypeDefinitionIndex = 73805;

	class GPUPrefabCrowdBenchmarkBehavior_SpawnedGroupInfo : public ::System::Object
	{
	public:
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController* controller; // 0x10
		::System::String* sourceName; // 0x18
		::UnityEngine::GameObject* instanceRoot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_SPAWNEDGROUPINFO__CTOR_OFFSET))(this);
		}
	};
}
