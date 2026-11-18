#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingMotionTarget.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_BUILDCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x499560)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0xB2D8360)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xB2D5420)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x499400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB2D83D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x4993F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_HANDLE_OFFSET UNITYSDK_OFFSET(0x499420)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x499410)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob_TypeDefinitionIndex = 81220;

	struct alignas(8) AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob
	{
		// static const ::System::Single DefaultAdjustmentThreshold; // 0x0
		::System::Int32 _avatarId; // 0x10
		::System::Int32 _boneCount; // 0x14
		::System::Double _timestamp; // 0x18
		::System::Int32 _rootBoneIndex; // 0x20
		::System::Int32 _bip001BoneIndex; // 0x24
		::System::Single _adjustmentThreshold; // 0x28
		::System::Object* _config; // 0x2C
		::System::Byte _padding0[0xD4];
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0x108
		::System::Byte _padding1[0x8];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x118
		::System::Byte _padding2[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> _animationState; // 0x138
		::System::Byte _padding3[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _animationTickData; // 0x158
		::System::Byte _padding4[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x178
		::System::Byte _padding5[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0x198
		::System::Byte _padding6[0x28];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _warpingTarget; // 0x1C8
		::System::Byte _padding7[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _controlData; // 0x1E8

		static ::System::Nullable_1<::System::Object*> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Boolean IsValid(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this, count);
		}

		::System::Void Handle(::System::UInt32 entityId, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> skeleton, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> bones, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData state, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget& target, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> boneBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget&, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_HANDLE_OFFSET))(this, entityId, entityTransform, tickData, skeleton, bones, state, controlData, target, boneBuffer);
		}

		static ::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_OFFSET))(controlData);
		}

		::System::Void BuildControlData(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget& target, ::System::Double timestamp, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> skeleton, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> bones, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> boneBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget&, ::System::Double, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_BUILDCONTROLDATA_OFFSET))(this, controlData, target, timestamp, entityTransform, tickData, skeleton, bones, boneBuffer);
		}

		static ::UnityEngine::NapTransformData FetchTransform(::PVOID ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FETCHTRANSFORM_OFFSET))(ptr);
		}
	};
}
