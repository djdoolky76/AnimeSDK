#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6ABE0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3859F20)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F562E0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EC5E40)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F56380)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F47E90)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVROculusTouchController_TypeDefinitionIndex = 14325;

	class OpenVROculusTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x200

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET))(this);
		}

		::System::Void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET))(this);
		}

		::System::Void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
