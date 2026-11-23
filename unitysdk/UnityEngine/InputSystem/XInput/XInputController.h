#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_A9DA46370F6057A2.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_B72539EAF092E971.h"
#include "unitysdk/UnityEngine/InputSystem/Gamepad.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F5C7C0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x3F5C8A0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_MENU_OFFSET UNITYSDK_OFFSET(0x384EF20)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x3F5C8E0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x3F56310)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_PARSECAPABILITIES_OFFSET UNITYSDK_OFFSET(0x3F5C810)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_MENU_OFFSET UNITYSDK_OFFSET(0x3F563C0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_VIEW_OFFSET UNITYSDK_OFFSET(0x3F56420)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_TypeDefinitionIndex = 14183;

	class XInputController : public ::UnityEngine::InputSystem::Gamepad
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::ButtonControl* _view_k__BackingField; // 0x218
		::System::Boolean m_HaveParsedCapabilities; // 0x220
		::System::Byte _padding0[0x3];
		::UnityEngine::InputSystem::XInput::XInputController_A9DA46370F6057A2 m_SubType; // 0x224
		::UnityEngine::InputSystem::XInput::XInputController_B72539EAF092E971 m_Flags; // 0x228

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_MENU_OFFSET))(this);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_MENU_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ParseCapabilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_PARSECAPABILITIES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XInput::XInputController_A9DA46370F6057A2 get_subType()
		{
			return ((::UnityEngine::InputSystem::XInput::XInputController_A9DA46370F6057A2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_SUBTYPE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_view()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XInput::XInputController_B72539EAF092E971 get_flags()
		{
			return ((::UnityEngine::InputSystem::XInput::XInputController_B72539EAF092E971(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_FLAGS_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_view(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_VIEW_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
