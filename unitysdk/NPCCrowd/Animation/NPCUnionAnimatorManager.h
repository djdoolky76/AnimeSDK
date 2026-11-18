#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Animation/NPCUnionAnimatorManager_NPCAnimationStateParams.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/NPCCrowd/AI/AIActionSetStateParamConfig.h"
#include "unitysdk/NPCCrowd/Animation/MontageTransitionConfig.h"

class COCJHGGDBCA;
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationTransitionConfigAssetSO; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_1_OFFSET UNITYSDK_OFFSET(0x14F2FC30)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14F2DC80)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ADDMONTAGESHAREDDATA_OFFSET UNITYSDK_OFFSET(0x14F2DB80)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_APPLYSTATEMACHINERANDOMINTINITIFNEEDED_OFFSET UNITYSDK_OFFSET(0x14F2DFA0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPARESTATEHASH_OFFSET UNITYSDK_OFFSET(0x14F314A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_CREATEUNIONANIMATOR_OFFSET UNITYSDK_OFFSET(0x14F301E0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ENTITYANIMATIONREADY_OFFSET UNITYSDK_OFFSET(0x14F31410)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_FREEANIMATIONSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14F2FFD0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETDEFAULTTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x14F2D9B0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETDRIVENBYSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14F2F2D0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETINSTANCECONFIG_OFFSET UNITYSDK_OFFSET(0x14F2F870)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETMONTAGESTARTIDX_OFFSET UNITYSDK_OFFSET(0x14F2DC00)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETMONTAGETRANSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x14F2D720)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETSTATEMACHINETRANSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x14F2D7A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14F2E9F0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x14F2D830)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x14F2CA50)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x14F2DA00)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14F30AE0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ONANIMATIONINIT_OFFSET UNITYSDK_OFFSET(0x14F30870)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14F30DB0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x14F2CD10)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14F30D40)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x14F300A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x14F2CBD0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x14F30030)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_REGISTERSTATEPARAMINITACTIONNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x14F2E790)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_RELEASEUNIONANIMATOR_OFFSET UNITYSDK_OFFSET(0x14F30930)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SAMPLERANDOMINTINCLUSIVE_OFFSET UNITYSDK_OFFSET(0x14F2E5F0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERBOOL_OFFSET UNITYSDK_OFFSET(0x14F310C0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERFLOAT_OFFSET UNITYSDK_OFFSET(0x14F31260)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERINT_OFFSET UNITYSDK_OFFSET(0x14F31190)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERTRIGGER_OFFSET UNITYSDK_OFFSET(0x14F31340)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_TRYBUILDSETSTATEPARAMINITACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x14F2E6A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_TRYGETPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x14F2E550)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_TRYGETSTATEPARAMKEY_OFFSET UNITYSDK_OFFSET(0x14F2E830)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F30140)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F315A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F31510)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x14F317E0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14F31870)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14F31910)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x14F319A0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14F31A30)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x14F31AD0)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x14F31B70)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F31C10)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_TypeDefinitionIndex = 78109;

	class NPCUnionAnimatorManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__transitionConfigAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0x39930);
		}
		static ::System::String** StaticGet_TransitionConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0x39950);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>** StaticGet_StateParam2Hash()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0x39958);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet_DebugEntityId()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xD090);
		}
		static ::System::Int32* StaticGet_DebugWalkingStairsType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xD098);
		}
		static ::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single>* StaticGet_trantitionMap()
		{
			return (::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xD0A0);
		}
		static ::System::Single* StaticGet_DebugTurnAroundAngle()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xD0B0);
		}
		static ::System::Boolean* StaticGet_DebugIsMoving()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xD0B4);
		}
		static ::System::Boolean* StaticGet_DebugTriggerTurnAround()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xD0B5);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCUnionAnimator*>* _animators; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_3<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32>>* _configCache; // 0x20
		::NPCCrowd::Animation::AnimationTransitionConfigAssetSO* _transitionConfigSO; // 0x28
		::NPCCrowd::Animation::AnimationSubManager* _subManager; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Animation::NPCUnionAnimatorManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCUnionAnimatorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GET_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::NPCCrowd::Animation::MontageTransitionConfig GetMontageTransitionConfig()
		{
			return ((::NPCCrowd::Animation::MontageTransitionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETMONTAGETRANSITIONCONFIG_OFFSET))(this);
		}

		::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single> GetStateMachineTransitionConfig()
		{
			return ((::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETSTATEMACHINETRANSITIONCONFIG_OFFSET))(this);
		}

		::System::Single GetTransitionTime(::System::Int32 fromAnim, ::System::Int32 toAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETTRANSITIONTIME_OFFSET))(this, fromAnim, toAnim);
		}

		::System::Single GetDefaultTransitionTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETDEFAULTTRANSITIONTIME_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_INIT_OFFSET))(this);
		}

		::System::Void AddMontageSharedData(::System::Int32 montageKey, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Boolean& addedClip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ADDMONTAGESHAREDDATA_OFFSET))(this, montageKey, instanceConfig, addedClip);
		}

		::System::Boolean GetMontageStartIdx(::System::Int32 montageKey, ::System::Int32 layer, ::System::Int32& startIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETMONTAGESTARTIDX_OFFSET))(this, montageKey, layer, startIdx);
		}

		::System::Void AddAnimationStateMachine(::System::UInt32 entityId, ::COCJHGGDBCA* npcComponent, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex, ::System::Boolean useStateMachine, ::System::Boolean useMontage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::COCJHGGDBCA*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_OFFSET))(this, entityId, npcComponent, instanceConfig, instanceIndex, useStateMachine, useMontage);
		}

		::System::Void ApplyStateMachineRandomIntInitIfNeeded(::System::UInt32 entityId, ::COCJHGGDBCA* npcComponent, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::COCJHGGDBCA*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_APPLYSTATEMACHINERANDOMINTINITIFNEEDED_OFFSET))(this, entityId, npcComponent, instanceConfig);
		}

		static ::System::Boolean TryBuildSetStateParamInitActionConfig(::System::Int32 paramHash, ::System::Int32 value, ::System::String* transitionCondition, ::NPCCrowd::AI::AIActionSetStateParamConfig& actionConfig)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::String*, ::NPCCrowd::AI::AIActionSetStateParamConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_TRYBUILDSETSTATEPARAMINITACTIONCONFIG_OFFSET))(paramHash, value, transitionCondition, actionConfig);
		}

		static ::System::Boolean TryGetStateParamKey(::System::Int32 paramHash, ::NPCCrowd::Animation::NPCUnionAnimatorManager_NPCAnimationStateParams& stateParamKey)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Animation::NPCUnionAnimatorManager_NPCAnimationStateParams&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_TRYGETSTATEPARAMKEY_OFFSET))(paramHash, stateParamKey);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid RegisterStateParamInitActionNextFrame(::System::UInt32 entityId, ::NPCCrowd::AI::AIActionSetStateParamConfig actionConfig)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::NPCCrowd::AI::AIActionSetStateParamConfig))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_REGISTERSTATEPARAMINITACTIONNEXTFRAME_OFFSET))(this, entityId, actionConfig);
		}

		static ::System::Boolean TryGetParameterType(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 paramHash, ::UnityEngine::AnimatorControllerParameterType& parameterType)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::UnityEngine::AnimatorControllerParameterType&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_TRYGETPARAMETERTYPE_OFFSET))(instanceConfig, paramHash, parameterType);
		}

		static ::System::Int32 SampleRandomIntInclusive(::System::Int32 minValue, ::System::Int32 maxValue)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SAMPLERANDOMINTINCLUSIVE_OFFSET))(minValue, maxValue);
		}

		::System::ValueTuple_3<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32> GetStateMachine(::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>* configs, ::System::Int32 animationId)
		{
			return ((::System::ValueTuple_3<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETSTATEMACHINE_OFFSET))(this, configs, animationId);
		}

		::System::Boolean GetDrivenByStateMachine(::COCJHGGDBCA* npcComponent, ::System::Int32 animationId, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*& instanceConfig, ::System::Int32& instanceIndex, ::System::Int32& stateIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETDRIVENBYSTATEMACHINE_OFFSET))(this, npcComponent, animationId, instanceConfig, instanceIndex, stateIndex);
		}

		::System::Boolean GetInstanceConfig(::COCJHGGDBCA* npcComponent, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*& instanceConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_GETINSTANCECONFIG_OFFSET))(this, npcComponent, instanceConfig);
		}

		::System::Boolean AddAnimationStateMachine_1(::System::UInt32 entityId, ::COCJHGGDBCA* npcComponent, ::System::Int32 animationId, ::System::Boolean initOnlyForIdleState, ::System::Boolean useStateMachine, ::System::Boolean useMontage, ::System::Int32 instanceIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::COCJHGGDBCA*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_1_OFFSET))(this, entityId, npcComponent, animationId, initOnlyForIdleState, useStateMachine, useMontage, instanceIdx);
		}

		::System::Void FreeAnimationStateMachine(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_FREEANIMATIONSTATEMACHINE_OFFSET))(this, entityId);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::Animation::NPCUnionAnimator* CreateUnionAnimator(::COCJHGGDBCA* npcComp)
		{
			return ((::NPCCrowd::Animation::NPCUnionAnimator*(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_CREATEUNIONANIMATOR_OFFSET))(this, npcComp);
		}

		::System::Boolean OnAnimationInit(::COCJHGGDBCA* npcComponent, ::System::Int32 animationId, ::System::Boolean initOnlyForIdleState, ::System::Boolean useStateMachine, ::System::Boolean useMontage, ::System::Int32 instanceIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ONANIMATIONINIT_OFFSET))(this, npcComponent, animationId, initOnlyForIdleState, useStateMachine, useMontage, instanceIdx);
		}

		::System::Void ReleaseUnionAnimator(::COCJHGGDBCA* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_RELEASEUNIONANIMATOR_OFFSET))(this, npcComponent);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean SetControllerParameterBool(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERBOOL_OFFSET))(this, entityID, stateHash, value);
		}

		::System::Boolean SetControllerParameterInt(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERINT_OFFSET))(this, entityID, stateHash, value);
		}

		::System::Boolean SetControllerParameterFloat(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERFLOAT_OFFSET))(this, entityID, stateHash, value);
		}

		::System::Boolean SetControllerParameterTrigger(::System::UInt32 entityID, ::System::Int32 stateHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERTRIGGER_OFFSET))(this, entityID, stateHash);
		}

		::System::Boolean EntityAnimationReady(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_ENTITYANIMATIONREADY_OFFSET))(this, entityID);
		}

		::System::Boolean CompareStateHash(::System::UInt32 entityID, ::System::Int32 stateHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER_COMPARESTATEHASH_OFFSET))(this, entityID, stateHash);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PostUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_POSTUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATORMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
