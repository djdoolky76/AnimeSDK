#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/XR/Oculus/Input/OculusHMD.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FD8000)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1A93AE0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x385A0A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_BACK_OFFSET UNITYSDK_OFFSET(0x3FD80B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x3FD80D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED__CTOR_OFFSET UNITYSDK_OFFSET(0x3F47E90)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusHMDExtended_TypeDefinitionIndex = 14406;

	class OculusHMDExtended : public ::Unity::XR::Oculus::Input::OculusHMD
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x248
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x250

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_BACK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_BACK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMDEXTENDED_SET_TOUCHPAD_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
