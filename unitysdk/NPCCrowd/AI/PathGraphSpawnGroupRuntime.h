#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphStateRuntime; }
namespace NPCCrowd::AI { class PopulationRuntime; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CHECKPATHFINDINGRESULT_OFFSET UNITYSDK_OFFSET(0xEE730D0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xEE725E0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xEE726D0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETTIME_OFFSET UNITYSDK_OFFSET(0xEE731E0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xEE725A0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_1_OFFSET UNITYSDK_OFFSET(0xEE73290)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_OFFSET UNITYSDK_OFFSET(0xEE73220)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_REMOVECROWDNPC_OFFSET UNITYSDK_OFFSET(0xEE72A40)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SETENABLED_OFFSET UNITYSDK_OFFSET(0xEE72680)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SPAWNCROWDNPC_OFFSET UNITYSDK_OFFSET(0xEE72760)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_STARTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xEE72B60)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE72620)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xEE732E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnGroupRuntime_TypeDefinitionIndex = 39037;

	class PathGraphSpawnGroupRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* FeaturePointRuntimeList; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* FeaturePointPathConfigList; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* FeaturePointConfigList; // 0x20
		::NPCCrowd::AI::PathGraphSpawnGroupConfig* Config; // 0x28
		::NPCCrowd::AI::PathGraphStateRuntime* StateRuntime; // 0x30
		::System::Boolean Enabled; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SETENABLED_OFFSET))(this, enabled);
		}

		::System::Int32 GetSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		static ::COCJHGGDBCA* SpawnCrowdNpc(::System::Int32 tag)
		{
			return ((::COCJHGGDBCA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SPAWNCROWDNPC_OFFSET))(tag);
		}

		static ::System::Void RemoveCrowdNpc(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_REMOVECROWDNPC_OFFSET))(npcComp);
		}

		static ::System::Void StartPathFollow(::COCJHGGDBCA* npcComp, ::System::String* movementStyle, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::NPCCrowd::AI::PopulationRuntime* populationRuntime)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::System::String*, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Int32, ::System::Single, ::NPCCrowd::AI::PopulationRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_STARTPATHFOLLOW_OFFSET))(npcComp, movementStyle, pathResult, laneIndex, laneInnerOffset, populationRuntime);
		}

		static ::System::Boolean CheckPathFindingResult(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CHECKPATHFINDINGRESULT_OFFSET))(pathResult, pathConfig);
		}

		static ::System::Single GetTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETTIME_OFFSET))();
		}

		static ::System::Single RandRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_OFFSET))(min, max);
		}

		static ::System::Int32 RandRange_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_1_OFFSET))(min, max);
		}
	};
}
