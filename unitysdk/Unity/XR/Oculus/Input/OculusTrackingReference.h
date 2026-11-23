#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }

#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F56440)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusTrackingReference_TypeDefinitionIndex = 14171;

	class OculusTrackingReference : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x1B8

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_ISTRACKED_OFFSET))(this);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_ISTRACKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_GET_TRACKINGSTATE_OFFSET))(this);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTRACKINGREFERENCE_SET_TRACKINGSTATE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
