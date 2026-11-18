#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int OneOrMore_2_TypeDefinitionIndex = 32144;

	template <typename T1, typename T2>
	struct alignas(8) OneOrMore_2
	{
		::System::Boolean m_IsSingle; // 0x0
		T1 m_Single; // 0x0
		T2 m_Multiple; // 0x0
	};
}
