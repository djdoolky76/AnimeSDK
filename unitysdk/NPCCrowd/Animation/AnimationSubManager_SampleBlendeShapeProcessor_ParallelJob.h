#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/BlendShapeSampleData.h"
#include "unitysdk/NPCCrowd/Chunk/Span2D_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x67E7C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET UNITYSDK_OFFSET(0x114C6CB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x114C5900)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob_TypeDefinitionIndex = 81171;

	struct alignas(4) AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x4FD40);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::System::Void ExtractPose(::System::Int32 avatarId, ::System::Int32 blendShapeCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> data, ::NPCCrowd::Chunk::Span2D_1<::System::Int32> curveIDs, ::NPCCrowd::Chunk::Span2D_1<::System::Single> result, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> instanceId, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::BlendShapeSampleData> blendShapeDatas, ::Unity::Collections::NativeArray_1<::System::Byte> blendShapeMaskValues, ::Unity::Collections::NativeArray_1<::System::Byte> blendShapeMaskFullFlags)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::Span2D_1<::System::Int32>, ::NPCCrowd::Chunk::Span2D_1<::System::Single>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::BlendShapeSampleData>, ::Unity::Collections::NativeArray_1<::System::Byte>, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET))(avatarId, blendShapeCount, data, curveIDs, result, instanceId, blendShapeDatas, blendShapeMaskValues, blendShapeMaskFullFlags);
		}
	};
}
