#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_FC0C743D052CA929_AD8A550C559B6452_OFFSET UNITYSDK_OFFSET(0x3F48C10)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_FC0C743D052CA929_TypeDefinitionIndex = 14487;

	struct alignas(4) SwitchProControllerHID_FC0C743D052CA929
	{
		::System::Byte F1E5C91CC90BA48C; // 0x10

		static ::AFB530854B88B5A8 AD8A550C559B6452()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_FC0C743D052CA929_AD8A550C559B6452_OFFSET))();
		}
	};
}
