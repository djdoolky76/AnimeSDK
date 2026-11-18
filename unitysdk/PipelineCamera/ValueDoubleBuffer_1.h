#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int ValueDoubleBuffer_1_TypeDefinitionIndex = 36311;

	template <typename T>
	struct alignas(8) ValueDoubleBuffer_1
	{
		T Front; // 0x0
		T Back; // 0x0
		::System::Int32 FrontIndex; // 0x0
	};
}
