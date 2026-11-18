#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCSpawnPointRuntime.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager_PopulationLimitCheckData.h"

class COCJHGGDBCA;
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPointGroup; }

#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x114DB230)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x114DB2D0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORVALID_OFFSET UNITYSDK_OFFSET(0x114DB280)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x114DB130)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x114DB320)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x114DAEA0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x114DB510)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x114DB520)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x114DB530)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnPointRuntimeForAttractor_TypeDefinitionIndex = 71841;

	class NPCSpawnPointRuntimeForAttractor : public ::NPCCrowd::NPCSpawnPointRuntime
	{
	public:
		::NPCCrowd::AI::AttractorRuntime* attractorRuntime; // 0xA0
		::System::Boolean attractorEnable; // 0xA8
		::System::Boolean infoValid; // 0xA9
		::System::Boolean attractorValid; // 0xAA
		::System::Byte _padding0[0x1];
		::System::Int32 attractorHandler; // 0xAC

		::System::Void _ctor(::NPCCrowd::AI::SpawnConfigForAttractor* config, ::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnConfigForAttractor*, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR__CTOR_OFFSET))(this, config, groupConfig);
		}

		::System::Boolean SpawnInfoValid(::System::Boolean useSpawnPointJobLockFreeRead, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData& populationLimitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNINFOVALID_OFFSET))(this, useSpawnPointJobLockFreeRead, populationLimitData);
		}

		::System::Boolean PathCountValid(::System::Boolean useSpawnPointJobLockFreeRead, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData& populationLimitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_PATHCOUNTVALID_OFFSET))(this, useSpawnPointJobLockFreeRead, populationLimitData);
		}

		::System::Void SetAttractorValid(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORVALID_OFFSET))(this, valid);
		}

		::System::Void SetAttractorEnable(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORENABLE_OFFSET))(this, valid);
		}

		::System::Boolean SpawnNPC(::COCJHGGDBCA*& npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNNPC_OFFSET))(this, npcComp);
		}

		::System::Boolean __base_PathCountValid(::System::Boolean P0, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_PATHCOUNTVALID_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_SpawnInfoValid(::System::Boolean P0, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNINFOVALID_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_SpawnNPC(::COCJHGGDBCA*& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNNPC_OFFSET))(this, P0);
		}
	};
}
