#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingMotionTarget.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_BUILDCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x6CC4F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x11FAD2C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6CC3A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11FAD330)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_GET__SKELETON_OFFSET UNITYSDK_OFFSET(0x6CC380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_HANDLE_OFFSET UNITYSDK_OFFSET(0x6CC3B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x11FAA480)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_ParallelJob_TypeDefinitionIndex = 81222;

	struct alignas(8) AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x51A40);
		}
		// static const ::System::Single DefaultAdjustmentThreshold; // 0x0
		::System::Double _timestamp; // 0x10
		::System::Int32 _sourceIndex; // 0x18
		::System::Int32 _avatarId; // 0x1C
		::System::Int32 _boneCount; // 0x20
		::System::Int32 _rootBoneIndex; // 0x24
		::System::Int32 _bip001BoneIndex; // 0x28
		::System::Single _adjustmentThreshold; // 0x2C
		::System::Object* _config; // 0x30

		::Unity::Collections::NativeArray_1<::System::Int32> get__skeleton()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_GET__SKELETON_OFFSET))(this);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void Handle(::System::UInt32 entityId, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> skeleton, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> bones, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData state, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget& target, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> boneBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget&, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_HANDLE_OFFSET))(this, entityId, entityTransform, tickData, skeleton, bones, state, controlData, target, boneBuffer);
		}

		static ::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_OFFSET))(controlData);
		}

		::System::Void BuildControlData(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget& target, ::System::Double timestamp, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> skeleton, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData> bones, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> boneBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget&, ::System::Double, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_BUILDCONTROLDATA_OFFSET))(this, controlData, target, timestamp, entityTransform, tickData, skeleton, bones, boneBuffer);
		}

		static ::UnityEngine::NapTransformData FetchTransform(::PVOID ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_PARALLELJOB_FETCHTRANSFORM_OFFSET))(ptr);
		}
	};
}
