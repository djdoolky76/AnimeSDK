#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Switch/LowLevel/SwitchProControllerHIDInputState.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_B39A5C5EADAF02BA_F1A22086D4FDAD79_OFFSET UNITYSDK_OFFSET(0x3FEEFD0)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_B39A5C5EADAF02BA_TypeDefinitionIndex = 14486;

	struct alignas(4) SwitchProControllerHID_B39A5C5EADAF02BA
	{
		::System::Byte F1E5C91CC90BA48C; // 0x10
		::System::Byte _padding0[0x2];
		::System::Byte BF3B27577477CBA1; // 0x13
		::System::Byte B9ECF59B7D7E7E56; // 0x14
		::System::Byte A7A557FAD14A52C9; // 0x15
		::System::Byte A09F84E86EF3DE23; // 0x16
		::System::Byte B47446FCC447731C; // 0x17
		::System::Byte B8A5B78AC463B16F; // 0x18
		::System::Byte E2368CC7041748A0; // 0x19
		::System::Byte F22FD78DA8D2A084; // 0x1A
		::System::Byte FE3BD15561965639; // 0x1B

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState F1A22086D4FDAD79()
		{
			return ((::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_B39A5C5EADAF02BA_F1A22086D4FDAD79_OFFSET))(this);
		}
	};
}
