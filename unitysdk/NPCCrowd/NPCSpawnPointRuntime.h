#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnConfig.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_TeleportData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager_PopulationLimitCheckData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd { class SpawnRangeConfig; }
namespace NPCCrowd::AI { class FeaturePointPathRefList; }
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PopulationRuntime; }
namespace NPCCrowd::AI { class SpawnPoint; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System { class String; }

#define NPCCROWD_NPCSPAWNPOINTRUNTIME_CALCULATEDIRECTIONALOUTERVALID_OFFSET UNITYSDK_OFFSET(0xFD3BDF0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_CHECKPATHFINDINGRESULT_OFFSET UNITYSDK_OFFSET(0xFD3C580)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DEBUGSPAWNNPC_OFFSET UNITYSDK_OFFSET(0xFD3DCD0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONALOUTERVALIDCHECK_OFFSET UNITYSDK_OFFSET(0xFD3B900)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONVALID_OFFSET UNITYSDK_OFFSET(0xFD3ACE0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0xFD3A8B0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ENTERCD_OFFSET UNITYSDK_OFFSET(0xFD3C090)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0xFD3B3D0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPATHID_OFFSET UNITYSDK_OFFSET(0xFD3B320)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xFD3B360)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETROTATION_OFFSET UNITYSDK_OFFSET(0xFD3B460)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_BASEWEIGHT_OFFSET UNITYSDK_OFFSET(0xFD3A6E0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_ISGLOBALPERCENTWEIGHT_OFFSET UNITYSDK_OFFSET(0xFD3A6D0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_NEEDREFRESHDATA_OFFSET UNITYSDK_OFFSET(0xFD3B410)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xFD3A670)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_HASVALIDWEIGHT_OFFSET UNITYSDK_OFFSET(0xFD3B8A0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_HEIGHTVALID_OFFSET UNITYSDK_OFFSET(0xFD3AC40)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_INITVALIDRANGE_OFFSET UNITYSDK_OFFSET(0xFD3AEF0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ISINITPOINT_OFFSET UNITYSDK_OFFSET(0xFD3B2D0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ISPATHRESULTALLNODESENABLED_OFFSET UNITYSDK_OFFSET(0xFD3C690)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xFD3B260)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0xFD3AE20)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_PREINITTERRAINTYPE_OFFSET UNITYSDK_OFFSET(0xFD3E1B0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_RANGEVALID_OFFSET UNITYSDK_OFFSET(0xFD3ABE0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xFD3B420)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SETBLOCKED_OFFSET UNITYSDK_OFFSET(0xFD3B510)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SETCD_OFFSET UNITYSDK_OFFSET(0xFD3C120)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SETRUNTIMEWEIGHT_OFFSET UNITYSDK_OFFSET(0xFD3A6F0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SHOULDENABLEDIRECTIONALOUTERVALIDCHECK_OFFSET UNITYSDK_OFFSET(0xFD3BCA0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SNAPTOLANESEGMENT_OFFSET UNITYSDK_OFFSET(0xFD3E3B0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCHECK_OFFSET UNITYSDK_OFFSET(0xFD3B9A0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCROWDNPC_OFFSET UNITYSDK_OFFSET(0xFD3CCC0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0xFD3A950)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0xFD3C710)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_STARTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xFD3CFB0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_TELEPORTPATHFOLLOWPOINT_OFFSET UNITYSDK_OFFSET(0xFD3D510)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_TOTALRANGEVALID_OFFSET UNITYSDK_OFFSET(0xFD3AB50)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_TRYGETAVAILABLEFIXEDROUTE_OFFSET UNITYSDK_OFFSET(0xFD3C180)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_UPDATEVALID_OFFSET UNITYSDK_OFFSET(0xFD3B560)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD3E610)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFD3A760)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xFD3A750)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnPointRuntime_TypeDefinitionIndex = 60396;

	class NPCSpawnPointRuntime : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_UseSpawnPointJobLockFreeRead()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCSpawnPointRuntime_TypeDefinitionIndex)->GetStaticField(0x13C90);
		}
		// static const ::System::Single DirectionalCheckInterval; // 0x0
		::NPCCrowd::AI::FeaturePointPathRefList* pathList; // 0x10
		::NPCCrowd::AI::PopulationRuntime* populationRuntime; // 0x18
		::NPCCrowd::SpawnRangeConfig* rangeConfig; // 0x20
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* distanceCallback; // 0x28
		::NPCCrowd::AI::SpawnPoint* Config; // 0x30
		::System::Int32 nativeIndex; // 0x38
		::System::Single directionalCheckTimer; // 0x3C
		::System::Int32 pathID; // 0x40
		::NPCCrowd::AI::SpawnConfig SpawnConfig; // 0x44
		::System::Boolean outerValid; // 0x68
		::System::Boolean valid; // 0x69
		::System::Boolean populationInited; // 0x6A
		::System::Boolean directionalCheckCached; // 0x6B
		::System::Int32 distanceHandler; // 0x6C
		::System::Boolean blocked; // 0x70
		::System::Boolean innerValid; // 0x71
		::System::Byte _padding0[0x2];
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData; // 0x74
		::System::Single validHeightDiff; // 0x94
		::System::Single spawnCD; // 0x98
		::System::Single runtimeWeight; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPCCrowd::AI::SpawnPoint* config, ::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPoint*, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_1_OFFSET))(this, config, groupConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME__CCTOR_OFFSET))();
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_WEIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsGlobalPercentWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_ISGLOBALPERCENTWEIGHT_OFFSET))(this);
		}

		::System::Single get_BaseWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_BASEWEIGHT_OFFSET))(this);
		}

		::System::Void SetRuntimeWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SETRUNTIMEWEIGHT_OFFSET))(this, weight);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Boolean SpawnInfoValid(::System::Boolean useSpawnPointJobLockFreeRead, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData& populationLimitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNINFOVALID_OFFSET))(this, useSpawnPointJobLockFreeRead, populationLimitData);
		}

		::System::Boolean TotalRangeValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_TOTALRANGEVALID_OFFSET))(this);
		}

		::System::Boolean RangeValid(::System::Boolean updateInit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_RANGEVALID_OFFSET))(this, updateInit);
		}

		::System::Boolean HeightValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_HEIGHTVALID_OFFSET))(this);
		}

		::System::Boolean DirectionValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONVALID_OFFSET))(this);
		}

		::System::Boolean PathCountValid(::System::Boolean useSpawnPointJobLockFreeRead, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData& populationLimitData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_PATHCOUNTVALID_OFFSET))(this, useSpawnPointJobLockFreeRead, populationLimitData);
		}

		::System::Void InitValidRange(::NPCCrowd::SpawnRangeConfig* rangeConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::SpawnRangeConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_INITVALIDRANGE_OFFSET))(this, rangeConfig);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean IsInitPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ISINITPOINT_OFFSET))(this);
		}

		::System::Int32 GetPathID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPATHID_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPOSITION_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETMOVEMENTMAG_OFFSET))(this);
		}

		::System::Boolean get_NeedRefreshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_NEEDREFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_REFRESHDATA_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETROTATION_OFFSET))(this);
		}

		::System::Void SetBlocked(::System::Boolean blocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SETBLOCKED_OFFSET))(this, blocked);
		}

		::System::Boolean UpdateValid(::System::Single deltaTime, ::System::Boolean updateInit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_UPDATEVALID_OFFSET))(this, deltaTime, updateInit);
		}

		::System::Boolean HasValidWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_HASVALIDWEIGHT_OFFSET))(this);
		}

		::System::Boolean DirectionalOuterValidCheck(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONALOUTERVALIDCHECK_OFFSET))(this, deltaTime);
		}

		::System::Boolean ShouldEnableDirectionalOuterValidCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SHOULDENABLEDIRECTIONALOUTERVALIDCHECK_OFFSET))(this);
		}

		::System::Boolean CalculateDirectionalOuterValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_CALCULATEDIRECTIONALOUTERVALID_OFFSET))(this);
		}

		::System::Boolean SpawnCheck(::System::Boolean useSpawnPointJobLockFreeRead)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCHECK_OFFSET))(this, useSpawnPointJobLockFreeRead);
		}

		::System::Void EnterCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ENTERCD_OFFSET))(this);
		}

		::System::Void SetCD(::System::Single cd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SETCD_OFFSET))(this, cd);
		}

		::System::Boolean TryGetAvailableFixedRoute(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*& selectedPathResult)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_TRYGETAVAILABLEFIXEDROUTE_OFFSET))(this, selectedPathResult);
		}

		static ::System::Boolean IsPathResultAllNodesEnabled(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ISPATHRESULTALLNODESENABLED_OFFSET))(pathResult);
		}

		::System::Boolean SpawnNPC(::COCJHGGDBCA*& npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNNPC_OFFSET))(this, npcComp);
		}

		::System::Boolean DebugSpawnNPC(::UnityEngine::Vector3 position, ::COCJHGGDBCA*& npcComp, ::System::Int32 overrideAvatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::COCJHGGDBCA*&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DEBUGSPAWNNPC_OFFSET))(this, position, npcComp, overrideAvatarID);
		}

		static ::COCJHGGDBCA* SpawnCrowdNpc(::System::Int32 tag, ::System::Int32 populationID, ::Foundation::Unreal::FGameplayTagQuery* blackTagQuery, ::System::Int32 overrideAvatarParamID)
		{
			return ((::COCJHGGDBCA*(*)(::System::Int32, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCROWDNPC_OFFSET))(tag, populationID, blackTagQuery, overrideAvatarParamID);
		}

		::System::Void TeleportPathFollowPoint(::COCJHGGDBCA* npcComp, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_TELEPORTPATHFOLLOWPOINT_OFFSET))(this, npcComp, teleportData);
		}

		static ::System::Void PreInitTerrainType(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Int32 pathID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_PREINITTERRAINTYPE_OFFSET))(pathFollow, pathID);
		}

		static ::UnityEngine::Vector3 SnapToLaneSegment(::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SNAPTOLANESEGMENT_OFFSET))(teleportData, pathFollow);
		}

		static ::System::Void StartPathFollow(::COCJHGGDBCA* npcComp, ::System::String* movementStyle, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Int32 pathID, ::NPCCrowd::AI::PopulationRuntime* populationRuntime)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::System::String*, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Int32, ::System::Single, ::System::Int32, ::NPCCrowd::AI::PopulationRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_STARTPATHFOLLOW_OFFSET))(npcComp, movementStyle, pathResult, laneIndex, laneInnerOffset, pathID, populationRuntime);
		}

		static ::System::Boolean CheckPathFindingResult(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_CHECKPATHFINDINGRESULT_OFFSET))(pathResult, pathConfig);
		}
	};
}
