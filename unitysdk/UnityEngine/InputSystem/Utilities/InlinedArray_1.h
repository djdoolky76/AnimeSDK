#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InlinedArray_1_TypeDefinitionIndex = 32116;

	template <typename T>
	struct alignas(8) InlinedArray_1
	{
		::System::Int32 length; // 0x0
		T firstValue; // 0x0
		::Il2CppArray<T>* additionalValues; // 0x0
	};
}
