#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationSpace.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationCacheAdditionalData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_ADJUSTROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE114260)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_ADVANCETIME_OFFSET UNITYSDK_OFFSET(0xE112DC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_APPLY_OFFSET UNITYSDK_OFFSET(0xE115090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_CALCROOTINERTIALIZATIONSPACE_OFFSET UNITYSDK_OFFSET(0xE114D40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_CAPTURE_OFFSET UNITYSDK_OFFSET(0xE1152E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x594B20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_GENERATEDELTADATA_OFFSET UNITYSDK_OFFSET(0xE113600)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_HANDLEREQUEST_OFFSET UNITYSDK_OFFSET(0xE112D40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_START_OFFSET UNITYSDK_OFFSET(0xE112E60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xE111350)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_InertializationProcessor_ParallelJob_TypeDefinitionIndex = 81229;

	struct alignas(4) AnimationSubManager_InertializationProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_InertializationProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x3CB40);
		}
		::System::Single _deltaTime; // 0x10
		::System::Int32 _frameCount; // 0x14
		::System::Int32 _sourceIndex; // 0x18

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::System::Void HandleRequest(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest& request, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_HANDLEREQUEST_OFFSET))(request, instanceData, frameCount);
		}

		static ::System::Void AdvanceTime(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_ADVANCETIME_OFFSET))(instanceData, deltaTime);
		}

		static ::System::Void Start(::System::Int32 rootIndex, ::System::Int32 boneCount, ::Foundation::Unreal::FName attachingParent, ::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> pose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastPose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastLastPose, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::Span_1_9011FAD97750D224<::System::Object*> delta)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Foundation::Unreal::FName, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_START_OFFSET))(rootIndex, boneCount, attachingParent, meshTransform, lastAdditionalData, lastLastAdditionalData, pose, lastPose, lastLastPose, instanceData, delta);
		}

		static ::System::Void GenerateDeltaData(::System::Int32 rootIndex, ::System::Int32 boneCount, ::System::Single duration, ::Foundation::Unreal::FName attachingParent, ::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> pose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastPose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastLastPose, ::System::Span_1_9011FAD97750D224<::System::Object*> delta)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::Foundation::Unreal::FName, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_GENERATEDELTADATA_OFFSET))(rootIndex, boneCount, duration, attachingParent, meshTransform, lastAdditionalData, lastLastAdditionalData, pose, lastPose, lastLastPose, delta);
		}

		static ::System::Void AdjustRootTransform(::Foundation::Unreal::FName attachingParent, ::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& lastLast)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FName, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_ADJUSTROOTTRANSFORM_OFFSET))(attachingParent, meshTransform, lastAdditionalData, lastLastAdditionalData, last, lastLast);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationSpace CalcRootInertializationSpace(::Foundation::Unreal::FName attachPoint, ::UnityEngine::Quaternion meshRotationInverse, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_PoseInertializationSpace(*)(::Foundation::Unreal::FName, ::UnityEngine::Quaternion, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_CALCROOTINERTIALIZATIONSPACE_OFFSET))(attachPoint, meshRotationInverse, lastAdditionalData, lastLastAdditionalData);
		}

		static ::System::Void Apply(::System::Int32 boneCount, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> delta, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> pose)
		{
			return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_APPLY_OFFSET))(boneCount, instanceData, delta, pose);
		}

		static ::System::Void Capture(::System::Int32 boneCount, ::System::Single deltaTime, ::Foundation::Unreal::FName attachParent, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::UnityEngine::NapTransformData meshTransform, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> pose, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& additionalDataCache, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> poseCache)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single, ::Foundation::Unreal::FName, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::UnityEngine::NapTransformData, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_PARALLELJOB_CAPTURE_OFFSET))(boneCount, deltaTime, attachParent, instanceData, meshTransform, pose, additionalDataCache, poseCache);
		}
	};
}
