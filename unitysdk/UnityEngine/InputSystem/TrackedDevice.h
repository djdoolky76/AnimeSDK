#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6E110)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEROTATION_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEROTATION_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F64F30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int TrackedDevice_TypeDefinitionIndex = 14269;

	class TrackedDevice : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField; // 0x1A8

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_ISTRACKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEROTATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEPOSITION_OFFSET))(this);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_TRACKINGSTATE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_ISTRACKED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_TRACKINGSTATE_OFFSET))(this);
		}

		::System::Void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE__CTOR_OFFSET))(this);
		}
	};
}
