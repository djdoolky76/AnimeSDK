#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/OHCFLICGFEF.h"

class ANOMGANGGGD;
class ENGKPGFGGLM;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET UNITYSDK_OFFSET(0x14B42F30)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET UNITYSDK_OFFSET(0x14B45840)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHECKDELAYEDFADEOUTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x14B41970)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEANUPDELAYEDFADEOUTEFFECTS_OFFSET UNITYSDK_OFFSET(0x14B4A640)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET UNITYSDK_OFFSET(0x14B485D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET UNITYSDK_OFFSET(0x14B447D0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x14B44630)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCECLEANUPALLDELAYEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x14B419F0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET UNITYSDK_OFFSET(0x14B4A1E0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCEUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x14B4A340)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET UNITYSDK_OFFSET(0x14B41FB0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x14B41840)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0x14B443C0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x14B43460)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISENABLEDELAYEDLOCALAVATARFADEOUT_OFFSET UNITYSDK_OFFSET(0x14B41F20)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET UNITYSDK_OFFSET(0x14B43250)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONDELAYEDFADEOUTSWITCHOUT_OFFSET UNITYSDK_OFFSET(0x14B4A3E0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B418A0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET UNITYSDK_OFFSET(0x14B480E0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x14B47CD0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET UNITYSDK_OFFSET(0x14B453E0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x14B49A10)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET UNITYSDK_OFFSET(0x14B49300)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET UNITYSDK_OFFSET(0x14B44A90)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNLOADASSETSYNC_OFFSET UNITYSDK_OFFSET(0x14B47D70)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNREGISTERDELAYEDFADEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B44520)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B4AD40)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B4ABF0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_B__25_0_OFFSET UNITYSDK_OFFSET(0x14B4ADD0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B4ADF0)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem_TypeDefinitionIndex = 64730;

	class SwitchTeamInBattleSubSystem
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>** StaticGet__runtimeConfig()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0x3FEB0);
		}
		static ::System::Boolean* StaticGet_DebugEnableDelayedLocalAvatarFadeOut()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xEC80);
		}
		// static const ::System::String* QTE_CONFIG; // 0x0
		::System::Threading::CancellationTokenSource* _cancellation; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* _cache; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _pendingDelayedFadeOutEntities; // 0x20
		::System::Action_1<::ENGKPGFGGLM*>* _switchOutEventCallback; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _needUnloadPaths; // 0x38
		::System::Int32 CurIndex; // 0x40
		::System::Boolean EnableDelayedLocalAvatarFadeOut; // 0x44
		::System::Boolean SwitchStart; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single _delayedFadeOutTimeoutEndTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>* get_RuntimeConfig()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET))();
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void CheckDelayedFadeOutTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHECKDELAYEDFADEOUTTIMEOUT_OFFSET))(this);
		}

		::System::Boolean IsEnableDelayedLocalAvatarFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISENABLEDELAYEDLOCALAVATARFADEOUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetAllEntityForFightResult()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET))(this);
		}

		::System::Void CacheEntity(::MoleMole::Battle::Entity* e, ::System::Int32 teamIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET))(this, e, teamIndex, index);
		}

		static ::System::Void InitSwitchTeamRuntimeConfig(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* data, ::ANOMGANGGGD* battleGameContext, ::System::Boolean performanceTest)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*, ::ANOMGANGGGD*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET))(data, battleGameContext, performanceTest);
		}

		::System::Void InitSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void DisposeSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void CollectNextTeamAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET))(this);
		}

		::System::Void SwitchTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ProcessAssetsAsync(::System::Single waitSec)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET))(this, waitSec);
		}

		::System::Void ProcessAssetsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET))(this);
		}

		::System::Void UnloadAssetSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNLOADASSETSYNC_OFFSET))(this);
		}

		::System::Void PreloadTeamAvatarData(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* avatarMemberList, ::System::Int32 ti)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET))(this, avatarMemberList, ti);
		}

		::System::Void ChangeTeamAvatarsInFight(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* newAvatarDatas, ::OHCFLICGFEF reloadParam, ::System::Action* changeEndCallBack, ::System::Action* teamReadyCallback, ::System::Int32 teamCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::OHCFLICGFEF, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET))(this, newAvatarDatas, reloadParam, changeEndCallBack, teamReadyCallback, teamCount);
		}

		::System::Void ForceUnloadAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCEUNLOADASSETS_OFFSET))(this);
		}

		::System::Void OnDelayedFadeOutSwitchOut(::ENGKPGFGGLM* baseEvt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONDELAYEDFADEOUTSWITCHOUT_OFFSET))(this, baseEvt);
		}

		::System::Void ForceCleanupAllDelayedFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCECLEANUPALLDELAYEDFADEOUT_OFFSET))(this);
		}

		::System::Void UnregisterDelayedFadeOutCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_UNREGISTERDELAYEDFADEOUTCALLBACK_OFFSET))(this);
		}

		static ::System::Void CleanupDelayedFadeOutEffects(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEANUPDELAYEDFADEOUTEFFECTS_OFFSET))(entity);
		}

		static ::System::Void ClearOldTeamAvatars(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* delayedFadeOutEntities)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET))(delayedFadeOutEntities);
		}

		static ::System::Void IsolateTeams(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* teams, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* skipEntities)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET))(teams, skipEntities);
		}

		static ::System::Void ForceSetAvatarStateDead(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET))(teams);
		}

		static ::System::Void ResumeTeams(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET))(teams);
		}

		static ::System::Void RefreshTeam(::MoleMole::TeamDataItem* teamData)
		{
			return ((::System::Void(*)(::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET))(teamData);
		}

		::System::Boolean _ProcessAssetsAsync_b__25_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__PROCESSASSETSASYNC_B__25_0_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
