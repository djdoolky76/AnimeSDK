#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Animation/PhaseMatchingResult.h"
#include "unitysdk/NPCCrowd/Animation/PhaseMatchingTarget.h"
#include "unitysdk/NPCCrowd/Animation/PhaseSection.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapAnimator_SampleAnimationJobRequest.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AnimationSharedData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_BUILDREQUEST_OFFSET UNITYSDK_OFFSET(0x10DBBA10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x651D60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_FETCHSECTION_OFFSET UNITYSDK_OFFSET(0x651ED0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_FOOTMATCHING_OFFSET UNITYSDK_OFFSET(0x10DBA990)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GETADDITIONALANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x651FE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GETCURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x651E90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GETSAMPLETIME_OFFSET UNITYSDK_OFFSET(0x10DBB9D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__ADDITIONALANIMATION_OFFSET UNITYSDK_OFFSET(0x651CF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AREACURVEID_OFFSET UNITYSDK_OFFSET(0x651D20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AREADERIVATIVECURVEID_OFFSET UNITYSDK_OFFSET(0x651D30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AREASECTIONCURVEID_OFFSET UNITYSDK_OFFSET(0x651D40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AVATARID_OFFSET UNITYSDK_OFFSET(0x651D10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__FOOTSTATUSCURVEID_OFFSET UNITYSDK_OFFSET(0x651D50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGADDITIONALANIMATION_OFFSET UNITYSDK_OFFSET(0x651F60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGANIMATION_OFFSET UNITYSDK_OFFSET(0x651EE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x651F20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x651E30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHING_OFFSET UNITYSDK_OFFSET(0x651D70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x10DB83D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PhaseMatchingProcessor_ParallelJob_TypeDefinitionIndex = 81262;

	struct alignas(4) AnimationSubManager_PhaseMatchingProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_PhaseMatchingProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x4C7C0);
		}
		static ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData** StaticGet_s_sharedData()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_PhaseMatchingProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x4C7C8);
		}
		// static const ::System::Single Epsilon; // 0x0
		::System::Int32 _frameCount; // 0x10
		::System::Int32 _sourceIndex; // 0x14

		::Foundation::Container::NativeVector_1<::System::Object*> get__additionalAnimation()
		{
			return ((::Foundation::Container::NativeVector_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__ADDITIONALANIMATION_OFFSET))(this);
		}

		::System::Int32 get__avatarId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AVATARID_OFFSET))(this);
		}

		::System::Int32 get__areaCurveId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AREACURVEID_OFFSET))(this);
		}

		::System::Int32 get__areaDerivativeCurveId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AREADERIVATIVECURVEID_OFFSET))(this);
		}

		::System::Int32 get__areaSectionCurveId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__AREASECTIONCURVEID_OFFSET))(this);
		}

		::System::Int32 get__footStatusCurveId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GET__FOOTSTATUSCURVEID_OFFSET))(this);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void PhaseMatching(::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> states, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> tickData, ::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> clipData, ::System::Span_1_9011FAD97750D224<::System::Object*> blendingRequests, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1_9011FAD97750D224<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHING_OFFSET))(this, states, tickData, clipData, blendingRequests, entities);
		}

		::System::Void PhaseMatchingInstance(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& state, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& clipData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest& blendingRequest, ::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer& buffer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest&, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGINSTANCE_OFFSET))(this, state, tickData, clipData, blendingRequest, entityId, buffer);
		}

		::System::Void GetCurrentStatus(::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::PhaseMatchingTarget& target)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::PhaseMatchingTarget&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GETCURRENTSTATUS_OFFSET))(this, tickData, target);
		}

		::System::Int32 FetchSection(::System::Int32 clipId, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer& buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_FETCHSECTION_OFFSET))(this, clipId, buffer);
		}

		static ::NPCCrowd::Animation::PhaseMatchingResult FootMatching(::NPCCrowd::Animation::PhaseMatchingTarget target, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection> sections)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::NPCCrowd::Animation::PhaseMatchingTarget, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_FOOTMATCHING_OFFSET))(target, sections);
		}

		::NPCCrowd::Animation::PhaseMatchingResult PhaseMatchingAnimation(::System::Int32 clipId, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer& buffer)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGANIMATION_OFFSET))(this, clipId, target, buffer);
		}

		::System::ValueTuple_2<::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single> PhaseMatchingDefaultAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& state, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer& buffer)
		{
			return ((::System::ValueTuple_2<::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single>(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGDEFAULTANIMATION_OFFSET))(this, state, target, buffer);
		}

		::NPCCrowd::Animation::PhaseMatchingResult PhaseMatchingAdditionalAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& state, ::NPCCrowd::Animation::PhaseMatchingResult result, ::System::Single animLength, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer& buffer)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_PHASEMATCHINGADDITIONALANIMATION_OFFSET))(this, state, result, animLength, target, buffer);
		}

		::System::Int32 GetAdditionalAnimationCount(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GETADDITIONALANIMATIONCOUNT_OFFSET))(this, index);
		}

		static ::System::Single GetSampleTime(::PVOID buffer, ::System::Int32 count)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_GETSAMPLETIME_OFFSET))(buffer, count);
		}

		static ::UnityEngine::NapAnimator_SampleAnimationJobRequest BuildRequest(::System::Int32 animationId, ::System::Single time, ::PVOID idPtr, ::PVOID curvePtr, ::System::Int32 curveCount)
		{
			return ((::UnityEngine::NapAnimator_SampleAnimationJobRequest(*)(::System::Int32, ::System::Single, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_PARALLELJOB_BUILDREQUEST_OFFSET))(animationId, time, idPtr, curvePtr, curveCount);
		}
	};
}
