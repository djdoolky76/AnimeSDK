#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlList_1_Enumerator_TypeDefinitionIndex = 31685;

	template <typename T>
	struct alignas(8) InputControlList_1_Enumerator
	{
		::PVOID m_Indices; // 0x0
		::System::Int32 m_Count; // 0x0
		::System::Int32 m_Current; // 0x0
	};
}
