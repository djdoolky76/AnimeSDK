#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ToolBuddy::Pooling::Collections
{
	inline static constexpr unsigned int SubArray_1_TypeDefinitionIndex = 26127;

	template <typename T>
	struct alignas(8) SubArray_1
	{
		::Il2CppArray<T>* Array; // 0x0
		::System::Int32 Count; // 0x0
	};
}
