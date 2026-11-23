#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/Gamepad.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FDE9E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FDEC90)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_HIDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x3FDECD0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L1_OFFSET UNITYSDK_OFFSET(0x3F56300)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L2_OFFSET UNITYSDK_OFFSET(0x2A906E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L3_OFFSET UNITYSDK_OFFSET(0x1A93AE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_OPTIONSBUTTON_OFFSET UNITYSDK_OFFSET(0x3F56310)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R1_OFFSET UNITYSDK_OFFSET(0x3F562D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R2_OFFSET UNITYSDK_OFFSET(0x384F340)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R3_OFFSET UNITYSDK_OFFSET(0x385A0A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_SHAREBUTTON_OFFSET UNITYSDK_OFFSET(0x20EAB50)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_TOUCHPADBUTTON_OFFSET UNITYSDK_OFFSET(0x384EF20)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3FDEBA0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3FDEC00)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FDED00)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_HIDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x3FDED50)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L1_OFFSET UNITYSDK_OFFSET(0x3F56400)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L2_OFFSET UNITYSDK_OFFSET(0x3F56320)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L3_OFFSET UNITYSDK_OFFSET(0x3FD80B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_OPTIONSBUTTON_OFFSET UNITYSDK_OFFSET(0x3F56420)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R1_OFFSET UNITYSDK_OFFSET(0x3F56360)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R2_OFFSET UNITYSDK_OFFSET(0x3F56340)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R3_OFFSET UNITYSDK_OFFSET(0x3FD80D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_SHAREBUTTON_OFFSET UNITYSDK_OFFSET(0x3F563E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_TOUCHPADBUTTON_OFFSET UNITYSDK_OFFSET(0x3F563C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShockGamepad_TypeDefinitionIndex = 14480;

	class DualShockGamepad : public ::UnityEngine::InputSystem::Gamepad
	{
	public:
		static ::UnityEngine::InputSystem::DualShock::DualShockGamepad** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::DualShock::DualShockGamepad**)Il2CppClass::FromTypeDefinitionIndex(DualShockGamepad_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadButton_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::ButtonControl* _optionsButton_k__BackingField; // 0x218
		::UnityEngine::InputSystem::Controls::ButtonControl* _shareButton_k__BackingField; // 0x220
		::UnityEngine::InputSystem::Controls::ButtonControl* _L1_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::ButtonControl* _R1_k__BackingField; // 0x230
		::UnityEngine::InputSystem::Controls::ButtonControl* _L2_k__BackingField; // 0x238
		::UnityEngine::InputSystem::Controls::ButtonControl* _R2_k__BackingField; // 0x240
		::UnityEngine::InputSystem::Controls::ButtonControl* _L3_k__BackingField; // 0x248
		::UnityEngine::InputSystem::Controls::ButtonControl* _R3_k__BackingField; // 0x250
		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor _hidDescriptor_k__BackingField; // 0x258

		::UnityEngine::InputSystem::Controls::ButtonControl* get_R3()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R3_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_R2(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R2_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_optionsButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_OPTIONSBUTTON_OFFSET))(this);
		}

		::System::Void SetLightBarColor(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SETLIGHTBARCOLOR_OFFSET))(this, FD6BEC6563AC7110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD__CTOR_OFFSET))(this);
		}

		::System::Void set_hidDescriptor(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_HIDDESCRIPTOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_L2(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L2_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_R1()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R1_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_L1()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L1_OFFSET))(this);
		}

		::System::Void set_touchpadButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_TOUCHPADBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_TOUCHPADBUTTON_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_MAKECURRENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_R2()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R2_OFFSET))(this);
		}

		::System::Void set_optionsButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_OPTIONSBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_L2()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L2_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::DualShock::DualShockGamepad* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::DualShock::DualShockGamepad*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_L3()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L3_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::DualShock::DualShockGamepad* get_current()
		{
			return ((::UnityEngine::InputSystem::DualShock::DualShockGamepad*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_CURRENT_OFFSET))();
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_ONREMOVED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor get_hidDescriptor()
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_HIDDESCRIPTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_shareButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_SHAREBUTTON_OFFSET))(this);
		}

		::System::Void set_L3(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L3_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_shareButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_SHAREBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_L1(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L1_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_R1(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R1_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_R3(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R3_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
