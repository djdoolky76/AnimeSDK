#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
namespace NPCCrowd { class NPCSpawnPointRuntime; }
namespace NPCCrowd { class SpawnRangeConfig; }

#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNEDNPCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB02E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_SpawnedNpcInfo_TypeDefinitionIndex = 43260;

	class NPCCrowdSpawnManager_SpawnedNpcInfo : public ::System::Object
	{
	public:
		::NPCCrowd::SpawnRangeConfig* SpawnRangeConfig; // 0x10
		::NPCCrowd::NPCSpawnPointRuntime* SpawnPoint; // 0x18
		::COCJHGGDBCA* NpcComp; // 0x20
		::System::Single timer; // 0x28
		::System::Boolean startFade; // 0x2C
		::System::Boolean outRange; // 0x2D
		::System::Boolean pendingOutRangeWait; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Int32 pendingOutRangeNodeID; // 0x30
		::System::Int32 GraphID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNEDNPCINFO__CTOR_OFFSET))(this);
		}
	};
}
