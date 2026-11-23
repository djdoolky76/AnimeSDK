#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3F5F2C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x3F5F300)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GravityState_TypeDefinitionIndex = 14267;

	struct alignas(4) GravityState
	{
		::UnityEngine::Vector3 gravity; // 0x10

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_FORMAT_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_kFormat()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GRAVITYSTATE_GET_KFORMAT_OFFSET))();
		}
	};
}
