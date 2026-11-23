#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FA52A0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_APP_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x3859F20)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F562E0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_HOME_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERED_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERING_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEDOWN_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEUP_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_APP_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1EC5E40)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F56380)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_HOME_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERED_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERING_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEDOWN_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEUP_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace Unity::XR::GoogleVr
{
	inline static constexpr unsigned int DaydreamController_TypeDefinitionIndex = 14330;

	class DaydreamController : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _volumeUp_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _recentered_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _volumeDown_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _recentering_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _app_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _home_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x200

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPAD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_volumeUp(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEUP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_app()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_APP_OFFSET))(this);
		}

		::System::Void set_volumeDown(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEDOWN_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_recentering(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_recentering()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERING_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_recentered()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERED_OFFSET))(this);
		}

		::System::Void set_recentered(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeDown()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEDOWN_OFFSET))(this);
		}

		::System::Void set_app(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_APP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_home()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_HOME_OFFSET))(this);
		}

		::System::Void set_home(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_HOME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeUp()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}
	};
}
