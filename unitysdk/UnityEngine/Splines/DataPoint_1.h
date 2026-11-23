#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int DataPoint_1_TypeDefinitionIndex = 20627;

	template <typename T>
	struct alignas(8) DataPoint_1
	{
		::System::Single m_Index; // 0x0
		T m_Value; // 0x0
	};
}
