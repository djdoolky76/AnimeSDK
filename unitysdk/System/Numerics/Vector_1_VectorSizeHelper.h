#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Numerics { class Vector; }

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_1_VectorSizeHelper_TypeDefinitionIndex = 3862;

	template <typename T>
	struct alignas(8) Vector_1_VectorSizeHelper
	{
		::System::Numerics::Vector* _placeholder; // 0x0
		::System::Byte _byte; // 0x0
	};
}
