#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6FA80)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_BATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0x384EF20)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F562F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3859F20)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_MENU_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x3F56300)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERROTATION_OFFSET UNITYSDK_OFFSET(0x3F562D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x20EAB50)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x3F56310)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F562E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_BATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0x3F563C0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F563A0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EC5E40)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_MENU_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x3F56400)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERROTATION_OFFSET UNITYSDK_OFFSET(0x3F56360)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x3F563E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x3F56420)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F56380)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F47E90)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int WMRSpatialController_TypeDefinitionIndex = 14314;

	class WMRSpatialController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _joystickClicked_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x208
		::UnityEngine::InputSystem::Controls::AxisControl* _batteryLevel_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField; // 0x218
		::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField; // 0x220
		::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField; // 0x230

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICKCLICKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_BATTERYLEVEL_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_BATTERYLEVEL_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_MENU_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERPOSITION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERROTATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSRISK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(this);
		}

		::System::Void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_joystickClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICKCLICKED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICK_OFFSET))(this);
		}

		::System::Void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_MENU_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSRISK_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIPPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPAD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
