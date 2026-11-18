#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationSpace.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlySpan2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/Span2D_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationCacheAdditionalData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_ADJUSTROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB2D3D30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_ADVANCETIME_1_OFFSET UNITYSDK_OFFSET(0xB2D34F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_ADVANCETIME_OFFSET UNITYSDK_OFFSET(0x499390)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_APPLY_1_OFFSET UNITYSDK_OFFSET(0xB2D4810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_APPLY_OFFSET UNITYSDK_OFFSET(0x4993B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_CALCROOTINERTIALIZATIONSPACE_OFFSET UNITYSDK_OFFSET(0xB2D44C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0xB2D4A60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_CAPTURE_OFFSET UNITYSDK_OFFSET(0x4993C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_GENERATEDELTADATA_OFFSET UNITYSDK_OFFSET(0xB2D3860)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_HANDLEREQUEST_1_OFFSET UNITYSDK_OFFSET(0xB2D3470)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_HANDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x499380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_START_1_OFFSET UNITYSDK_OFFSET(0xB2D3590)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_START_OFFSET UNITYSDK_OFFSET(0x4993A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x499120)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_InertializationProcessor_LegacyJob_ExecuteContext_TypeDefinitionIndex = 81228;

	struct alignas(8) AnimationSubManager_InertializationProcessor_LegacyJob_ExecuteContext
	{
		::System::Int32 _count; // 0x10
		::System::Int32 _frameCount; // 0x14
		::System::Single _deltaTime; // 0x18
		::System::Int32 _rootIndex; // 0x1C
		::System::Int32 _boneCount; // 0x20
		::Foundation::Unreal::FName _attachingParent; // 0x24
		::System::Byte _padding0[0x4];
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> _entityId; // 0x30
		::System::Byte _padding1[0x10];
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> _request; // 0x48
		::System::Byte _padding2[0x10];
		::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> _entityLocation; // 0x60
		::System::Byte _padding3[0x10];
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> _lastAdditionalData; // 0x78
		::System::Byte _padding4[0x10];
		::NPCCrowd::Chunk::ReadOnlySpan2D_1<::UnityEngine::NapTransformData> _lastPose; // 0x90
		::System::Byte _padding5[0x18];
		::System::Span_1_9011FAD97750D224<::System::Object*> _instanceData; // 0xB0
		::System::Byte _padding6[0x10];
		::System::Span_1_9011FAD97750D224<::System::Object*> _additionalDataCache; // 0xC8
		::System::Byte _padding7[0x10];
		::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> _poseCache; // 0xE0
		::System::Byte _padding8[0x18];
		::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> _pose; // 0x100
		::System::Byte _padding9[0x18];
		::NPCCrowd::Chunk::Span2D_1<::System::Object*> _delta; // 0x120

		::System::Void _ctor(::System::Int32 count, ::System::Int32 frameCount, ::System::Single deltaTime, ::System::Int32 rootIndex, ::System::Int32 boneCount, ::Foundation::Unreal::FName attachingParent, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32> entityId, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> request, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> entityLocation, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> lastAdditionalData, ::NPCCrowd::Chunk::ReadOnlySpan2D_1<::UnityEngine::NapTransformData> lastPose, ::System::Span_1_9011FAD97750D224<::System::Object*> instanceData, ::System::Span_1_9011FAD97750D224<::System::Object*> additionalDataCache, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> poseCache, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> pose, ::NPCCrowd::Chunk::Span2D_1<::System::Object*> delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::Foundation::Unreal::FName, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::UInt32>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*>, ::NPCCrowd::Chunk::ReadOnlySpan2D_1<::UnityEngine::NapTransformData>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::Span2D_1<::System::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT__CTOR_OFFSET))(this, count, frameCount, deltaTime, rootIndex, boneCount, attachingParent, entityId, request, entityLocation, lastAdditionalData, lastPose, instanceData, additionalDataCache, poseCache, pose, delta);
		}

		::System::Void HandleRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_HANDLEREQUEST_OFFSET))(this);
		}

		::System::Void AdvanceTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_ADVANCETIME_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_START_OFFSET))(this);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_APPLY_OFFSET))(this);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_CAPTURE_OFFSET))(this);
		}

		static ::System::Void HandleRequest_1(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest& request, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_HANDLEREQUEST_1_OFFSET))(request, instanceData, frameCount);
		}

		static ::System::Void AdvanceTime_1(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_ADVANCETIME_1_OFFSET))(instanceData, deltaTime);
		}

		static ::System::Void Start_1(::System::Int32 rootIndex, ::System::Int32 boneCount, ::Foundation::Unreal::FName attachingParent, ::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> pose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastPose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastLastPose, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::Span_1_9011FAD97750D224<::System::Object*> delta)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Foundation::Unreal::FName, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_START_1_OFFSET))(rootIndex, boneCount, attachingParent, meshTransform, lastAdditionalData, lastLastAdditionalData, pose, lastPose, lastLastPose, instanceData, delta);
		}

		static ::System::Void GenerateDeltaData(::System::Int32 rootIndex, ::System::Int32 boneCount, ::System::Single duration, ::Foundation::Unreal::FName attachingParent, ::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> pose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastPose, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> lastLastPose, ::System::Span_1_9011FAD97750D224<::System::Object*> delta)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::Foundation::Unreal::FName, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_GENERATEDELTADATA_OFFSET))(rootIndex, boneCount, duration, attachingParent, meshTransform, lastAdditionalData, lastLastAdditionalData, pose, lastPose, lastLastPose, delta);
		}

		static ::System::Void AdjustRootTransform(::Foundation::Unreal::FName attachingParent, ::UnityEngine::NapTransformData meshTransform, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData, ::UnityEngine::NapTransformData& last, ::UnityEngine::NapTransformData& lastLast)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FName, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_ADJUSTROOTTRANSFORM_OFFSET))(attachingParent, meshTransform, lastAdditionalData, lastLastAdditionalData, last, lastLast);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationSpace CalcRootInertializationSpace(::Foundation::Unreal::FName attachPoint, ::UnityEngine::Quaternion meshRotationInverse, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastAdditionalData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& lastLastAdditionalData)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_PoseInertializationSpace(*)(::Foundation::Unreal::FName, ::UnityEngine::Quaternion, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_CALCROOTINERTIALIZATIONSPACE_OFFSET))(attachPoint, meshRotationInverse, lastAdditionalData, lastLastAdditionalData);
		}

		static ::System::Void Apply_1(::System::Int32 boneCount, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> delta, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> pose)
		{
			return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_APPLY_1_OFFSET))(boneCount, instanceData, delta, pose);
		}

		static ::System::Void Capture_1(::System::Int32 boneCount, ::System::Single deltaTime, ::Foundation::Unreal::FName attachParent, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData& instanceData, ::UnityEngine::NapTransformData meshTransform, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> pose, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData& additionalDataCache, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> poseCache)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single, ::Foundation::Unreal::FName, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData&, ::UnityEngine::NapTransformData, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData&, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTECONTEXT_CAPTURE_1_OFFSET))(boneCount, deltaTime, attachParent, instanceData, meshTransform, pose, additionalDataCache, poseCache);
		}
	};
}
