#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"

#define EC73AE1FA38CF716_A571058B07AE669F_OFFSET UNITYSDK_OFFSET(0x3FE0B50)
#define EC73AE1FA38CF716_B3418286AD7B272E_OFFSET UNITYSDK_OFFSET(0x3FE19C0)

inline static constexpr unsigned int EC73AE1FA38CF716_TypeDefinitionIndex = 14449;

class EC73AE1FA38CF716 : public ::System::Object
{
public:
	static ::System::Boolean A571058B07AE669F(::PVOID F3AD50177D19FA27, ::System::Int32 AFA4CC74945C7392, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor& F5ED020BE7E6B076)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor&))((::PBYTE)hIl2Cpp + EC73AE1FA38CF716_A571058B07AE669F_OFFSET))(F3AD50177D19FA27, AFA4CC74945C7392, F5ED020BE7E6B076);
	}

	static ::System::Int32 B3418286AD7B272E(::System::Int32 F8F57A03C50D8DF9, ::PVOID FCABD732530D7FDE, ::PVOID FE4E31AD909AB625)
	{
		return ((::System::Int32(*)(::System::Int32, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + EC73AE1FA38CF716_B3418286AD7B272E_OFFSET))(F8F57A03C50D8DF9, FCABD732530D7FDE, FE4E31AD909AB625);
	}
};
