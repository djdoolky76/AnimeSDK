#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeChunkData_TypeDefinitionIndex = 81258;

	enum class AnimationSubManager_AvatarArchetypeChunkData : ::System::Int32
	{
		AdjustmentBlendingControlData = 20,
		BoneAdjustAnimDrivenPose = 26,
		TickData = 1,
		AnimationPose = 4,
		BlendShapeCurveID = 6,
		ClipData = 2,
		EntityLOD = 19,
		AnimationState = 0,
		InertializationLastAdditionalData = 13,
		InertializationLastPose = 14,
		RootMotion = 3,
		AdjustmentBlendingWarpingTickData = 21,
		InertializationDeltaData = 12,
		InertializationState = 11,
		EntityId = 8,
		AdjustmentBlendingTarget = 22,
		BoneAdjustIkDrivenPose = 27,
		InertializationAdditionalData = 15,
		FootStepControlData = 23,
		BoneAdjustMasterBoneAnimPoseRot = 25,
		BoneAdjustEnabled = 24,
		Max = 28,
		BlendShapeData = 7,
		EntityTransform = 9,
		IKControlData = 18,
		InertializationPose = 16,
		MotionControlData = 17,
		BlendShapeValue = 5,
		InertializationRequest = 10,
	};
}
