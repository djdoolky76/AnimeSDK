#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/AIActionReturnToPathFollowConfig.h"
#include "unitysdk/NPCCrowd/AI/AIActionWrapperForJob.h"
#include "unitysdk/NPCCrowd/AI/NPCAIActionState.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/NPCCrowd/AI/TimeControl.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class IdGenerator; }
namespace NPCCrowd::AI { class AIActionConfigAssetSO; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::AI { class IAIActionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_CREATEWRAPPERFORJOB_OFFSET UNITYSDK_OFFSET(0x11F94490)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYAWAKEACTION_OFFSET UNITYSDK_OFFSET(0x11F93A30)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYSLEEPACTION_OFFSET UNITYSDK_OFFSET(0x11F93940)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYUNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0x11F937C0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETCOMMONCHANGEPATHFOLLOWACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11F93B20)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETENTITYACTION_OFFSET UNITYSDK_OFFSET(0x11F90910)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x11F90790)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ISSTATEEND_OFFSET UNITYSDK_OFFSET(0x11F96AB0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_MOVEACTIONTOSLEEP_OFFSET UNITYSDK_OFFSET(0x11F93530)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11F91C20)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11F917B0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11F92C90)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x11F91670)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x11F91C80)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x11F97250)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONSTATEFORJOB_OFFSET UNITYSDK_OFFSET(0x11F96AF0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTION_OFFSET UNITYSDK_OFFSET(0x11F97340)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_1_OFFSET UNITYSDK_OFFSET(0x11F94170)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_2_OFFSET UNITYSDK_OFFSET(0x11F94220)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_3_OFFSET UNITYSDK_OFFSET(0x11F943C0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_4_OFFSET UNITYSDK_OFFSET(0x11F93CF0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x11F93B60)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0x11F96400)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x11F96650)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SETHANDLEREFFECTFORCECULLED_OFFSET UNITYSDK_OFFSET(0x11F96110)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDREMOVEACTION_OFFSET UNITYSDK_OFFSET(0x11F936D0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x11F91580)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_SYNCPLAYEFFECTFORCECULLEDBYLOD_OFFSET UNITYSDK_OFFSET(0x11F95FC0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_TRYGETACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11F95870)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERACTION_OFFSET UNITYSDK_OFFSET(0x11F94620)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERENTITYPLAYEFFECTACTIONS_OFFSET UNITYSDK_OFFSET(0x11F955C0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER_WAKEACTION_OFFSET UNITYSDK_OFFSET(0x11F92AF0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F97BF0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x11F97630)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11F97C50)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11F97CE0)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11F97D70)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x11F97E10)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x11F97EB0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdActionManager_TypeDefinitionIndex = 55018;

	class NPCCrowdActionManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::NPCCrowd::IdGenerator** StaticGet_IDGen()
		{
			return (::NPCCrowd::IdGenerator**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x519C0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_AssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x519C8);
		}
		static ::NPCCrowd::AI::AIActionConfigAssetSO** StaticGet_ActionConfigSO()
		{
			return (::NPCCrowd::AI::AIActionConfigAssetSO**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x519E8);
		}
		static ::System::String** StaticGet_TEMPLATE_ASSET_SO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager_TypeDefinitionIndex)->GetStaticField(0x519F0);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* registedEntities; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* queuedActions; // 0x20
		::NPCCrowd::AI::AIActionReturnToPathFollowConfig commonChangePathFollowActionConfig; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* actions; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* actionsForJob; // 0x38
		::System::Collections::Generic::HashSet_1<::System::Int32>* delayAwakeActions; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* cache; // 0x48
		::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<::System::Int32>*>* intListPool; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* sleepActions; // 0x58
		::System::Collections::Generic::HashSet_1<::System::Int32>* delaySleepActions; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* entityCache; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob>* sleepActionsForJob; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::AI::NPCCrowdActionManager* Get()
		{
			return ((::NPCCrowd::AI::NPCCrowdActionManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void DelaySleepAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYSLEEPACTION_OFFSET))(this, handler);
		}

		::System::Void DelayAwakeAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYAWAKEACTION_OFFSET))(this, handler);
		}

		::NPCCrowd::AI::AIActionReturnToPathFollowConfig GetCommonChangePathFollowActionConfig()
		{
			return ((::NPCCrowd::AI::AIActionReturnToPathFollowConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETCOMMONCHANGEPATHFOLLOWACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean RegisterAction(::System::Int32 actionConfigIdx, ::System::UInt32 entityID, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_OFFSET))(this, actionConfigIdx, entityID, handler, disableTick);
		}

		::System::Boolean RegisterAction_1(::NPCCrowd::AI::AIActionRefItem* actionConfig, ::System::UInt32 entityID, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AIActionRefItem*, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_1_OFFSET))(this, actionConfig, entityID, handler, disableTick);
		}

		::System::Boolean RegisterAction_2(::System::Int32 actionConfigIdx, ::System::UInt32 entityID, ::NPCCrowd::AI::TimeControl overrideTimeControl, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::AI::TimeControl, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_2_OFFSET))(this, actionConfigIdx, entityID, overrideTimeControl, handler, disableTick);
		}

		::System::Boolean RegisterAction_3(::NPCCrowd::AI::AIActionRefItem* actionConfig, ::System::UInt32 entityID, ::NPCCrowd::AI::TimeControl overrideTimeControl, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AIActionRefItem*, ::System::UInt32, ::NPCCrowd::AI::TimeControl, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_3_OFFSET))(this, actionConfig, entityID, overrideTimeControl, handler, disableTick);
		}

		::System::Boolean RegisterAction_4(::NPCCrowd::AI::IAIActionConfig* config, ::System::UInt32 entityID, ::NPCCrowd::AI::TimeControl timeControl, ::System::Int32& handler, ::System::Boolean disableTick)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::IAIActionConfig*, ::System::UInt32, ::NPCCrowd::AI::TimeControl, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REGISTERACTION_4_OFFSET))(this, config, entityID, timeControl, handler, disableTick);
		}

		::System::Void UnRegisterAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERACTION_OFFSET))(this, handler);
		}

		::System::Void UnRegisterEntityPlayEffectActions(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_UNREGISTERENTITYPLAYEFFECTACTIONS_OFFSET))(this, entityID);
		}

		::System::Void SyncPlayEffectForceCulledByLod(::System::UInt32 entityID, ::System::Boolean forceCulled)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SYNCPLAYEFFECTFORCECULLEDBYLOD_OFFSET))(this, entityID, forceCulled);
		}

		::System::Void SetHandlerEffectForceCulled(::System::Int32 handler, ::System::Boolean forceCulled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SETHANDLEREFFECTFORCECULLED_OFFSET))(this, handler, forceCulled);
		}

		::System::Boolean TryGetActionConfig(::System::Int32 handler, ::NPCCrowd::AI::IAIActionConfig*& config)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::IAIActionConfig*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_TRYGETACTIONCONFIG_OFFSET))(this, handler, config);
		}

		::System::Boolean GetEntityAction(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::System::Int32>*& handlers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_GETENTITYACTION_OFFSET))(this, entityID, handlers);
		}

		::System::Void DelayUnRegisterAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_DELAYUNREGISTERACTION_OFFSET))(this, handler);
		}

		::System::Void RemoveAction(::System::Int32 handler, ::NPCCrowd::AI::AIActionWrapperForJob action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEACTION_OFFSET))(this, handler, action);
		}

		::System::Void RemoveEntityAction(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_REMOVEENTITYACTION_OFFSET))(this, entityID);
		}

		static ::System::Boolean ShouldRemoveAction(::NPCCrowd::AI::AIActionWrapperForJob wrapper)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::AIActionWrapperForJob))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_SHOULDREMOVEACTION_OFFSET))(wrapper);
		}

		::System::Void MoveActionToSleep(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_MOVEACTIONTOSLEEP_OFFSET))(this, handler);
		}

		::System::Void WakeAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_WAKEACTION_OFFSET))(this, handler);
		}

		static ::System::Boolean IsStateEnd(::NPCCrowd::AI::NPCAIActionState state)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::NPCAIActionState))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_ISSTATEEND_OFFSET))(state);
		}

		::System::Boolean CreateWrapperForJob(::NPCCrowd::AI::IAIActionConfig* config, ::System::UInt32 entityID, ::System::Boolean disableTick, ::NPCCrowd::AI::TimeControl timeControl, ::NPCCrowd::AI::AIActionWrapperForJob& wrapper)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::IAIActionConfig*, ::System::UInt32, ::System::Boolean, ::NPCCrowd::AI::TimeControl, ::NPCCrowd::AI::AIActionWrapperForJob&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_CREATEWRAPPERFORJOB_OFFSET))(this, config, entityID, disableTick, timeControl, wrapper);
		}

		::System::Boolean QueryActionStateForJob(::System::Int32 handler, ::NPCCrowd::AI::NPCAIActionState& state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::NPCAIActionState&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONSTATEFORJOB_OFFSET))(this, handler, state);
		}

		::System::Boolean QueryActionFinishState(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTIONFINISHSTATE_OFFSET))(this, handler);
		}

		::System::Boolean QueryAction(::System::Int32 handler, ::NPCCrowd::AI::AIActionWrapperForJob& action)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::AIActionWrapperForJob&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER_QUERYACTION_OFFSET))(this, handler, action);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
