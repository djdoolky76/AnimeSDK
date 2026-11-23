#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Switch/LowLevel/SwitchProControllerHIDInputState.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_B7F8BA17D111608F_F1A22086D4FDAD79_OFFSET UNITYSDK_OFFSET(0x3FEF3F0)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_B7F8BA17D111608F_TypeDefinitionIndex = 14484;

	struct alignas(4) SwitchProControllerHID_B7F8BA17D111608F
	{
		::System::Byte BF3B27577477CBA1; // 0x10
		::System::Byte B9ECF59B7D7E7E56; // 0x11
		::System::Byte AAFB6A0DD9B48524; // 0x12
		::System::Byte A14351EA0CF00A0D; // 0x13
		::System::Byte FD43258D8080FFFA; // 0x14
		::System::Byte F55CE25ED9E66E3D; // 0x15
		::System::Byte E28B5858C5C3BA2E; // 0x16

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState F1A22086D4FDAD79()
		{
			return ((::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_B7F8BA17D111608F_F1A22086D4FDAD79_OFFSET))(this);
		}
	};
}
