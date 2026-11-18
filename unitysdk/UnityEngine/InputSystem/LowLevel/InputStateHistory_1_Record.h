#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::LowLevel { template <typename T> class InputStateHistory_1; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateHistory_1_Record_TypeDefinitionIndex = 32026;

	template <typename T>
	struct alignas(8) InputStateHistory_1_Record
	{
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<T>* m_Owner; // 0x0
		::System::Int32 m_IndexPlusOne; // 0x0
		::System::UInt32 m_Version; // 0x0
	};
}
