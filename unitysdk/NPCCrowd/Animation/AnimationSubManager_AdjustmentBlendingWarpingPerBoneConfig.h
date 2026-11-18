#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AvatarSkeletonBoneIndex.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig___c__DisplayClass5_0.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_COLLECT_OFFSET UNITYSDK_OFFSET(0xB2D2040)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEID_OFFSET UNITYSDK_OFFSET(0x498FC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x498FF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__COLLECT_G__GENERATEPERBONECONFIG_5_0_OFFSET UNITYSDK_OFFSET(0xB2D2210)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3CF240)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig_TypeDefinitionIndex = 81208;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig
	{
		::System::Int32 BoneIndex; // 0x10
		::System::Object* Curves; // 0x14

		::System::Void _ctor(::System::Int32 boneIndex, ::System::Object* curves)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__CTOR_OFFSET))(this, boneIndex, curves);
		}

		::System::Void FetchCurveId(::System::Span_1_9011FAD97750D224<::System::Int32> curves, ::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::System::Int32>, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEID_OFFSET))(this, curves, index);
		}

		::System::Void FetchCurveValue(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> values, ::System::Int32& index, ::System::Object*& result)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single>, ::System::Int32&, ::System::Object*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_FETCHCURVEVALUE_OFFSET))(this, values, index, result);
		}

		static ::System::Object* Collect(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Object*(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_COLLECT_OFFSET))(avatar);
		}

		/*
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig _Collect_g__GeneratePerBoneConfig_5_0(::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex boneIndex, ::System::Int32 curveIndex, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig___c__DisplayClass5_0& param_2)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarSkeletonBoneIndex, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__COLLECT_G__GENERATEPERBONECONFIG_5_0_OFFSET))(boneIndex, curveIndex, param_2);
		}
		*/
	};
}
