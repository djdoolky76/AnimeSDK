#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_BoneAdjustSetting.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_ADJUSTBONETRANSFORMBYONEBONELAYERDATAWITH2TARGETPOSE_OFFSET UNITYSDK_OFFSET(0x6CBDC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_ADJUSTBONETRANSFORMBYSCATTER2DBLEND_OFFSET UNITYSDK_OFFSET(0x6CBCA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_BLEND2DCOMPUTECHILDNODEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x6CBEF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6CBC90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_GET__SETTING_OFFSET UNITYSDK_OFFSET(0x6CBC70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x11F9E620)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_BoneAdjustProcessor_ParallelJob_TypeDefinitionIndex = 81218;

	struct alignas(4) AnimationSubManager_BoneAdjustProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_BoneAdjustProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x42770);
		}
		::System::Int32 _sourceIndex; // 0x10

		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting get__setting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_GET__SETTING_OFFSET))(this);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void AdjustBoneTransformByScatter2dBlend(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::FRefPose pose, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion> masterBoneAnimPoseLocalRot, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> animDrivenPose, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> ikDrivenPose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::FRefPose, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_ADJUSTBONETRANSFORMBYSCATTER2DBLEND_OFFSET))(this, entityId, tickData, pose, masterBoneAnimPoseLocalRot, animDrivenPose, ikDrivenPose);
		}

		::System::Void AdjustBoneTransformByOneBoneLayerDataWith2TargetPose(::System::Int32 masterBoneIndex, ::UnityEngine::Vector3 inputDirVec, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> drivenBoneCounts, ::System::Int32 maxDrivenBoneCount, ::System::Int32 maxTargetPoseCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3> dirVec, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3> drivenBonePosDelta, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Quaternion> drivenBoneRotDelta, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3> drivenBoneScaleDelta, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>& resultPose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Quaternion>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_ADJUSTBONETRANSFORMBYONEBONELAYERDATAWITH2TARGETPOSE_OFFSET))(this, masterBoneIndex, inputDirVec, drivenBoneCounts, maxDrivenBoneCount, maxTargetPoseCount, dirVec, drivenBonePosDelta, drivenBoneRotDelta, drivenBoneScaleDelta, resultPose);
		}

		::System::Void Blend2dComputeChildNodeWeights(::System::UInt32 entityId, ::System::Int32 masterBoneIndex, ::UnityEngine::Vector3 inputDirVec, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> drivenBoneCounts, ::System::Int32 maxDrivenBoneCount, ::System::Int32 maxTriangleCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> triangleIndices, ::System::Int32 maxEdgesCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> exteriorEdges, ::System::Int32 maxTargetPoseCount, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3> dirVec, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3> drivenBonePosDelta, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Quaternion> drivenBoneRotDelta, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3> drivenBoneScaleDelta, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>& resultPose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::Int32, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Quaternion>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector3>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_PARALLELJOB_BLEND2DCOMPUTECHILDNODEWEIGHTS_OFFSET))(this, entityId, masterBoneIndex, inputDirVec, drivenBoneCounts, maxDrivenBoneCount, maxTriangleCount, triangleIndices, maxEdgesCount, exteriorEdges, maxTargetPoseCount, dirVec, drivenBonePosDelta, drivenBoneRotDelta, drivenBoneScaleDelta, resultPose);
		}
	};
}
