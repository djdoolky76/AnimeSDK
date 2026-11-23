#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A769E3105BB55487/BEF6D4843175EE8C.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x40001F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4000230)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x40001A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int PenState_TypeDefinitionIndex = 14547;

	struct alignas(4) PenState
	{
		::UnityEngine::Vector2 position; // 0x10
		::UnityEngine::Vector2 delta; // 0x18
		::UnityEngine::Vector2 tilt; // 0x20
		::System::Single pressure; // 0x28
		::System::Single twist; // 0x2C
		::System::UInt16 buttons; // 0x30
		::System::UInt16 displayIndex; // 0x32

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::PenState WithButton(::A769E3105BB55487::BEF6D4843175EE8C A59E604D1E9B8ED2, ::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::UnityEngine::InputSystem::LowLevel::PenState(*)(::PVOID, ::A769E3105BB55487::BEF6D4843175EE8C, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_WITHBUTTON_OFFSET))(this, A59E604D1E9B8ED2, E5EB06E4FD2C32F7);
		}
		*/

		static ::AFB530854B88B5A8 get_Format()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET))();
		}
	};
}
