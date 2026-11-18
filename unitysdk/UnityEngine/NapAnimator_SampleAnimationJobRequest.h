#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapAnimator_SampleAnimationJobRequest_TypeDefinitionIndex = 6664;

	struct alignas(8) NapAnimator_SampleAnimationJobRequest
	{
		::System::Int32 AnimationID; // 0x10
		::System::Single Time; // 0x14
		::System::Single PrevTime; // 0x18
		::System::Int32 PlayFlag; // 0x1C
		::System::Int32 OutPoseDataLen; // 0x20
		::System::Byte _padding0[0x4];
		::PVOID OutPoseDataPtr; // 0x28
		::PVOID OutRootMotionDataPtr; // 0x30
		::System::Int32 CurveNum; // 0x38
		::System::Byte _padding1[0x4];
		::PVOID CurveIds; // 0x40
		::PVOID OutCurveValues; // 0x48
	};
}
