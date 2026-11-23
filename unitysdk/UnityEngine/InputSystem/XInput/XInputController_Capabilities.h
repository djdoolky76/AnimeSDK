#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_A9DA46370F6057A2.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_B72539EAF092E971.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_EF839EB02326E491.h"

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_Capabilities_TypeDefinitionIndex = 14182;

	struct alignas(4) XInputController_Capabilities
	{
		::UnityEngine::InputSystem::XInput::XInputController_EF839EB02326E491 type; // 0x10
		::UnityEngine::InputSystem::XInput::XInputController_A9DA46370F6057A2 subType; // 0x14
		::UnityEngine::InputSystem::XInput::XInputController_B72539EAF092E971 flags; // 0x18
	};
}
