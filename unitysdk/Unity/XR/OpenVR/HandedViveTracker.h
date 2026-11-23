#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/XR/OpenVR/ViveTracker.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FF5830)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int HandedViveTracker_TypeDefinitionIndex = 14507;

	class HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1E0

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRACKPADPRESSED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primary()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_PRIMARY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIPPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRIGGERPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER__CTOR_OFFSET))(this);
		}

		::System::Void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRACKPADPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_PRIMARY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_FINISHSETUP_OFFSET))(this);
		}
	};
}
