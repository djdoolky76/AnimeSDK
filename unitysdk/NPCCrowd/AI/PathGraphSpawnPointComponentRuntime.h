#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponentRuntime.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphSpawnPointComponent; }
namespace NPCCrowd::AI { class PathGraphSplineLaneLocatorComponent; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xED54720)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ENABLESPAWN_OFFSET UNITYSDK_OFFSET(0xED54970)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_GET_ISIDLE_OFFSET UNITYSDK_OFFSET(0xED549C0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xED54600)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINAVATARDISTANCERANGE_OFFSET UNITYSDK_OFFSET(0xED54E20)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINMAINCAMERAFRUSTUM_OFFSET UNITYSDK_OFFSET(0xED54FC0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_PROCESSLIMITCONDITIONS_OFFSET UNITYSDK_OFFSET(0xED54B40)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_REMOVESPAWNEDNPC_OFFSET UNITYSDK_OFFSET(0xED54DC0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xED54C50)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNQUEUED_OFFSET UNITYSDK_OFFSET(0xED54A20)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATESPAWNQUEUE_OFFSET UNITYSDK_OFFSET(0xED54870)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xED54810)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xED55080)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xED550E0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xED55170)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xED55200)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponentRuntime_TypeDefinitionIndex = 62208;

	class PathGraphSpawnPointComponentRuntime : public ::NPCCrowd::AI::PathGraphFeaturePointComponentRuntime
	{
	public:
		::NPCCrowd::AI::PathGraphSpawnPointComponent* _config; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _spawnedTags; // 0x20
		::NPCCrowd::AI::PathGraphSplineLaneLocatorComponent* _locator; // 0x28
		::System::Collections::Generic::Queue_1<::System::Object*>* _spawnQueue; // 0x30
		::System::Single _leftTimeToSpawn; // 0x38
		::System::Boolean _enableSpawn; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void EnableSpawn(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ENABLESPAWN_OFFSET))(this, enabled);
		}

		::System::Boolean get_IsIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_GET_ISIDLE_OFFSET))(this);
		}

		::System::Void SpawnQueued(::System::Int32 tagID, ::System::Action_2<::System::Int32, ::System::Int32>* spawnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNQUEUED_OFFSET))(this, tagID, spawnCallback);
		}

		::System::Void SpawnImmediately(::System::Int32 tagID, ::System::Action_2<::System::Int32, ::System::Int32>* spawnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNIMMEDIATELY_OFFSET))(this, tagID, spawnCallback);
		}

		::System::Void RemoveSpawnedNpc(::System::Int32 tagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_REMOVESPAWNEDNPC_OFFSET))(this, tagID);
		}

		::System::Void UpdateSpawnQueue(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATESPAWNQUEUE_OFFSET))(this, deltaTime);
		}

		::System::Boolean ProcessLimitConditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_PROCESSLIMITCONDITIONS_OFFSET))(this);
		}

		static ::System::Boolean IsInMainCameraFrustum(::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINMAINCAMERAFRUSTUM_OFFSET))(position);
		}

		static ::System::Boolean IsInAvatarDistanceRange(::UnityEngine::Vector3 position, ::System::Single minDistance, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINAVATARDISTANCERANGE_OFFSET))(position, minDistance, maxDistance);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
