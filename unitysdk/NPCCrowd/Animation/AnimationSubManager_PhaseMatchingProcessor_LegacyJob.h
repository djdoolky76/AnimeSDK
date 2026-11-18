#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PhaseMatchingProcessor_Buffer.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Animation/PhaseMatchingResult.h"
#include "unitysdk/NPCCrowd/Animation/PhaseMatchingTarget.h"
#include "unitysdk/NPCCrowd/Animation/PhaseSection.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapAnimator_SampleAnimationJobRequest.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AnimationSharedData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_BUILDREQUEST_OFFSET UNITYSDK_OFFSET(0x11FA6FB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x11FA3960)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6CC0E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_FETCHSECTION_OFFSET UNITYSDK_OFFSET(0x6CC1F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_FOOTMATCHING_OFFSET UNITYSDK_OFFSET(0x11FA56A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GETADDITIONALANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x6CC360)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GETCURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x6CC1B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GETSAMPLETIME_OFFSET UNITYSDK_OFFSET(0x11FA64F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x6CC0C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_ISCHUNKVALID_OFFSET UNITYSDK_OFFSET(0x6CC0D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGADDITIONALANIMATION_OFFSET UNITYSDK_OFFSET(0x6CC2E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGANIMATION_OFFSET UNITYSDK_OFFSET(0x6CC200)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x6CC2A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x6CC240)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHING_OFFSET UNITYSDK_OFFSET(0x6CC0F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PhaseMatchingProcessor_LegacyJob_TypeDefinitionIndex = 81261;

	struct alignas(8) AnimationSubManager_PhaseMatchingProcessor_LegacyJob
	{
		// static const ::System::Single Epsilon; // 0x0
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x10
		::System::Byte _padding0[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> _states; // 0x30
		::System::Byte _padding1[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x50
		::System::Byte _padding2[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _clipData; // 0x70
		::System::Byte _padding3[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _blendingRequest; // 0x90
		::System::Byte _padding4[0x18];
		::Foundation::Container::NativeVector_1<::System::Object*> _additionalAnimation; // 0xB0
		::System::Byte _padding5[0x8];
		::System::Int32 _avatarId; // 0xC0
		::System::Int32 _areaCurveId; // 0xC4
		::System::Int32 _areaDerivativeCurveId; // 0xC8
		::System::Int32 _areaSectionCurveId; // 0xCC
		::System::Int32 _footStatusCurveId; // 0xD0
		::System::Int32 _frameCount; // 0xD4

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::Object*> CreateJob(::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData* sharedData)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(frameCount, avatar, sharedData);
		}

		::System::Boolean IsChunkValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_ISCHUNKVALID_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void PhaseMatching(::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> states, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> tickData, ::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> clipData, ::System::Span_1_9011FAD97750D224<::System::Object*> blendingRequests, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHING_OFFSET))(this, states, tickData, clipData, blendingRequests, entities);
		}

		::System::Void GetCurrentStatus(::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::PhaseMatchingTarget& target)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::PhaseMatchingTarget&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GETCURRENTSTATUS_OFFSET))(this, tickData, target);
		}

		::System::Int32 FetchSection(::System::Int32 clipId, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_FETCHSECTION_OFFSET))(this, clipId, buffer);
		}

		static ::NPCCrowd::Animation::PhaseMatchingResult FootMatching(::NPCCrowd::Animation::PhaseMatchingTarget target, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection> sections)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::NPCCrowd::Animation::PhaseMatchingTarget, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_FOOTMATCHING_OFFSET))(target, sections);
		}

		::NPCCrowd::Animation::PhaseMatchingResult PhaseMatchingAnimation(::System::Int32 clipId, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGANIMATION_OFFSET))(this, clipId, target, buffer);
		}

		::System::Void PhaseMatchingInstance(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& state, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& clipData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest& blendingRequest, ::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest&, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGINSTANCE_OFFSET))(this, state, tickData, clipData, blendingRequest, entityId, buffer);
		}

		static ::System::Single GetSampleTime(::PVOID buffer, ::System::Int32 count)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GETSAMPLETIME_OFFSET))(buffer, count);
		}

		::System::ValueTuple_2<::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single> PhaseMatchingDefaultAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& state, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::System::ValueTuple_2<::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single>(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGDEFAULTANIMATION_OFFSET))(this, state, target, buffer);
		}

		::NPCCrowd::Animation::PhaseMatchingResult PhaseMatchingAdditionalAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& state, ::NPCCrowd::Animation::PhaseMatchingResult result, ::System::Single animLength, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_PHASEMATCHINGADDITIONALANIMATION_OFFSET))(this, state, result, animLength, target, buffer);
		}

		::System::Int32 GetAdditionalAnimationCount(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_GETADDITIONALANIMATIONCOUNT_OFFSET))(this, index);
		}

		static ::UnityEngine::NapAnimator_SampleAnimationJobRequest BuildRequest(::System::Int32 animationId, ::System::Single time, ::PVOID idPtr, ::PVOID curvePtr, ::System::Int32 curveCount)
		{
			return ((::UnityEngine::NapAnimator_SampleAnimationJobRequest(*)(::System::Int32, ::System::Single, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_LEGACYJOB_BUILDREQUEST_OFFSET))(animationId, time, idPtr, curvePtr, curveCount);
		}
	};
}
