#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet256.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/NPCCrowd/Chunk/Span2D_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_BONEEXTRACT_OFFSET UNITYSDK_OFFSET(0xE7966E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5A88F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_EXTRACTPOSE_OFFSET UNITYSDK_OFFSET(0xE794E00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x5A88E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x5A87D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SamplePoseProcessor_LegacyJob_TypeDefinitionIndex = 81231;

	struct alignas(8) AnimationSubManager_SamplePoseProcessor_LegacyJob
	{
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _clipData; // 0x10
		::System::Byte _padding0[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x30
		::System::Byte _padding1[0x18];
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _output; // 0x50
		::System::Byte _padding2[0x28];
		::System::Int32 _avatarId; // 0x80
		::System::Int32 _boneCount; // 0x84
		::System::Int32 _indexBip001; // 0x88
		::System::Int32 _rootIndex; // 0x8C
		::Unity::Collections::NativeArray_1<::Foundation::BitSet256> _layerMaskList; // 0x90
		::System::Byte _padding3[0x8];
		::System::Int32 _headBoneIndex; // 0xA0
		::System::Int32 _middlePointIndex; // 0xA4
		::System::Object* _extractBoneMap; // 0xA8

		::System::Void _ctor(::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> clipData, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> output, ::System::Int32 avatarId, ::System::Int32 boneCount, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> layerMaskList, ::System::Int32 indexBip001, ::System::Int32 rootIndex, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> entityIds, ::System::Object* extractBoneMap, ::System::Int32 headBoneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData>, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256>, ::System::Int32, ::System::Int32, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32>, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB__CTOR_OFFSET))(this, clipData, output, avatarId, boneCount, layerMaskList, indexBip001, rootIndex, entityIds, extractBoneMap, headBoneIndex);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::System::Void ExtractPose(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::Int32 indexBip001, ::System::Int32 rootIndex, ::System::Int32 headBoneIndex, ::System::Int32 middlePointIndex, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> data, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> instanceId, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> layerMaskList, ::System::Object* extractBoneMap)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256>, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_EXTRACTPOSE_OFFSET))(avatarId, boneCount, indexBip001, rootIndex, headBoneIndex, middlePointIndex, data, result, instanceId, layerMaskList, extractBoneMap);
		}

		static ::System::Void BoneExtract(::System::UInt32 entityID, ::UnityEngine::NapTransformData headBone, ::UnityEngine::NapTransformData middlePoint, ::System::Object* extractBoneMap)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_LEGACYJOB_BONEEXTRACT_OFFSET))(entityID, headBone, middlePoint, extractBoneMap);
		}
	};
}
