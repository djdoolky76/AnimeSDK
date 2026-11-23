#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Switch/LowLevel/SwitchProControllerHIDInputState.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_F7760BBDB60BFEDA_F1A22086D4FDAD79_OFFSET UNITYSDK_OFFSET(0x3FF1070)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_F7760BBDB60BFEDA_TypeDefinitionIndex = 14485;

	struct alignas(4) SwitchProControllerHID_F7760BBDB60BFEDA
	{
		::System::Byte F1E5C91CC90BA48C; // 0x10
		::System::Byte BF3B27577477CBA1; // 0x11
		::System::Byte B9ECF59B7D7E7E56; // 0x12
		::System::Byte AAFB6A0DD9B48524; // 0x13
		::System::UInt16 A14351EA0CF00A0D; // 0x14
		::System::UInt16 FD43258D8080FFFA; // 0x16
		::System::UInt16 F55CE25ED9E66E3D; // 0x18
		::System::UInt16 E28B5858C5C3BA2E; // 0x1A

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState F1A22086D4FDAD79()
		{
			return ((::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_F7760BBDB60BFEDA_F1A22086D4FDAD79_OFFSET))(this);
		}
	};
}
