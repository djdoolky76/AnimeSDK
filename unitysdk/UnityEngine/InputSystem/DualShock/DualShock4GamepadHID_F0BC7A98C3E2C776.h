#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualShock4HIDInputReport.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_F0BC7A98C3E2C776_AD8A550C559B6452_OFFSET UNITYSDK_OFFSET(0x3F48C10)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_F0BC7A98C3E2C776_F1A22086D4FDAD79_OFFSET UNITYSDK_OFFSET(0x3F48BC0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShock4GamepadHID_F0BC7A98C3E2C776_TypeDefinitionIndex = 14205;

	struct alignas(4) DualShock4GamepadHID_F0BC7A98C3E2C776
	{
		::System::Byte EEC232E9ECA7AB55; // 0x10
		::System::Byte B62BB4D7DA28BEE8; // 0x11
		::System::Byte BC4EBB2549458698; // 0x12
		::System::Byte F84AE195F49C9A15; // 0x13
		::System::Byte BF3B27577477CBA1; // 0x14
		::System::Byte B9ECF59B7D7E7E56; // 0x15
		::System::Byte A7A557FAD14A52C9; // 0x16
		::System::Byte AACEAFD5D2B6351C; // 0x17
		::System::Byte E63A7B5358DF5094; // 0x18

		static ::AFB530854B88B5A8 AD8A550C559B6452()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_F0BC7A98C3E2C776_AD8A550C559B6452_OFFSET))();
		}

		::UnityEngine::InputSystem::DualShock::LowLevel::DualShock4HIDInputReport F1A22086D4FDAD79()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualShock4HIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_F0BC7A98C3E2C776_F1A22086D4FDAD79_OFFSET))(this);
		}
	};
}
