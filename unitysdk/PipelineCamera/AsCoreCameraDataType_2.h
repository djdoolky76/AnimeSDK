#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int AsCoreCameraDataType_2_TypeDefinitionIndex = 36230;

	template <typename T1, typename T2>
	struct alignas(8) AsCoreCameraDataType_2
	{
		T1 _value; // 0x0
		T2 _fallback; // 0x0
	};
}
