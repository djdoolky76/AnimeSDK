#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InlinedArray_1_Enumerator_TypeDefinitionIndex = 32117;

	template <typename T>
	struct alignas(8) InlinedArray_1_Enumerator
	{
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<T> array; // 0x0
		::System::Int32 index; // 0x0
	};
}
