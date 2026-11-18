#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x633290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXTRACTROOTMOTION_OFFSET UNITYSDK_OFFSET(0x105F1110)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x105F0F50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x105F06B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleRootMotionProcessor_ParallelJob_TypeDefinitionIndex = 81212;

	struct alignas(4) AnimationSubManager_SampleRootMotionProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SampleRootMotionProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x4B0D0);
		}
		// static const ::System::Int32 RootMotionParamCount = 0x7; // 0x0

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::UnityEngine::NapTransformData FetchTransform(::PVOID ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_FETCHTRANSFORM_OFFSET))(ptr);
		}

		static ::System::Void ExtractRootMotion(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> data, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> entityIds)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXTRACTROOTMOTION_OFFSET))(avatarId, boneCount, data, result, entityIds);
		}
	};
}
