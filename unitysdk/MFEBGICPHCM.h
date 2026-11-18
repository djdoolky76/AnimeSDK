#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MFEBGICPHCM_TypeDefinitionIndex = 42148;

enum class MFEBGICPHCM : ::System::Int32
{
	LockingTarget = 7,
	ControlledRotate = 4,
	BounceArea = 5,
	BackAim = 13,
	Cinemachine = 11,
	Unknow = 0,
	Count = 17,
	AutoRotate = 16,
	CameraShake = 8,
	Delay = 2,
	CameraStretch = 9,
	Initialize = 1,
	FollowRotate = 3,
	SmoothResult = 12,
	Collider = 15,
	Zoom = 14,
	Horizontal2DFollow = 6,
	CameraSceneShake = 10,
};
