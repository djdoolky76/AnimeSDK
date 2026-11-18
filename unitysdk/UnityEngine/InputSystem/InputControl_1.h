#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl.h"

namespace UnityEngine::InputSystem { template <typename T> class InputProcessor_1; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_1_TypeDefinitionIndex = 31675;

	template <typename T>
	class InputControl_1 : public ::UnityEngine::InputSystem::InputControl
	{
	public:
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<T>*> m_ProcessorStack; // 0x0
	};
}
