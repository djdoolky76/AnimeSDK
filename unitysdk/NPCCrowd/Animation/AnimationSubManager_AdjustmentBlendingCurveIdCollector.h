#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_FOUNDATION_IINVOCABLEBYREF_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__INVOKE_OFFSET UNITYSDK_OFFSET(0x594B10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x282350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x363D60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x594B00)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingCurveIdCollector_TypeDefinitionIndex = 81247;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingCurveIdCollector
	{
		::PVOID _idBuffer; // 0x10
		::System::Int32 _count; // 0x18

		::System::Void _ctor(::PVOID buffer, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR__CTOR_OFFSET))(this, buffer, capacity);
		}

		::System::Void Foundation_IInvocableByRef_NPCCrowd_Animation_AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig__Invoke(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig& config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_FOUNDATION_IINVOCABLEBYREF_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__INVOKE_OFFSET))(this, config);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_COUNT_OFFSET))(this);
		}

		::PVOID get_Buffer()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_BUFFER_OFFSET))(this);
		}
	};
}
