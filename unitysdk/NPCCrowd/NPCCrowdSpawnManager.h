#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/NPCCrowd/NPCCrowdSpawnManager_CrowdPoolKey.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCCrowdSpawnManager_SpawnedNpcInfo; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCPathGraphManager; }
namespace NPCCrowd { class NPCSpawnConfigSO; }
namespace NPCCrowd { class NPCSpawnPointRuntime; }
namespace NPCCrowd { class SpawnRangeConfig; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPoint; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDSPAWNMANAGER_ADDROADCROWDENTITY_OFFSET UNITYSDK_OFFSET(0x14F35170)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ADDSPAWNEDNPC_OFFSET UNITYSDK_OFFSET(0x14F38400)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODERECYCLESTATE_OFFSET UNITYSDK_OFFSET(0x14F33ED0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODEREUSESTATE_OFFSET UNITYSDK_OFFSET(0x14F33330)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYNPCLIMITRATIO_OFFSET UNITYSDK_OFFSET(0x14F35490)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_BEGINPOINTJOBREADPHASE_OFFSET UNITYSDK_OFFSET(0x14F3BF90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKDESPAWN_OFFSET UNITYSDK_OFFSET(0x14F378A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWNINFODESPAWN_OFFSET UNITYSDK_OFFSET(0x14F396E0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWN_OFFSET UNITYSDK_OFFSET(0x14F38080)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CLEARPOOLONSECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x14F32800)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x14F364A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_COMPLETEPOINTJOB_OFFSET UNITYSDK_OFFSET(0x14F37650)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DEBUGSPAWNNPCATPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x14F3AB80)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DELAYDESPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x14F39070)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_1_OFFSET UNITYSDK_OFFSET(0x14F391B0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_OFFSET UNITYSDK_OFFSET(0x14F39150)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0x14F3A200)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ENABLESPAWN_OFFSET UNITYSDK_OFFSET(0x14F35620)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ENSURESPAWNEDARRAYCAPACITY_OFFSET UNITYSDK_OFFSET(0x14F3C070)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_EVICTLEASTRECENTLYUSEDPOOL_OFFSET UNITYSDK_OFFSET(0x14F34220)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_FORCEDESTROYPOOLEDENTITY_OFFSET UNITYSDK_OFFSET(0x14F33790)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0x14F38360)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNINFO_OFFSET UNITYSDK_OFFSET(0x14F38250)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINTSBYPATH_OFFSET UNITYSDK_OFFSET(0x14F3BEB0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F3BDA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNRANGECONFIG_OFFSET UNITYSDK_OFFSET(0x14F39D50)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETVALIDSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F38750)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GET_CURRENTCROWDCOUNT_OFFSET UNITYSDK_OFFSET(0x14F35430)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x14F352B0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x14F35C90)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISDELAYDESPAWNPATHNODE_OFFSET UNITYSDK_OFFSET(0x14F39BB0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISPOOLOPTIMIZATIONENABLED_OFFSET UNITYSDK_OFFSET(0x14F32700)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISREPEATABLEAVATARID_OFFSET UNITYSDK_OFFSET(0x14F331D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ISVALIDPOOLEDNPC_OFFSET UNITYSDK_OFFSET(0x14F33290)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_MERGEPOINTVALIDRESULTS_OFFSET UNITYSDK_OFFSET(0x14F37750)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYADD_OFFSET UNITYSDK_OFFSET(0x14F3A0A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x14F34BF0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14F35FC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONPATHLIMITCHANGED_OFFSET UNITYSDK_OFFSET(0x14F39ED0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x14F357F0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x14F356B0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x14F36BA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHDELAYDESPAWNPATHNODECACHE_OFFSET UNITYSDK_OFFSET(0x14F35E10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHPOOLOPTIMIZATIONSWITCH_OFFSET UNITYSDK_OFFSET(0x14F32750)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERATTRACTORSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F3B0C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERPATHSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F3B300)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F3B560)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_RELEASEPOPULATIONUSAGE_OFFSET UNITYSDK_OFFSET(0x14F34E10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLBYKEY_OFFSET UNITYSDK_OFFSET(0x14F34680)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x14F345C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEROADCROWDENTITY_OFFSET UNITYSDK_OFFSET(0x14F34F50)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_RESETFADESTATE_OFFSET UNITYSDK_OFFSET(0x14F35080)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_RESETPATHGRAPHSTATEFORRECYCLE_OFFSET UNITYSDK_OFFSET(0x14F34A40)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SETABILITYUSINGSTATE_OFFSET UNITYSDK_OFFSET(0x14F348C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SETSPAWNPOINTBLOCKED_OFFSET UNITYSDK_OFFSET(0x14F3BC60)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDQUEUEFADEFOROUTRANGE_OFFSET UNITYSDK_OFFSET(0x14F39AB0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x14F35530)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNINITNPC_OFFSET UNITYSDK_OFFSET(0x14F3A4B0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x14F38940)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x14F38DD0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYACQUIREPOOLEDCROWDENTITY_OFFSET UNITYSDK_OFFSET(0x14F32E10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYGETSPAWNNPCINFO_OFFSET UNITYSDK_OFFSET(0x14F3A0F0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYQUEUEFADE_OFFSET UNITYSDK_OFFSET(0x14F39980)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYRECYCLETOPOOLLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x14F33B20)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYSPAWNNPC_OFFSET UNITYSDK_OFFSET(0x14F39C20)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERPATHSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F3BAC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x14F3B800)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEDESPAWN_OFFSET UNITYSDK_OFFSET(0x14F37060)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEGLOBALPERCENTPOINTWEIGHTS_OFFSET UNITYSDK_OFFSET(0x14F37CB0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTVALID_OFFSET UNITYSDK_OFFSET(0x14F36D10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F374D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0x14F34550)
#define NPCCROWD_NPCCROWDSPAWNMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F3C710)
#define NPCCROWD_NPCCROWDSPAWNMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3C1C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x14F3C790)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14F3C820)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x14F3C8B0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x14F3C940)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x14F3C9E0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F3CA70)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_TypeDefinitionIndex = 43256;

	class NPCCrowdSpawnManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_SpawnConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x49100);
		}
		static ::System::Collections::Generic::IComparer_1<::System::Object*>** StaticGet_s_farthestDespawnCandidateComparer()
		{
			return (::System::Collections::Generic::IComparer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x49108);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x49110);
		}
		static ::System::Single* StaticGet_GlobalSpawnInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x110D0);
		}
		static ::System::Single* StaticGet_NPCLimitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x110D4);
		}
		static ::System::Boolean* StaticGet_DebugSpawnAtPlayerOnInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x110D8);
		}
		static ::System::Boolean* StaticGet_enableSpawn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x110D9);
		}
		static ::System::Boolean* StaticGet_SpawnPointNoLimit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x110DA);
		}
		// static const ::System::String* FadeDitherKey; // 0x0
		// static const ::System::Int32 MAX_NPCCROWD_COUNT = 0xFA; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCSpawnPointRuntime*>* allSpawnPointRuntimes; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* _delayDespawnPathNodeIDSet; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* delayDespawnIDs; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>*>* _pathID2SpawnPoints; // 0x30
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* distanceCallback; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _emptyPoolKeysCache; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* validNPCSpawnPoints; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>* _poolKeyLastUsedTime; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* _farthestDespawnCandidates; // 0x58
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* delayFadeIDs; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* allSpawnPointRuntimesCache; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _spawnedNpcListCache; // 0x78
		::MoleMole::Config::CharacterFadeDitheringDataV2 ditherData; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::COCJHGGDBCA*>*>* _crowdEntityPool; // 0xA8
		::NPCCrowd::NPCPathGraphManager* _pointJobReadPathGraphManager; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* entityID2Handler; // 0xB8
		::NPCCrowd::NPCSpawnConfigSO* _configSO; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _spawnedNpcList; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _pooledStateTreeIndexBackup; // 0xD0
		::Unity::Jobs::JobHandle _despawnJobHandle; // 0xD8
		::System::Single validPointWeight; // 0xE8
		::System::Byte _padding0[0x4];
		::Unity::Collections::NativeList_1<::System::Int32> spawnPointValidIndices; // 0xF0
		::System::Byte _padding1[0x8];
		::System::Boolean _isPoolOptimizationEnabled; // 0x100
		::System::Byte _padding2[0x3];
		::System::Single _spawnTimer; // 0x104
		::Unity::Jobs::JobHandle _pointJobHandle; // 0x108
		::Unity::Collections::NativeArray_1<::System::UInt32> _spawnedNpcArray; // 0x118
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> spawnPointKey; // 0x128
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> _spawnedPathNodeIDArray; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean IsPoolOptimizationEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISPOOLOPTIMIZATIONENABLED_OFFSET))(this);
		}

		::System::Void RefreshPoolOptimizationSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHPOOLOPTIMIZATIONSWITCH_OFFSET))(this);
		}

		::System::Boolean TryAcquirePooledCrowdEntity(::System::Int32 tagID, ::System::Int32 avatarID, ::COCJHGGDBCA*& npcComp, ::System::Int32 populationID, ::System::Boolean onlyRepeatable)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::COCJHGGDBCA*&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYACQUIREPOOLEDCROWDENTITY_OFFSET))(this, tagID, avatarID, npcComp, populationID, onlyRepeatable);
		}

		::System::Boolean TryRecycleToPoolLightMode(::COCJHGGDBCA* npcComp, ::System::Boolean onlyRepeatable)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYRECYCLETOPOOLLIGHTMODE_OFFSET))(this, npcComp, onlyRepeatable);
		}

		::System::Void ClearPoolOnSectionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CLEARPOOLONSECTIONCHANGE_OFFSET))(this);
		}

		::System::Void RemoveEntityFromPoolOnEntityRemove(::COCJHGGDBCA* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLONENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Boolean RemoveEntityFromPoolByKey(::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey key, ::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_CrowdPoolKey, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEENTITYFROMPOOLBYKEY_OFFSET))(this, key, entityID);
		}

		::System::Void EvictLeastRecentlyUsedPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_EVICTLEASTRECENTLYUSEDPOOL_OFFSET))(this);
		}

		static ::System::Boolean IsRepeatableAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISREPEATABLEAVATARID_OFFSET))(avatarID);
		}

		static ::System::Boolean IsValidPooledNpc(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISVALIDPOOLEDNPC_OFFSET))(npcComp);
		}

		::System::Boolean ApplyLightModeRecycleState(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODERECYCLESTATE_OFFSET))(this, npcComp);
		}

		::System::Boolean ApplyLightModeReuseState(::COCJHGGDBCA* npcComp, ::System::Int32 populationID, ::System::Int32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYLIGHTMODEREUSESTATE_OFFSET))(this, npcComp, populationID, avatarID);
		}

		::System::Boolean SetAbilityUsingState(::COCJHGGDBCA* npcComp, ::System::Boolean isUsing)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SETABILITYUSINGSTATE_OFFSET))(this, npcComp, isUsing);
		}

		static ::System::Void ReleasePopulationUsage(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_RELEASEPOPULATIONUSAGE_OFFSET))(npcComp);
		}

		static ::System::Void ResetFadeState(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_RESETFADESTATE_OFFSET))(npcComp);
		}

		static ::System::Void ResetPathGraphStateForRecycle(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_RESETPATHGRAPHSTATEFORRECYCLE_OFFSET))(npcComp);
		}

		static ::System::Void RemoveRoadCrowdEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REMOVEROADCROWDENTITY_OFFSET))(entity);
		}

		static ::System::Void AddRoadCrowdEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ADDROADCROWDENTITY_OFFSET))(entity);
		}

		::System::Void ForceDestroyPooledEntity(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_FORCEDESTROYPOOLEDENTITY_OFFSET))(this, npcComp);
		}

		static ::NPCCrowd::NPCCrowdSpawnManager* Get()
		{
			return ((::NPCCrowd::NPCCrowdSpawnManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GET_OFFSET))();
		}

		::System::Int32 get_CurrentCrowdCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GET_CURRENTCROWDCOUNT_OFFSET))(this);
		}

		static ::System::Int32 ApplyNPCLimitRatio(::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_APPLYNPCLIMITRATIO_OFFSET))(count);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void EnableSpawn(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ENABLESPAWN_OFFSET))(this, enable);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean GetSpawnInfo(::System::UInt32 entityID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNINFO_OFFSET))(this, entityID, info);
		}

		::System::Int32 GetSpawnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void AddSpawnedNPC(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ADDSPAWNEDNPC_OFFSET))(this, entityID);
		}

		::System::Void CheckSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWN_OFFSET))(this);
		}

		::System::Void CheckDespawn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKDESPAWN_OFFSET))(this, deltaTime);
		}

		::System::Void DelayDespawnEntity(::System::UInt32 entityID, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DELAYDESPAWNENTITY_OFFSET))(this, entityID, fade);
		}

		::System::Void DespawnFarthest(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_OFFSET))(this, count);
		}

		::System::Void DespawnFarthest_1(::System::Int32 count, ::System::Int32& culledCount, ::System::Single& farthestDist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DESPAWNFARTHEST_1_OFFSET))(this, count, culledCount, farthestDist);
		}

		::System::Void CheckSpawnInfoDespawn(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info, ::System::Single deltaTime, ::System::Single playerPosY, ::System::Int32 currentPathNodeID)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWNINFODESPAWN_OFFSET))(this, info, deltaTime, playerPosY, currentPathNodeID);
		}

		::System::Void TryQueueFade(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYQUEUEFADE_OFFSET))(this, info);
		}

		::System::Boolean ShouldQueueFadeForOutRange(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info, ::System::Int32 currentPathNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDQUEUEFADEFOROUTRANGE_OFFSET))(this, info, currentPathNodeID);
		}

		::System::Void StartFade(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* spawnedNpcInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_STARTFADE_OFFSET))(this, spawnedNpcInfo, deltaTime);
		}

		::System::Boolean TrySpawnNPC(::NPCCrowd::NPCSpawnPointRuntime* pointRuntime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYSPAWNNPC_OFFSET))(this, pointRuntime);
		}

		::System::Boolean SpawnNPC(::NPCCrowd::NPCSpawnPointRuntime* spawnPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNNPC_OFFSET))(this, spawnPoint);
		}

		::System::Void OnPathLimitChanged(::System::Int32 pathID, ::System::Int32 limit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONPATHLIMITCHANGED_OFFSET))(this, pathID, limit);
		}

		::System::Void OnCrowdEntityAdd(::COCJHGGDBCA* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYADD_OFFSET))(this, npcCmp);
		}

		::System::Void OnCrowdEntityRemove(::COCJHGGDBCA* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Boolean TryGetSpawnNPCInfo(::System::UInt32 entityID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*& spawnedNpcInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYGETSPAWNNPCINFO_OFFSET))(this, entityID, spawnedNpcInfo);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Void SpawnInitNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNINITNPC_OFFSET))(this);
		}

		::System::Void DebugSpawnNPCAtPlayerPosition(::UnityEngine::Vector3 playerPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DEBUGSPAWNNPCATPLAYERPOSITION_OFFSET))(this, playerPos);
		}

		::NPCCrowd::SpawnRangeConfig* GetSpawnRangeConfig(::System::Int32 graphID)
		{
			return ((::NPCCrowd::SpawnRangeConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNRANGECONFIG_OFFSET))(this, graphID);
		}

		::System::Void RefreshDelayDespawnPathNodeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REFRESHDELAYDESPAWNPATHNODECACHE_OFFSET))(this);
		}

		::System::Boolean IsDelayDespawnPathNode(::System::Int32 pathNodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ISDELAYDESPAWNPATHNODE_OFFSET))(this, pathNodeID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_INIT_OFFSET))(this);
		}

		::System::Void RegisterAttractorSpawnPoint(::NPCCrowd::AI::SpawnConfigForAttractor* spawnPointConfig, ::NPCCrowd::AI::SpawnPointGroup* groupConfig, ::System::Int32& handler)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnConfigForAttractor*, ::NPCCrowd::AI::SpawnPointGroup*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERATTRACTORSPAWNPOINT_OFFSET))(this, spawnPointConfig, groupConfig, handler);
		}

		::System::Void RegisterSpawnPoint(::NPCCrowd::AI::SpawnPoint* spawnPointConfig, ::NPCCrowd::AI::SpawnPointGroup* groupConfig, ::System::Int32& handler)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPoint*, ::NPCCrowd::AI::SpawnPointGroup*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERSPAWNPOINT_OFFSET))(this, spawnPointConfig, groupConfig, handler);
		}

		::System::Void UnRegisterSpawnPoint(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERSPAWNPOINT_OFFSET))(this, handler);
		}

		::System::Void SetSpawnPointBlocked(::System::Int32 handler, ::System::Boolean blocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SETSPAWNPOINTBLOCKED_OFFSET))(this, handler, blocked);
		}

		::System::Boolean GetSpawnPoint(::System::Int32 handler, ::NPCCrowd::NPCSpawnPointRuntime*& spawnPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::NPCSpawnPointRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINT_OFFSET))(this, handler, spawnPoint);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* GetSpawnPointsByPath(::System::Int32 pathID)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINTSBYPATH_OFFSET))(this, pathID);
		}

		::System::Void RegisterPathSpawnPoint(::NPCCrowd::NPCSpawnPointRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERPATHSPAWNPOINT_OFFSET))(this, runtime);
		}

		::System::Void UnRegisterPathSpawnPoint(::NPCCrowd::NPCSpawnPointRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERPATHSPAWNPOINT_OFFSET))(this, runtime);
		}

		::System::Void UpdatePointValid(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTVALID_OFFSET))(this, deltaTime);
		}

		::System::Void MergePointValidResults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_MERGEPOINTVALIDRESULTS_OFFSET))(this);
		}

		::System::Void UpdateGlobalPercentPointWeights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEGLOBALPERCENTPOINTWEIGHTS_OFFSET))(this);
		}

		::System::Void UpdateDespawn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEDESPAWN_OFFSET))(this, deltaTime);
		}

		::System::Void EnsureSpawnedArrayCapacity(::System::Int32 requiredCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ENSURESPAWNEDARRAYCAPACITY_OFFSET))(this, requiredCapacity);
		}

		::NPCCrowd::NPCSpawnPointRuntime* GetValidSpawnPoint()
		{
			return ((::NPCCrowd::NPCSpawnPointRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETVALIDSPAWNPOINT_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void BeginPointJobReadPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_BEGINPOINTJOBREADPHASE_OFFSET))(this);
		}

		::System::Void CompletePointJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_COMPLETEPOINTJOB_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
