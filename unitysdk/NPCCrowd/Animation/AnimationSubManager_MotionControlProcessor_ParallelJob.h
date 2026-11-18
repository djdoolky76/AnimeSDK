#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustPelvisSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKSetting.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKControl.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKControl.h"
#include "unitysdk/NPCCrowd/Animation/FRefPose.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x634500)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__BONEADJUSTMASTERBONE_OFFSET UNITYSDK_OFFSET(0x6343D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__LOOKATIKSETTING_OFFSET UNITYSDK_OFFSET(0x6343B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_ISWITHINANGLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x106B0430)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_MOTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x634510)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_PREPROCESSBONEADJUST_OFFSET UNITYSDK_OFFSET(0x106B1F50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYADJUSTPELVIS_OFFSET UNITYSDK_OFFSET(0x106B0710)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x106A7BA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVELOOKATIK_OFFSET UNITYSDK_OFFSET(0x106AF0E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVETWOBONEIK_OFFSET UNITYSDK_OFFSET(0x106AAD90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATELOOKATIKCONTROL_OFFSET UNITYSDK_OFFSET(0x106AD9B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x106B05A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MotionControlProcessor_ParallelJob_TypeDefinitionIndex = 81123;

	struct alignas(4) AnimationSubManager_MotionControlProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_MotionControlProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x39BB0);
		}
		// static const ::System::Single WeightThreshold; // 0x0
		::System::Double _timestamp; // 0x10
		::System::Double _deltatime; // 0x18
		::System::Int32 _sourceIndex; // 0x20
		::System::Int32 _avatarId; // 0x24
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftHandSetting; // 0x28
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightHandSetting; // 0x4C
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftFootSetting; // 0x70
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightFootSetting; // 0x94
		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting _pelvisAdjustSetting; // 0xB8

		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting get__lookAtIkSetting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__LOOKATIKSETTING_OFFSET))(this);
		}

		::Unity::Collections::NativeSlice_1<::HHDPDELCDNI> get__boneAdjustMasterBone()
		{
			return ((::Unity::Collections::NativeSlice_1<::HHDPDELCDNI>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__BONEADJUSTMASTERBONE_OFFSET))(this);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void MotionControl(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Boolean& boneAdjustEnabled, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion> masterBoneAnimRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Boolean&, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_MOTIONCONTROL_OFFSET))(this, entityId, pose, motionControl, boneAdjustEnabled, masterBoneAnimRot);
		}

		static ::System::Boolean IsWithinAngleThreshold(::UnityEngine::Vector3 targetDir, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_ISWITHINANGLETHRESHOLD_OFFSET))(targetDir, forward);
		}

		static ::System::Boolean UpdateLookAtIKControl(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl& lookAtIKControl, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl&, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATELOOKATIKCONTROL_OFFSET))(lookAtIKControl, pose, settings, deltaTime);
		}

		static ::System::Boolean UpdateWeight(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl& lookAtIKControl, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATEWEIGHT_OFFSET))(lookAtIKControl, deltaTime);
		}

		static ::System::Void TrySolveTwoBoneIK(::System::UInt32 entityId, ::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl control, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting settings)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVETWOBONEIK_OFFSET))(entityId, weight, pose, control, settings);
		}

		static ::System::Void TryAdjustPelvis(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData motionControl, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting settings)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYADJUSTPELVIS_OFFSET))(entityId, pose, motionControl, settings);
		}

		static ::System::Void TrySolveLookAtIK(::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl control, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings)
		{
			return ((::System::Void(*)(::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVELOOKATIK_OFFSET))(weight, pose, control, settings);
		}

		static ::System::Void PreprocessBoneAdjust(::Unity::Collections::NativeSlice_1<::HHDPDELCDNI> masterBones, ::NPCCrowd::Animation::FRefPose pose, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion> masterBoneAnimRot)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeSlice_1<::HHDPDELCDNI>, ::NPCCrowd::Animation::FRefPose, ::System::Span_1_9011FAD97750D224<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_PREPROCESSBONEADJUST_OFFSET))(masterBones, pose, masterBoneAnimRot);
		}
	};
}
