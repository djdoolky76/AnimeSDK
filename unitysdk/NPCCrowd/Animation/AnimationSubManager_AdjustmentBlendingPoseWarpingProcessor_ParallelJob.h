#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_1_OFFSET UNITYSDK_OFFSET(0x5C9930)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x5C9920)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5C94C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GETPOSE_OFFSET UNITYSDK_OFFSET(0x5C95C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GET__SKELETON_OFFSET UNITYSDK_OFFSET(0x5C94A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_1_OFFSET UNITYSDK_OFFSET(0x5C94D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_OFFSET UNITYSDK_OFFSET(0xEE914A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETBONEDATA_OFFSET UNITYSDK_OFFSET(0x5C97B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x5C9870)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xEE8E510)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_WARPPOSE_OFFSET UNITYSDK_OFFSET(0x5C96D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob_TypeDefinitionIndex = 81175;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x456D0);
		}
		::System::Double _timestamp; // 0x10
		::System::Int32 _sourceIndex; // 0x18
		::System::Int32 _avatarId; // 0x1C
		::System::Int32 _boneCount; // 0x20
		::System::Object* _config; // 0x24

		::Unity::Collections::NativeArray_1<::System::Int32> get__skeleton()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GET__SKELETON_OFFSET))(this);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::System::Void SamplePose(::Foundation::EnumAsFlag_1<::System::Object*> previousFlags, ::Foundation::EnumAsFlag_1<::System::Object*> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Int32 boneCount, ::System::Int32 avatarId, ::System::Object* config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::PVOID bones, ::PVOID curveValues)
		{
			return ((::System::Void(*)(::Foundation::EnumAsFlag_1<::System::Object*>, ::Foundation::EnumAsFlag_1<::System::Object*>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Int32, ::System::Int32, ::System::Object*, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_OFFSET))(previousFlags, currentFlags, sampleData, sampleInterval, boneCount, avatarId, config, controlData, bones, curveValues);
		}

		::System::Void SamplePose_1(::Foundation::EnumAsFlag_1<::System::Object*> previousFlags, ::Foundation::EnumAsFlag_1<::System::Object*> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> poses, ::System::Object*& previous, ::System::Object*& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::System::Object*>, ::Foundation::EnumAsFlag_1<::System::Object*>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::System::Object*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_1_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, previous, current);
		}

		::System::Void GetPose(::Foundation::EnumAsFlag_1<::System::Object*> previousFlags, ::Foundation::EnumAsFlag_1<::System::Object*> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> poses, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> lastPoses, ::System::Object*& previous, ::System::Object*& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::System::Object*>, ::Foundation::EnumAsFlag_1<::System::Object*>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::System::Object*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GETPOSE_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, lastPoses, previous, current);
		}

		::System::Boolean WarpPose(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData& warpingData, ::UnityEngine::NapTransformData entityTransform, ::UnityEngine::NapTransformData& rootMotion, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> pose, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> bonesBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData&, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_WARPPOSE_OFFSET))(this, entityId, sampleData, controlData, warpingData, entityTransform, rootMotion, motionControl, pose, bonesBuffer);
		}

		::System::Void SetBoneData(::NPCCrowd::Animation::FRefPose pose, ::System::Int32 boneIndex, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::System::Int32, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETBONEDATA_OFFSET))(this, pose, boneIndex, enabled, desiredAdjusted, rootAdjusted);
		}

		::System::Void SetControlData(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted, ::UnityEngine::NapTransformData entityTransform)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETCONTROLDATA_OFFSET))(this, controlData, enabled, desiredAdjusted, rootAdjusted, entityTransform);
		}

		::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_MotionControlData& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_OFFSET))(this, controlData);
		}

		::System::Void ClearControlData_1(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_1_OFFSET))(this, controlData);
		}
	};
}
