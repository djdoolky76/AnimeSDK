#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3FDE990)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FDE920)

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShock4HIDInputReport_TypeDefinitionIndex = 14469;

	struct alignas(4) DualShock4HIDInputReport
	{
		static ::AFB530854B88B5A8* StaticGet_Format()
		{
			return (::AFB530854B88B5A8*)Il2CppClass::FromTypeDefinitionIndex(DualShock4HIDInputReport_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::Byte buttons1; // 0x14
		::System::Byte buttons2; // 0x15
		::System::Byte buttons3; // 0x16
		::System::Byte leftTrigger; // 0x17
		::System::Byte rightTrigger; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT__CCTOR_OFFSET))();
		}

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_LOWLEVEL_DUALSHOCK4HIDINPUTREPORT_GET_FORMAT_OFFSET))(this);
		}
	};
}
