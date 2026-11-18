#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ReadOnlyArray_1_TypeDefinitionIndex = 32147;

	template <typename T>
	struct alignas(8) ReadOnlyArray_1
	{
		::Il2CppArray<T>* m_Array; // 0x0
		::System::Int32 m_StartIndex; // 0x0
		::System::Int32 m_Length; // 0x0
	};
}
