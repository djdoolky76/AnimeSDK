#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x709100)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x7090F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x708ED0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_InertializationProcessor_LegacyJob_TypeDefinitionIndex = 81227;

	struct alignas(8) AnimationSubManager_InertializationProcessor_LegacyJob
	{
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x10
		::System::Byte _padding0[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::Object*> _lastAdditionalData; // 0x30
		::System::Byte _padding1[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData> _lastPose; // 0x50
		::System::Byte _padding2[0x28];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::Object*> _request; // 0x80
		::System::Byte _padding3[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityLocation; // 0xA0
		::System::Byte _padding4[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _additionalDataCache; // 0xC0
		::System::Byte _padding5[0x18];
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _poseCache; // 0xE0
		::System::Byte _padding6[0x28];
		::NPCCrowd::Chunk::ChunkView2D_1<::System::Object*> _delta; // 0x110
		::System::Byte _padding7[0x28];
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _pose; // 0x140
		::System::Byte _padding8[0x28];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _instanceData; // 0x170
		::System::Byte _padding9[0x18];
		::System::Int32 _indexBip001; // 0x190
		::System::Single _deltaTime; // 0x194
		::System::Int32 _frameCount; // 0x198

		::System::Void _ctor(::System::Int32 indexBip001, ::System::Single deltaTime, ::System::Int32 frameCount, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> entityIds, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> entityLocation, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::Object*> lastAdditionalData, ::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData> lastPose, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::Object*> request, ::NPCCrowd::Chunk::ChunkView_1<::System::Object*> instanceData, ::NPCCrowd::Chunk::ChunkView_1<::System::Object*> additionalDataCache, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> poseCache, ::NPCCrowd::Chunk::ChunkView2D_1<::System::Object*> delta, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::Object*>, ::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::Object*>, ::NPCCrowd::Chunk::ChunkView_1<::System::Object*>, ::NPCCrowd::Chunk::ChunkView_1<::System::Object*>, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ChunkView2D_1<::System::Object*>, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB__CTOR_OFFSET))(this, indexBip001, deltaTime, frameCount, entityIds, entityLocation, lastAdditionalData, lastPose, request, instanceData, additionalDataCache, poseCache, delta, pose);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
