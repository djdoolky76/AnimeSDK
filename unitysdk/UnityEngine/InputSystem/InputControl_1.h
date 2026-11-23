#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDA6F913E2FF036D.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl.h"

namespace UnityEngine::InputSystem { template <typename T> class InputProcessor_1; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_1_TypeDefinitionIndex = 14189;

	template <typename T>
	class InputControl_1 : public ::UnityEngine::InputSystem::InputControl
	{
	public:
		::FDA6F913E2FF036D<::UnityEngine::InputSystem::InputProcessor_1<T>*> m_ProcessorStack; // 0x0
		T m_CachedValue; // 0x0
		T m_UnprocessedCachedValue; // 0x0
		::System::Boolean evaluateProcessorsEveryRead; // 0x0
	};
}
