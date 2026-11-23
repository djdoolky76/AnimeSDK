#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x4004530)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_BACK_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_BACK_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int GearVRTrackedController_TypeDefinitionIndex = 14555;

	class GearVRTrackedController : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x1F0

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_BACK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPAD_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPAD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_BACK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET))(this);
		}
	};
}
