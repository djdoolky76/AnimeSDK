#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x4996F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_EXTRACTROOTMOTION_OFFSET UNITYSDK_OFFSET(0xB2D9020)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB2D8E60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x4996E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x499660)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleRootMotionProcessor_LegacyJob_TypeDefinitionIndex = 81211;

	struct alignas(8) AnimationSubManager_SampleRootMotionProcessor_LegacyJob
	{
		// static const ::System::Int32 RootMotionParamCount = 0x7; // 0x0
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _sampleData; // 0x10
		::System::Byte _padding0[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x30
		::System::Byte _padding1[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData> _output; // 0x50
		::System::Byte _padding2[0x18];
		::System::Int32 _avatarId; // 0x70
		::System::Int32 _boneCount; // 0x74

		::System::Void _ctor(::System::Int32 avatarId, ::System::Int32 boneCount, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> sampleData, ::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData> output, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> entityIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB__CTOR_OFFSET))(this, avatarId, boneCount, sampleData, output, entityIds);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::UnityEngine::NapTransformData FetchTransform(::PVOID ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_FETCHTRANSFORM_OFFSET))(ptr);
		}

		static ::System::Void ExtractRootMotion(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> data, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> entityIds)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_LEGACYJOB_EXTRACTROOTMOTION_OFFSET))(avatarId, boneCount, data, result, entityIds);
		}
	};
}
