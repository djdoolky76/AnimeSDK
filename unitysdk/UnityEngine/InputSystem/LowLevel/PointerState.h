#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3F56D80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x3F56DC0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int PointerState_TypeDefinitionIndex = 14210;

	struct alignas(4) PointerState
	{
		::System::UInt32 pointerId; // 0x10
		::UnityEngine::Vector2 position; // 0x14
		::UnityEngine::Vector2 delta; // 0x1C
		::System::Single pressure; // 0x24
		::UnityEngine::Vector2 radius; // 0x28
		::System::UInt16 buttons; // 0x30
		::System::UInt16 displayIndex; // 0x32

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_FORMAT_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_kFormat()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_POINTERSTATE_GET_KFORMAT_OFFSET))();
		}
	};
}
