#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustPelvisSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKSetting.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKControl.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xE788680)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5A8710)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x5A8700)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x5A87C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_ISWITHINANGLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE7910F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_MOTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x5A8720)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_PREPROCESSBONEADJUST_OFFSET UNITYSDK_OFFSET(0xE792C70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_TRYADJUSTPELVIS_OFFSET UNITYSDK_OFFSET(0xE791430)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVELOOKATIK_OFFSET UNITYSDK_OFFSET(0xE78FDA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVETWOBONEIK_OFFSET UNITYSDK_OFFSET(0xE78BA50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_UPDATELOOKATIKCONTROL_OFFSET UNITYSDK_OFFSET(0xE78E670)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_UPDATEWEIGHT_OFFSET UNITYSDK_OFFSET(0xE791260)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MotionControlProcessor_LegacyJob_TypeDefinitionIndex = 81122;

	struct alignas(8) AnimationSubManager_MotionControlProcessor_LegacyJob
	{
		// static const ::System::Single WeightThreshold; // 0x0
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0x10
		::System::Byte _padding0[0x28];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _motionControl; // 0x40
		::System::Byte _padding1[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x60
		::System::Byte _padding2[0x18];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x80
		::System::Byte _padding3[0x18];
		::Unity::Collections::NativeSlice_1<::System::Int32> _boneParents; // 0xA0
		::System::Byte _padding4[0x8];
		::System::Double _timestamp; // 0xB0
		::System::Double _deltatime; // 0xB8
		::System::Int32 _avatarId; // 0xC0
		::System::Byte _padding5[0x4];
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting _lookAtIkSetting; // 0xC8
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftHandSetting; // 0x120
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightHandSetting; // 0x144
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftFootSetting; // 0x168
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightFootSetting; // 0x18C
		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting _pelvisAdjustSetting; // 0x1B0
		::Unity::Collections::NativeSlice_1<::HHDPDELCDNI> _boneAdjustMasterBone; // 0x1C0
		::System::Byte _padding6[0x8];
		::NPCCrowd::Chunk::ChunkView_1<::System::Boolean> _boneAdjustEnabled; // 0x1D0
		::System::Byte _padding7[0x18];
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::Quaternion> _boneAdjustMasterBoneAnimRot; // 0x1F0

		static ::System::Nullable_1<::System::Object*> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp, ::System::Double deltatime)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp, deltatime);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void MotionControl(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Boolean& boneAdjustEnabled, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion> masterBoneAnimRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Boolean&, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_MOTIONCONTROL_OFFSET))(this, entityId, pose, motionControl, boneAdjustEnabled, masterBoneAnimRot);
		}

		static ::System::Boolean IsWithinAngleThreshold(::UnityEngine::Vector3 targetDir, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_ISWITHINANGLETHRESHOLD_OFFSET))(targetDir, forward);
		}

		static ::System::Boolean UpdateLookAtIKControl(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl& lookAtIKControl, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl&, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_UPDATELOOKATIKCONTROL_OFFSET))(lookAtIKControl, pose, settings, deltaTime);
		}

		static ::System::Boolean UpdateWeight(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl& lookAtIKControl, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_UPDATEWEIGHT_OFFSET))(lookAtIKControl, deltaTime);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this);
		}

		static ::System::Void TrySolveTwoBoneIK(::System::UInt32 entityId, ::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl control, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting settings)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVETWOBONEIK_OFFSET))(entityId, weight, pose, control, settings);
		}

		static ::System::Void TryAdjustPelvis(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData motionControl, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting settings)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_TRYADJUSTPELVIS_OFFSET))(entityId, pose, motionControl, settings);
		}

		static ::System::Void TrySolveLookAtIK(::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl control, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings)
		{
			return ((::System::Void(*)(::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVELOOKATIK_OFFSET))(weight, pose, control, settings);
		}

		static ::System::Void PreprocessBoneAdjust(::Unity::Collections::NativeSlice_1<::HHDPDELCDNI> masterBones, ::NPCCrowd::Animation::FRefPose pose, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion> masterBoneAnimRot)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeSlice_1<::HHDPDELCDNI>, ::NPCCrowd::Animation::FRefPose, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_LEGACYJOB_PREPROCESSBONEADJUST_OFFSET))(masterBones, pose, masterBoneAnimRot);
		}
	};
}
