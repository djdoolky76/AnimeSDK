#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/BitSet256.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Chunk/Span2D_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_BONEEXTRACT_OFFSET UNITYSDK_OFFSET(0xFD2B4D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x601800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET UNITYSDK_OFFSET(0xFD29BF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xFD27D30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SamplePoseProcessor_ParallelJob_TypeDefinitionIndex = 81232;

	struct alignas(4) AnimationSubManager_SamplePoseProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SamplePoseProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x3CB50);
		}
		static ::System::Object** StaticGet_s_extractBoneMap()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SamplePoseProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0xDE20);
		}
		::System::Int32 _sourceIndex; // 0x10

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::System::Void ExtractPose(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::Int32 indexBip001, ::System::Int32 rootIndex, ::System::Int32 headBoneIndex, ::System::Int32 middlePointIndex, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> data, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> instanceId, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> layerMaskList, ::System::Object* extractBoneMap)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256>, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET))(avatarId, boneCount, indexBip001, rootIndex, headBoneIndex, middlePointIndex, data, result, instanceId, layerMaskList, extractBoneMap);
		}

		static ::System::Void BoneExtract(::System::UInt32 entityID, ::UnityEngine::NapTransformData headBone, ::UnityEngine::NapTransformData middlePoint, ::System::Object* extractBoneMap)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_BONEEXTRACT_OFFSET))(entityID, headBone, middlePoint, extractBoneMap);
		}
	};
}
