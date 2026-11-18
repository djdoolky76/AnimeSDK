#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonMecanim_MecanimTranslator_MixMode.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Spine/Unity/SkeletonMecanim_MecanimTranslator_ClipInfo.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace Spine { class Animation; }
namespace Spine { class Skeleton; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator_ClipInfos; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1FB5F700)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1FB5F600)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_1_OFFSET UNITYSDK_OFFSET(0x1FB60970)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x1FB60580)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1FB602C0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET UNITYSDK_OFFSET(0x1FB60710)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLY_OFFSET UNITYSDK_OFFSET(0x1FB61750)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x1FB60010)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GATHERANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x1FB609C0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET UNITYSDK_OFFSET(0x1FB64D90)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x1FB64F00)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET UNITYSDK_OFFSET(0x1FB644D0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET UNITYSDK_OFFSET(0x1FB64590)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXFROM_OFFSET UNITYSDK_OFFSET(0x1FB60610)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXMODE_OFFSET UNITYSDK_OFFSET(0x1FB64670)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x1FB60EC0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1FB5F800)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1FB5F810)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET UNITYSDK_OFFSET(0x1FB5FAA0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET UNITYSDK_OFFSET(0x1FB60D70)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB5FCA0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_MATCHWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1FB646D0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_MIGRATELAYERBLENDMODES_OFFSET UNITYSDK_OFFSET(0x1FB60B30)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FB60630)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1FB5F780)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x1FB5F680)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB651C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_TypeDefinitionIndex = 38140;

	class SkeletonMecanim_MecanimTranslator : public ::System::Object
	{
	public:
		// static const ::System::Single WeightEpsilon; // 0x0
		::System::Boolean autoReset; // 0x10
		::System::Boolean useCustomMixMode; // 0x11
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::Object*>* layerMixModes; // 0x18
		::Il2CppArray<::System::Boolean>* layerIsAdditive; // 0x20
		::Il2CppArray<::System::Int32>* layerBlendModesDeprecated; // 0x28
		::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* _OnClipApplied; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Spine::Animation*>* animationTable; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* clipNameHashCodeTable; // 0x40
		::System::Collections::Generic::List_1<::Spine::Animation*>* previousAnimations; // 0x48
		::Il2CppArray<::System::Object*>* layerClipInfos; // 0x50
		::System::Int32 layerCount; // 0x58
		::System::Byte _padding1[0x4];
		::UnityEngine::Animator* animator; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR__CTOR_OFFSET))(this);
		}

		::System::Void add__OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD__ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::System::Void remove__OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE__ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::System::Void add_OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ADD_ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::System::Void remove_OnClipApplied(::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_REMOVE_ONCLIPAPPLIED_OFFSET))(this, value);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Int32 get_MecanimLayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MecanimLayerNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GET_MECANIMLAYERNAMES_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Animator* animator, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITIALIZE_OFFSET))(this, animator, skeletonDataAsset);
		}

		::System::Boolean ApplyAnimation(::Spine::Skeleton* skeleton, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfo info, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::System::Single layerWeight, ::System::Boolean layerIsAdditive, ::System::Int32& appliedCount, ::System::Boolean useCustomClipWeight, ::System::Single customClipWeight)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Int32&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYANIMATION_OFFSET))(this, skeleton, info, stateInfo, layerIndex, layerWeight, layerIsAdditive, appliedCount, useCustomClipWeight, customClipWeight);
		}

		::System::Boolean ApplyInterruptionAnimation(::Spine::Skeleton* skeleton, ::System::Boolean interpolateWeightTo1, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfo info, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::System::Single layerWeight, ::System::Boolean layerIsAdditive, ::System::Int32& appliedCount, ::System::Single interruptingClipTimeAddition, ::System::Boolean useCustomClipWeight, ::System::Single customClipWeight)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Int32&, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLYINTERRUPTIONANIMATION_OFFSET))(this, skeleton, interpolateWeightTo1, info, stateInfo, layerIndex, layerWeight, layerIsAdditive, appliedCount, interruptingClipTimeAddition, useCustomClipWeight, customClipWeight);
		}

		::System::Void OnClipAppliedCallback(::Spine::Animation* animation, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::System::Single time, ::System::Boolean isLooping, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDCALLBACK_OFFSET))(this, animation, stateInfo, layerIndex, time, isLooping, weight);
		}

		::System::Void GatherAnimatorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GATHERANIMATORSTATE_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_APPLY_OFFSET))(this, skeleton);
		}

		::System::Void MatchWeights(::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfos* clipInfos, ::System::Boolean hasNext, ::System::Boolean isInterruptionActive, ::System::Int32 clipInfoCount, ::System::Int32 nextClipInfoCount, ::System::Int32 interruptingClipInfoCount, ::System::Collections::Generic::IList_1<::System::Object*>* clipInfo, ::System::Collections::Generic::IList_1<::System::Object*>* nextClipInfo, ::System::Collections::Generic::IList_1<::System::Object*>* interruptingClipInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonMecanim_MecanimTranslator_ClipInfos*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Object*>*, ::System::Collections::Generic::IList_1<::System::Object*>*, ::System::Collections::Generic::IList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_MATCHWEIGHTS_OFFSET))(this, clipInfos, hasNext, isInterruptionActive, clipInfoCount, nextClipInfoCount, interruptingClipInfoCount, clipInfo, nextClipInfo, interruptingClipInfo);
		}

		::System::Collections::Generic::KeyValuePair_2<::Spine::Animation*, ::System::Single> GetActiveAnimationAndTime(::System::Int32 layer)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::Spine::Animation*, ::System::Single>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETACTIVEANIMATIONANDTIME_OFFSET))(this, layer);
		}

		static ::System::Single AnimationTime(::System::Single normalizedTime, ::System::Single clipLength, ::System::Boolean loop, ::System::Boolean reversed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_OFFSET))(normalizedTime, clipLength, loop, reversed);
		}

		static ::System::Single AnimationTime_1(::System::Single normalizedTime, ::System::Single clipLength, ::System::Boolean reversed)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONTIME_1_OFFSET))(normalizedTime, clipLength, reversed);
		}

		::System::Void InitClipInfosForLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INITCLIPINFOSFORLAYERS_OFFSET))(this);
		}

		::System::Void ClearClipInfosForLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLEARCLIPINFOSFORLAYERS_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode GetMixMode(::System::Int32 layer, ::System::Boolean layerIsAdditive)
		{
			return ((::Spine::Unity::SkeletonMecanim_MecanimTranslator_MixMode(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXMODE_OFFSET))(this, layer, layerIsAdditive);
		}

		static ::Spine::MixFrom GetMixFrom(::System::Int32 layerIndex, ::System::Boolean add, ::System::Int32 appliedCount)
		{
			return ((::Spine::MixFrom(*)(::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETMIXFROM_OFFSET))(layerIndex, add, appliedCount);
		}

		::System::Void MigrateLayerBlendModes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_MIGRATELAYERBLENDMODES_OFFSET))(this);
		}

		::System::Void GetStateUpdatesFromAnimator(::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETSTATEUPDATESFROMANIMATOR_OFFSET))(this, layer);
		}

		::System::Void GetAnimatorClipInfos(::System::Int32 layer, ::System::Boolean& isInterruptionActive, ::System::Int32& clipInfoCount, ::System::Int32& nextClipInfoCount, ::System::Int32& interruptingClipInfoCount, ::System::Collections::Generic::IList_1<::System::Object*>*& clipInfo, ::System::Collections::Generic::IList_1<::System::Object*>*& nextClipInfo, ::System::Collections::Generic::IList_1<::System::Object*>*& interruptingClipInfo, ::System::Boolean& shallInterpolateWeightTo1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::IList_1<::System::Object*>*&, ::System::Collections::Generic::IList_1<::System::Object*>*&, ::System::Collections::Generic::IList_1<::System::Object*>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORCLIPINFOS_OFFSET))(this, layer, isInterruptionActive, clipInfoCount, nextClipInfoCount, interruptingClipInfoCount, clipInfo, nextClipInfo, interruptingClipInfo, shallInterpolateWeightTo1);
		}

		::System::Void GetAnimatorStateInfos(::System::Int32 layer, ::System::Boolean& isInterruptionActive, ::UnityEngine::AnimatorStateInfo& stateInfo, ::UnityEngine::AnimatorStateInfo& nextStateInfo, ::UnityEngine::AnimatorStateInfo& interruptingStateInfo, ::System::Single& interruptingClipTimeAddition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATORSTATEINFOS_OFFSET))(this, layer, isInterruptionActive, stateInfo, nextStateInfo, interruptingStateInfo, interruptingClipTimeAddition);
		}

		::Spine::Animation* GetAnimation(::UnityEngine::AnimationClip* clip)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_GETANIMATION_OFFSET))(this, clip);
		}
	};
}
