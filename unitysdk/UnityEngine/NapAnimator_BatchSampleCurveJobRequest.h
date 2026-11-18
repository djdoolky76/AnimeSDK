#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapAnimator_BatchSampleCurveJobRequest_TypeDefinitionIndex = 6665;

	struct alignas(8) NapAnimator_BatchSampleCurveJobRequest
	{
		::System::Int32 AnimationID; // 0x10
		::System::Int32 CurveNum; // 0x14
		::PVOID CurveIds; // 0x18
		::System::Int32 SampleNum; // 0x20
		::System::Byte _padding0[0x4];
		::PVOID NormalTime; // 0x28
		::System::Int32 ValuesLen; // 0x30
		::System::Byte _padding1[0x4];
		::PVOID CurveValues; // 0x38
	};
}
