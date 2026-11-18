#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_FLUSHER_APPLYLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0x633040)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_FLUSHER_FOUNDATION_IIN_OFFSET UNITYSDK_OFFSET(0x634380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_FLUSHER__CTOR_OFFSET UNITYSDK_OFFSET(0x632F40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob_Flusher_TypeDefinitionIndex = 81176;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob_Flusher
	{
		::PVOID _valueBuffer; // 0x10
		::System::Int32 _valueCount; // 0x18
		::System::Byte _padding0[0x4];
		::PVOID _skeleton; // 0x20
		::System::Int32 _boneCount; // 0x28
		::System::Byte _padding1[0x4];
		::PVOID _bones; // 0x30
		::UnityEngine::NapTransformData _loop; // 0x38
		::UnityEngine::NapTransformData _origin; // 0x68
		::System::Single _loopCount; // 0x98

		::System::Void _ctor(::PVOID buffer, ::System::Int32 capacity, ::Unity::Collections::NativeArray_1<::System::Int32> skeleton, ::PVOID bones, ::UnityEngine::NapTransformData loop, ::UnityEngine::NapTransformData origin, ::System::Int32 loopCount)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Int32>, ::PVOID, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_FLUSHER__CTOR_OFFSET))(this, buffer, capacity, skeleton, bones, loop, origin, loopCount);
		}

		::System::Void Foundation_IIn(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig& config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData& sampleData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_FLUSHER_FOUNDATION_IIN_OFFSET))(this, config, controlData, sampleData);
		}

		::System::Object* ApplyLoopCount(::System::Object* ratios)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_FLUSHER_APPLYLOOPCOUNT_OFFSET))(this, ratios);
		}
	};
}
