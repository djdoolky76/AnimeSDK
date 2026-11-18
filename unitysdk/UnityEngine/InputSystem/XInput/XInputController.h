#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_DeviceFlags.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController_DeviceSubType.h"
#include "unitysdk/UnityEngine/InputSystem/Gamepad.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EA0C380)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1EA0C320)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_MENU_OFFSET UNITYSDK_OFFSET(0x1EA0C230)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x1EA0C270)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x1EA0C250)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_PARSECAPABILITIES_OFFSET UNITYSDK_OFFSET(0x1EA0C2D0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_MENU_OFFSET UNITYSDK_OFFSET(0x1EA0C240)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_VIEW_OFFSET UNITYSDK_OFFSET(0x1EA0C260)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C3B0)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_TypeDefinitionIndex = 31810;

	class XInputController : public ::UnityEngine::InputSystem::Gamepad
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _view_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType m_SubType; // 0x1E8
		::System::Boolean m_HaveParsedCapabilities; // 0x1EC
		::System::Byte _padding0[0x3];
		::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags m_Flags; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_MENU_OFFSET))(this);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_MENU_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_view()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void set_view(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_SET_VIEW_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType get_subType()
		{
			return ((::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_SUBTYPE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags get_flags()
		{
			return ((::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_GET_FLAGS_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void ParseCapabilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLER_PARSECAPABILITIES_OFFSET))(this);
		}
	};
}
