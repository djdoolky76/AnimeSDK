#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_VIVETRACKER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x4020460)
#define UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITY_XR_OPENVR_VIVETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveTracker_TypeDefinitionIndex = 14568;

	class ViveTracker : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1B8

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER__CTOR_OFFSET))(this);
		}
	};
}
