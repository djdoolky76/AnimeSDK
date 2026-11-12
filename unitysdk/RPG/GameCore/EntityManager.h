#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_ENTITYMANAGER_ADDTOMANANGER_OFFSET UNITYSDK_OFFSET(0xF0BDDE0)
#define RPG_GAMECORE_ENTITYMANAGER_ADDTOUNIQUESNAPSHOTMAP_OFFSET UNITYSDK_OFFSET(0xF0BE170)
#define RPG_GAMECORE_ENTITYMANAGER_CALCENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0xF0BF070)
#define RPG_GAMECORE_ENTITYMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xF0BE520)
#define RPG_GAMECORE_ENTITYMANAGER_CLEARENTITYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xF0BAF20)
#define RPG_GAMECORE_ENTITYMANAGER_CONTAINSENTITY_OFFSET UNITYSDK_OFFSET(0xF0BEFE0)
#define RPG_GAMECORE_ENTITYMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xF0B9C70)
#define RPG_GAMECORE_ENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF0BA030)
#define RPG_GAMECORE_ENTITYMANAGER_ENTERVIEWMODE_OFFSET UNITYSDK_OFFSET(0xF0BDA10)
#define RPG_GAMECORE_ENTITYMANAGER_EXISTVIEWMODE_OFFSET UNITYSDK_OFFSET(0xF0BDA90)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITIESBYGROUPID_OFFSET UNITYSDK_OFFSET(0xF0BB800)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xF0BB770)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xF0BB6E0)
#define RPG_GAMECORE_ENTITYMANAGER_FINDFIRSTENTITY_OFFSET UNITYSDK_OFFSET(0xF0BEF60)
#define RPG_GAMECORE_ENTITYMANAGER_GETALLENITYDICTIONARY_OFFSET UNITYSDK_OFFSET(0xF0BDD60)
#define RPG_GAMECORE_ENTITYMANAGER_GETALLUNIQUENAMEDENTITYDICTIONARY_OFFSET UNITYSDK_OFFSET(0xF0BDDA0)
#define RPG_GAMECORE_ENTITYMANAGER_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xF0BA8B0)
#define RPG_GAMECORE_ENTITYMANAGER_GETENEMYTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xF0BA780)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF0BA680)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xF0BB500)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYUNIQUENAMES_OFFSET UNITYSDK_OFFSET(0xF0BB460)
#define RPG_GAMECORE_ENTITYMANAGER_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xF0BA850)
#define RPG_GAMECORE_ENTITYMANAGER_GETTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xF0BA710)
#define RPG_GAMECORE_ENTITYMANAGER_GETUNIQUESNAPSHOTBYOWNERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF0BA910)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xF0BE4C0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE460)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET UNITYSDK_OFFSET(0xF0BE4E0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE500)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE480)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xF0BE4A0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUIWILLSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE440)
#define RPG_GAMECORE_ENTITYMANAGER_GET_ENTITYGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE3A0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_GROUPGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE3C0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_LEVELENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE370)
#define RPG_GAMECORE_ENTITYMANAGER_GET_LITTLEGAMEGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE420)
#define RPG_GAMECORE_ENTITYMANAGER_GET_OWNERWORLDREF_OFFSET UNITYSDK_OFFSET(0xF0BE390)
#define RPG_GAMECORE_ENTITYMANAGER_GET_PERFORMANCEGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE400)
#define RPG_GAMECORE_ENTITYMANAGER_GET_PLAYERGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE3E0)
#define RPG_GAMECORE_ENTITYMANAGER_ONCREATENEWENTITYPROCESSGLOBALTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0xF0BC230)
#define RPG_GAMECORE_ENTITYMANAGER_PAUSEALLENTITYBYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xF0BBC20)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYALLENTITES_OFFSET UNITYSDK_OFFSET(0xF0BE630)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESVIEWMODESORT_OFFSET UNITYSDK_OFFSET(0xF0BED10)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHANYCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xF0BF470)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xF0BF2B0)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xF0BF120)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_1_OFFSET UNITYSDK_OFFSET(0xF0BEE60)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_OFFSET UNITYSDK_OFFSET(0xF0B5A40)
#define RPG_GAMECORE_ENTITYMANAGER_REFRESHVIEWMODESELECTEDENTITY_OFFSET UNITYSDK_OFFSET(0xF0BCF70)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xF0BBA10)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xF0BB8B0)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERUNIQUENAMEENTITY_OFFSET UNITYSDK_OFFSET(0xF0BA9A0)
#define RPG_GAMECORE_ENTITYMANAGER_REMOVEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0xF0BDFF0)
#define RPG_GAMECORE_ENTITYMANAGER_SETUPBUILDINENTITY_OFFSET UNITYSDK_OFFSET(0xF0BA230)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xF0BE4D0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE470)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET UNITYSDK_OFFSET(0xF0BE4F0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE510)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE490)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xF0BE4B0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUIWILLSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE450)
#define RPG_GAMECORE_ENTITYMANAGER_SET_ENTITYGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE3B0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_GROUPGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE3D0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_LEVELENTITY_OFFSET UNITYSDK_OFFSET(0xF0BE380)
#define RPG_GAMECORE_ENTITYMANAGER_SET_LITTLEGAMEGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE430)
#define RPG_GAMECORE_ENTITYMANAGER_SET_PERFORMANCEGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE410)
#define RPG_GAMECORE_ENTITYMANAGER_SET_PLAYERGOROOT_OFFSET UNITYSDK_OFFSET(0xF0BE3F0)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xF0BBB10)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xF0BB950)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERUNIQUENAMEENTITY_OFFSET UNITYSDK_OFFSET(0xF0BB160)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASANYCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xF0BF840)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xF0BF700)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xF0BF630)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYFOLLOWEDBE_OFFSET UNITYSDK_OFFSET(0xF0BC730)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYSERVANT_OFFSET UNITYSDK_OFFSET(0xF0BC490)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYSUMMONER_OFFSET UNITYSDK_OFFSET(0xF0BC410)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYTRANSMITVISIBILITYTARGETS_OFFSET UNITYSDK_OFFSET(0xF0BC9D0)
#define RPG_GAMECORE_ENTITYMANAGER__PROCESSENTITYTEAMCHANGE_OFFSET UNITYSDK_OFFSET(0xF0BE240)
#define RPG_GAMECORE_ENTITYMANAGER__QUERYENTITIESIMPL_OFFSET UNITYSDK_OFFSET(0xF0BE880)
#define RPG_GAMECORE_ENTITYMANAGER__REFRESHUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xF0BD660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManager_TypeDefinitionIndex = 57780;

	class EntityManager : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeOutEntity_k__BackingField; // 0x10
		::UnityEngine::GameObject* _GroupGORoot_k__BackingField; // 0x18
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>*>* _PauseEntityTimeSlowIndexDic; // 0x20
		::RPG::GameCore::GameEntityList* _DataViewUISelectFadeInFollowEntities_k__BackingField; // 0x28
		::UnityEngine::GameObject* _PerformanceGORoot_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _AllEntityDictionary; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _SnapshotEntityMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _ServerEntityIDToEntityDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* _EntityUniqueNameDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* _UniqueNamedEntityDictionary; // 0x58
		::UnityEngine::GameObject* _EntityGORoot_k__BackingField; // 0x60
		::UnityEngine::GameObject* _PlayerGORoot_k__BackingField; // 0x68
		::RPG::GameCore::GameEntity* _DataViewUILeaveSummonerOfUncreatedServant_k__BackingField; // 0x70
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeOutSummonerEntity_k__BackingField; // 0x78
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType>* _ProcessEntityTeamChangeDelg; // 0x80
		::Il2CppArray<::RPG::GameCore::GameEntity*>* _AllTeamEntity; // 0x88
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x90
		::RPG::GameCore::GameEntity* _LevelEntity_k__BackingField; // 0x98
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeInEntity_k__BackingField; // 0xA0
		::UnityEngine::GameObject* _LittleGameGORoot_k__BackingField; // 0xA8
		::RPG::GameCore::GameEntity* _DataViewUIWillSelectEntity_k__BackingField; // 0xB0
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*>* _GroupEntityIDToEntityDict; // 0xB8
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _AllTeamEntityList; // 0xC0
		::RPG::GameCore::GameEntity* _DataViewUISelectSummonerOfUncreatedServant_k__BackingField; // 0xC8
		::System::Boolean _UseUniqueSnapshot; // 0xD0
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>** StaticGet__CheckEntityHasComponentTypeHandlesDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "EntityManager")->GetStaticField(0x3CF30);
		}

		static ::System::String** StaticGet_LocalPlayerUniqueName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "EntityManager")->GetStaticField(0x3CF38);
		}

		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__CheckEntityInTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("RPG.GameCore", "EntityManager")->GetStaticField(0x3CF40);
		}

		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>** StaticGet__CheckEntityHasAnyComponentTypeHandlesDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "EntityManager")->GetStaticField(0x3CF48);
		}

		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle, ::System::Boolean>** StaticGet__CheckEntityHasComponentTypeHandleDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "EntityManager")->GetStaticField(0x3CF50);
		}

		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupBuildInEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SETUPBUILDINENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntityByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETTEAMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetEnemyTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENEMYTEAMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetUniqueSnapshotByOwnerRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETUNIQUESNAPSHOTBYOWNERRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void RegisterUniqueNameEntity(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERUNIQUENAMEENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearEntityUniqueName(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CLEARENTITYUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void UnregisterUniqueNameEntity(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERUNIQUENAMEENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetEntityUniqueNames(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYUNIQUENAMES_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetEntityByUniqueName(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FindEntityByServerEntityID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYSERVERENTITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FindEntityByGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYGROUPENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* FindEntitiesByGroupID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITIESBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void RegisterServerEntityID(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERSERVERENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterServerEntityID(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERSERVERENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERGROUPENTITYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERGROUPENTITYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PauseAllEntityByTeamType(::RPG::GameCore::TeamType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_PAUSEALLENTITYBYTEAMTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCreateNewEntityProcessGlobalTimescaleLock(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ONCREATENEWENTITYPROCESSGLOBALTIMESCALELOCK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetEntitySummoner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYSUMMONER_OFFSET))(this, a1);
		}

		::System::Void _GetEntityServant(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYSERVANT_OFFSET))(this, a1, a2);
		}

		::System::Void _GetEntityFollowedBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYFOLLOWEDBE_OFFSET))(this, a1, a2);
		}

		::System::Void _GetEntityTransmitVisibilityTargets(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYTRANSMITVISIBILITYTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshViewModeSelectedEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REFRESHVIEWMODESELECTEDENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshUncreatedServant(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__REFRESHUNCREATEDSERVANT_OFFSET))(this, a1);
		}

		::System::Void EnterViewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ENTERVIEWMODE_OFFSET))(this);
		}

		::System::Void ExistViewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_EXISTVIEWMODE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* GetAllEnityDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETALLENITYDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* GetAllUniqueNamedEntityDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETALLUNIQUENAMEDENTITYDICTIONARY_OFFSET))(this);
		}

		::System::Void AddToMananger(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ADDTOMANANGER_OFFSET))(this, a1);
		}

		::System::Void RemoveFromManager(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REMOVEFROMMANAGER_OFFSET))(this, a1);
		}

		::System::Void AddToUniqueSnapshotMap(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ADDTOUNIQUESNAPSHOTMAP_OFFSET))(this, a1);
		}

		::System::Void _ProcessEntityTeamChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::TeamType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__PROCESSENTITYTEAMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* get_LevelEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_LEVELENTITY_OFFSET))(this);
		}

		::System::Void set_LevelEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_LEVELENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* get_OwnerWorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_OWNERWORLDREF_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_EntityGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_ENTITYGOROOT_OFFSET))(this);
		}

		::System::Void set_EntityGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_ENTITYGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_GroupGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_GROUPGOROOT_OFFSET))(this);
		}

		::System::Void set_GroupGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_GROUPGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_PlayerGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_PLAYERGOROOT_OFFSET))(this);
		}

		::System::Void set_PlayerGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_PLAYERGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_PerformanceGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_PERFORMANCEGOROOT_OFFSET))(this);
		}

		::System::Void set_PerformanceGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_PERFORMANCEGOROOT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_LittleGameGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_LITTLEGAMEGOROOT_OFFSET))(this);
		}

		::System::Void set_LittleGameGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_LITTLEGAMEGOROOT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUIWillSelectEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUIWILLSELECTENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUIWillSelectEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUIWILLSELECTENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeInEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeInEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeOutSummonerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeOutSummonerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectSummonerOfUncreatedServant()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectSummonerOfUncreatedServant(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUILeaveSummonerOfUncreatedServant()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET))(this);
		}

		::System::Void set_DataViewUILeaveSummonerOfUncreatedServant(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* get_DataViewUISelectFadeInFollowEntities()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeInFollowEntities(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeOutEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeOutEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET))(this, a1);
		}

		::System::Void QueryAllEntites(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYALLENTITES_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* QueryEntities(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesViewModeSort(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESVIEWMODESORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void QueryEntities_1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::GameEntity* FindFirstEntity(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDFIRSTENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ContainsEntity(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CONTAINSENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CalcEntityCount(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::AliveStateMask a3, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CALCENTITYCOUNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithComponentType(::System::RuntimeTypeHandle a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::RuntimeTypeHandle, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithComponentTypes(::Il2CppArray<::System::RuntimeTypeHandle>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPES_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithAnyComponentTypes(::Il2CppArray<::System::RuntimeTypeHandle>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHANYCOMPONENTTYPES_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* _QueryEntitiesImpl(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamTypeMask a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__QUERYENTITIESIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean _CheckEntityHasComponentType(::RPG::GameCore::GameEntity* a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckEntityHasComponentTypes(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::RuntimeTypeHandle>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPES_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckEntityHasAnyComponentTypes(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::RuntimeTypeHandle>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASANYCOMPONENTTYPES_OFFSET))(a1, a2);
		}

	};
}
