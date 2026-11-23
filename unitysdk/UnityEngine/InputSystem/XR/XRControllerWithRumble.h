#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_SENDIMPULSE_OFFSET UNITYSDK_OFFSET(0x3F5C920)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRControllerWithRumble_TypeDefinitionIndex = 14228;

	class XRControllerWithRumble : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::System::Void SendImpulse(::System::Single AD68646301CC42DF, ::System::Single BD3B33D72884EDA1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_SENDIMPULSE_OFFSET))(this, AD68646301CC42DF, BD3B33D72884EDA1);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE__CTOR_OFFSET))(this);
		}
	};
}
