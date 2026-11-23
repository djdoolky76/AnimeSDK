#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3FEBAA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x3FEBAE0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int LinearAccelerationState_TypeDefinitionIndex = 14461;

	struct alignas(4) LinearAccelerationState
	{
		::UnityEngine::Vector3 acceleration; // 0x10

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_FORMAT_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_kFormat()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_KFORMAT_OFFSET))();
		}
	};
}
