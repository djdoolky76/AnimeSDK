#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FBFB10)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSREMOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusRemote_TypeDefinitionIndex = 14374;

	class OculusRemote : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _start_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x1A0

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_BACK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_BACK_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_TOUCHPAD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_SET_START_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_start()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSREMOTE_GET_START_OFFSET))(this);
		}
	};
}
