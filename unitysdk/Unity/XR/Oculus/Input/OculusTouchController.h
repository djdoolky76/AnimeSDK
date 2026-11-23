#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FBFC00)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F56300)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F562D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x20EAB50)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F56310)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F562E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_START_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x384EF20)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F562F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERTOUCHED_OFFSET UNITYSDK_OFFSET(0x3859F20)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F56400)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F56360)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F563E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F56420)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F56380)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_START_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F563C0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F563A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERTOUCHED_OFFSET UNITYSDK_OFFSET(0x1EC5E40)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F47E90)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusTouchController_TypeDefinitionIndex = 14341;

	class OculusTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _start_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouched_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouched_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::AxisControl* _triggerTouched_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x208
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x218
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x220
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x230

		::System::Void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_start()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_START_OFFSET))(this);
		}

		::System::Void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_START_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYTOUCHED_OFFSET))(this);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_triggerTouched(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYTOUCHED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET))(this);
		}

		::System::Void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_triggerTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERTOUCHED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET))(this);
		}
	};
}
