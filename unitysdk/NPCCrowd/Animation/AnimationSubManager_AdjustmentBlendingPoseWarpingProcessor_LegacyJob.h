#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_1_OFFSET UNITYSDK_OFFSET(0x632F20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x632F10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x105E55A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x632AB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_GETPOSE_OFFSET UNITYSDK_OFFSET(0x632BB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x632AA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x632F30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SAMPLEPOSE_1_OFFSET UNITYSDK_OFFSET(0x632AC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SAMPLEPOSE_OFFSET UNITYSDK_OFFSET(0x105E8570)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SETBONEDATA_OFFSET UNITYSDK_OFFSET(0x632DA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SETCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x632E60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_WARPPOSE_OFFSET UNITYSDK_OFFSET(0x632CC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_LegacyJob_TypeDefinitionIndex = 81177;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_LegacyJob
	{
		::System::Int32 _avatarId; // 0x10
		::System::Int32 _boneCount; // 0x14
		::System::Double _timestamp; // 0x18
		::System::Object* _config; // 0x20
		::System::Byte _padding0[0xD8];
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0x100
		::System::Byte _padding1[0x8];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x110
		::System::Byte _padding2[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransform; // 0x130
		::System::Byte _padding3[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _sampleData; // 0x150
		::System::Byte _padding4[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _controlData; // 0x170
		::System::Byte _padding5[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _warpingData; // 0x190
		::System::Byte _padding6[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _motionControl; // 0x1B0
		::System::Byte _padding7[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData> _rootMotion; // 0x1D0
		::System::Byte _padding8[0x18];
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _poses; // 0x1F0

		static ::System::Nullable_1<::System::Object*> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::System::Void SamplePose(::Foundation::EnumAsFlag_1<::System::Object*> previousFlags, ::Foundation::EnumAsFlag_1<::System::Object*> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Int32 boneCount, ::System::Int32 avatarId, ::System::Object* config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::PVOID bones, ::PVOID curveValues)
		{
			return ((::System::Void(*)(::Foundation::EnumAsFlag_1<::System::Object*>, ::Foundation::EnumAsFlag_1<::System::Object*>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Int32, ::System::Int32, ::System::Object*, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SAMPLEPOSE_OFFSET))(previousFlags, currentFlags, sampleData, sampleInterval, boneCount, avatarId, config, controlData, bones, curveValues);
		}

		::System::Void SamplePose_1(::Foundation::EnumAsFlag_1<::System::Object*> previousFlags, ::Foundation::EnumAsFlag_1<::System::Object*> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> poses, ::System::Object*& previous, ::System::Object*& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::System::Object*>, ::Foundation::EnumAsFlag_1<::System::Object*>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::System::Object*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SAMPLEPOSE_1_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, previous, current);
		}

		::System::Void GetPose(::Foundation::EnumAsFlag_1<::System::Object*> previousFlags, ::Foundation::EnumAsFlag_1<::System::Object*> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> poses, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> lastPoses, ::System::Object*& previous, ::System::Object*& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::System::Object*>, ::Foundation::EnumAsFlag_1<::System::Object*>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::System::Object*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_GETPOSE_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, lastPoses, previous, current);
		}

		::System::Boolean WarpPose(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData& warpingData, ::UnityEngine::NapTransformData entityTransform, ::UnityEngine::NapTransformData& rootMotion, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> pose, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> bonesBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData&, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_WARPPOSE_OFFSET))(this, entityId, sampleData, controlData, warpingData, entityTransform, rootMotion, motionControl, pose, bonesBuffer);
		}

		::System::Void SetBoneData(::NPCCrowd::Animation::FRefPose pose, ::System::Int32 boneIndex, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::System::Int32, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SETBONEDATA_OFFSET))(this, pose, boneIndex, enabled, desiredAdjusted, rootAdjusted);
		}

		::System::Void SetControlData(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted, ::UnityEngine::NapTransformData entityTransform)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_SETCONTROLDATA_OFFSET))(this, controlData, enabled, desiredAdjusted, rootAdjusted, entityTransform);
		}

		::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_MotionControlData& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_OFFSET))(this, controlData);
		}

		::System::Void ClearControlData_1(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_1_OFFSET))(this, controlData);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this);
		}
	};
}
