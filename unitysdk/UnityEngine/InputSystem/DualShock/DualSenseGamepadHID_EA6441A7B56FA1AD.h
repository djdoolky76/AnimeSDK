#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/LowLevel/DualSenseHIDInputReport.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_EA6441A7B56FA1AD_F1A22086D4FDAD79_OFFSET UNITYSDK_OFFSET(0x3FA69C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_EA6441A7B56FA1AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FA6A10)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_EA6441A7B56FA1AD_TypeDefinitionIndex = 14335;

	struct alignas(4) DualSenseGamepadHID_EA6441A7B56FA1AD
	{
		static ::System::Int32* StaticGet_E588477BCD088C60()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadHID_EA6441A7B56FA1AD_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_B3946C9A045CDD57()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadHID_EA6441A7B56FA1AD_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		::System::Byte F1E5C91CC90BA48C; // 0x10
		::System::Byte EEC232E9ECA7AB55; // 0x11
		::System::Byte B62BB4D7DA28BEE8; // 0x12
		::System::Byte BC4EBB2549458698; // 0x13
		::System::Byte F84AE195F49C9A15; // 0x14
		::System::Byte BF3B27577477CBA1; // 0x15
		::System::Byte B9ECF59B7D7E7E56; // 0x16
		::System::Byte A7A557FAD14A52C9; // 0x17
		::System::Byte AACEAFD5D2B6351C; // 0x18
		::System::Byte E63A7B5358DF5094; // 0x19

		::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport F1A22086D4FDAD79()
		{
			return ((::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_EA6441A7B56FA1AD_F1A22086D4FDAD79_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_EA6441A7B56FA1AD__CCTOR_OFFSET))();
		}
	};
}
