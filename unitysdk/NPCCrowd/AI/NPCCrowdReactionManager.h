#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusConfig.h"
#include "unitysdk/NPCCrowd/AI/ReactionConfig.h"
#include "unitysdk/NPCCrowd/AI/ReactionConfigWrapper.h"
#include "unitysdk/NPCCrowd/AI/ReactionRegisterObjectType.h"
#include "unitysdk/NPCCrowd/AI/StimulusConfig.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/AI/RegisterItem.h"
#include "unitysdk/NPCCrowd/AI/StimulusItem.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
class DOCIGCANGFO;
class NCCGOIBPBGE;
class OJGOIAPCKBN;
namespace NPCCrowd::AI { class ReactionCallbackDelegate; }
namespace NPCCrowd::AI { class ReactionConditionDelegate; }
namespace NPCCrowd::AI { class ReactionConfigAssetSO; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_BANALLREACTION_1_OFFSET UNITYSDK_OFFSET(0xFD1B530)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_BANALLREACTION_OFFSET UNITYSDK_OFFSET(0xFD1B470)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKBANTAG_OFFSET UNITYSDK_OFFSET(0xFD1C2A0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xFD1B930)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKDELAYREACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xFD1A6C0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKRANGE_OFFSET UNITYSDK_OFFSET(0xFD1C340)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKTAG_OFFSET UNITYSDK_OFFSET(0xFD1C390)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKTIME_OFFSET UNITYSDK_OFFSET(0xFD1C590)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_FORCEDOREACTION_OFFSET UNITYSDK_OFFSET(0xFD1A660)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETBANREACTIONTAG_OFFSET UNITYSDK_OFFSET(0xFD170B0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETIKBANREACTIONTAG_OFFSET UNITYSDK_OFFSET(0xFD17300)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETREACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xFD1AA20)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETSTIMULUSCONFIG_OFFSET UNITYSDK_OFFSET(0xFD1AB00)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xFD16C80)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_HANDLEEVENTCONFIGSTIMULUSDISABLE_OFFSET UNITYSDK_OFFSET(0xFD19F30)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_HANDLEEVENTCONFIGSTIMULUSENABLE_OFFSET UNITYSDK_OFFSET(0xFD18E00)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xFD18780)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD1B3A0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_ONCROWDENTITYADD_OFFSET UNITYSDK_OFFSET(0xFD18830)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_ONENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0xFD196B0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xFD17600)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xFD16F70)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xFD1B2A0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_REACTIONCALLBACKFUNC_OFFSET UNITYSDK_OFFSET(0xFD1A2C0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_REGISTERREACTION_OFFSET UNITYSDK_OFFSET(0xFD18A40)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_REPLACEREACTION_OFFSET UNITYSDK_OFFSET(0xFD1A320)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xFD16E80)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UNBANALLREACTION_1_OFFSET UNITYSDK_OFFSET(0xFD1B790)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UNBANALLREACTION_OFFSET UNITYSDK_OFFSET(0xFD1B6D0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UNREGISTERREACTION_OFFSET UNITYSDK_OFFSET(0xFD19B60)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UPDATEACTIONSTATE_OFFSET UNITYSDK_OFFSET(0xFD1ABC0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD1C9F0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xFD1C5B0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xFD1CA30)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD1CAC0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xFD1CB60)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xFD1CBF0)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xFD1CC90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdReactionManager_TypeDefinitionIndex = 74402;

	class NPCCrowdReactionManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_AssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdReactionManager_TypeDefinitionIndex)->GetStaticField(0x522C0);
		}
		static ::System::String** StaticGet_TEMPLATE_ASSET_SO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdReactionManager_TypeDefinitionIndex)->GetStaticField(0x522E0);
		}
		static ::Foundation::Unreal::FGameplayTagContainer* StaticGet_BanTags()
		{
			return (::Foundation::Unreal::FGameplayTagContainer*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdReactionManager_TypeDefinitionIndex)->GetStaticField(0x522E8);
		}
		static ::NPCCrowd::AI::ReactionConfigAssetSO** StaticGet_ReactionConfigSO()
		{
			return (::NPCCrowd::AI::ReactionConfigAssetSO**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdReactionManager_TypeDefinitionIndex)->GetStaticField(0x52358);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::AI::StimulusConfig>* StimulusConfigs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::AI::ReactionConfig>* ReactionConfigs; // 0x20
		::NPCCrowd::AI::ReactionCallbackDelegate* ReactionCallback; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* entityID2ReactionID; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NCCGOIBPBGE*>* entityID2OnInteract; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* entityID2DistanceHandlers; // 0x40
		::NPCCrowd::AI::ReactionConditionDelegate* ReactionCondition; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::AI::ReactionConfigWrapper>* entityID2ReactionHandlers; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::AI::EventStimulusConfig>* EventStimulusConfigs; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* caches; // 0x60
		::System::Int32 dayPeriod; // 0x68
		::System::Int32 dayOfWeek; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::AI::NPCCrowdReactionManager* Get()
		{
			return ((::NPCCrowd::AI::NPCCrowdReactionManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		static ::Foundation::Unreal::FGameplayTagContainer GetBanReactionTag()
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETBANREACTIONTAG_OFFSET))();
		}

		static ::Foundation::Unreal::FGameplayTag GetIKBanReactionTag()
		{
			return ((::Foundation::Unreal::FGameplayTag(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETIKBANREACTIONTAG_OFFSET))();
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnCrowdEntityAdd(::COCJHGGDBCA* cmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_ONCROWDENTITYADD_OFFSET))(this, cmp);
		}

		::System::Void HandleEventConfigStimulusEnable(::COCJHGGDBCA* cmp, ::OJGOIAPCKBN* npcSubTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*, ::OJGOIAPCKBN*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_HANDLEEVENTCONFIGSTIMULUSENABLE_OFFSET))(this, cmp, npcSubTemplate);
		}

		::System::Void OnEntityRemoved(::COCJHGGDBCA* cmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_ONENTITYREMOVED_OFFSET))(this, cmp);
		}

		::System::Void HandleEventConfigStimulusDisable(::COCJHGGDBCA* cmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_HANDLEEVENTCONFIGSTIMULUSDISABLE_OFFSET))(this, cmp);
		}

		::System::Void ReactionCallbackFunc(::System::Int32 entityID, ::System::UInt32 reactionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_REACTIONCALLBACKFUNC_OFFSET))(this, entityID, reactionID);
		}

		::System::Void ForceDoReaction(::System::UInt32 entityID, ::System::UInt32 reactionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_FORCEDOREACTION_OFFSET))(this, entityID, reactionID);
		}

		::System::Void ReplaceReaction(::System::UInt32 entityID, ::System::UInt32 reactionID, ::System::Boolean ignorePriority)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_REPLACEREACTION_OFFSET))(this, entityID, reactionID, ignorePriority);
		}

		::System::Void CheckDelayReactionCallback(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKDELAYREACTIONCALLBACK_OFFSET))(this, entityID);
		}

		::System::Boolean RegisterReaction(::System::UInt32 entityID, ::System::UInt32 reactionID, ::NPCCrowd::AI::ReactionRegisterObjectType reactionRegisterObjectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NPCCrowd::AI::ReactionRegisterObjectType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_REGISTERREACTION_OFFSET))(this, entityID, reactionID, reactionRegisterObjectType);
		}

		::System::Boolean UnRegisterReaction(::System::UInt32 entityID, ::System::UInt32 reactionID, ::NPCCrowd::AI::ReactionRegisterObjectType reactionRegisterObjectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NPCCrowd::AI::ReactionRegisterObjectType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UNREGISTERREACTION_OFFSET))(this, entityID, reactionID, reactionRegisterObjectType);
		}

		::System::Boolean GetReactionConfig(::System::UInt32 reactionID, ::NPCCrowd::AI::ReactionConfig& reactionConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::AI::ReactionConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETREACTIONCONFIG_OFFSET))(this, reactionID, reactionConfig);
		}

		::System::Boolean GetStimulusConfig(::System::UInt32 reactionID, ::NPCCrowd::AI::StimulusConfig& stimulusConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::AI::StimulusConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_GETSTIMULUSCONFIG_OFFSET))(this, reactionID, stimulusConfig);
		}

		::System::Void UpdateActionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UPDATEACTIONSTATE_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void BanAllReaction(::System::UInt32 entityID, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_BANALLREACTION_OFFSET))(this, entityID, tag);
		}

		::System::Void BanAllReaction_1(::DOCIGCANGFO* tagComponent, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::DOCIGCANGFO*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_BANALLREACTION_1_OFFSET))(this, tagComponent, tag);
		}

		::System::Void UnBanAllReaction(::System::UInt32 entityID, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UNBANALLREACTION_OFFSET))(this, entityID, tag);
		}

		::System::Void UnBanAllReaction_1(::DOCIGCANGFO* tagComponent, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::DOCIGCANGFO*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_UNBANALLREACTION_1_OFFSET))(this, tagComponent, tag);
		}

		static ::System::Boolean CheckCondition(::NPCCrowd::AI::StimulusItem stimulus, ::NPCCrowd::AI::RegisterItem registerItem)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::StimulusItem, ::NPCCrowd::AI::RegisterItem))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKCONDITION_OFFSET))(stimulus, registerItem);
		}

		static ::System::Boolean CheckBanTag(::Foundation::Unreal::FGameplayTagContainer tags)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKBANTAG_OFFSET))(tags);
		}

		static ::System::Boolean CheckRange(::NPCCrowd::AI::StimulusItem stimulus, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::StimulusItem, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKRANGE_OFFSET))(stimulus, pos);
		}

		static ::System::Boolean CheckTag(::NPCCrowd::AI::ReactionConfig reactionConfig, ::Foundation::Unreal::FGameplayTagContainer tags)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::ReactionConfig, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKTAG_OFFSET))(reactionConfig, tags);
		}

		static ::System::Boolean CheckTime(::NPCCrowd::AI::ReactionConfig reactionConfig, ::System::Int32 dayPeriod, ::System::Int32 dayOfWeek)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::ReactionConfig, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER_CHECKTIME_OFFSET))(reactionConfig, dayPeriod, dayOfWeek);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
