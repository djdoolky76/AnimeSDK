#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7F9C9491EE9F059/A11D908F3AC31322.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4025EE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4025F20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x4025E80)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int MouseState_TypeDefinitionIndex = 14596;

	struct alignas(4) MouseState
	{
		::UnityEngine::Vector2 position; // 0x10
		::UnityEngine::Vector2 delta; // 0x18
		::UnityEngine::Vector2 scroll; // 0x20
		::System::UInt16 buttons; // 0x28
		::System::UInt16 displayIndex; // 0x2A
		::System::UInt16 clickCount; // 0x2C

		/*
		::UnityEngine::InputSystem::LowLevel::MouseState WithButton(::E7F9C9491EE9F059::A11D908F3AC31322 A59E604D1E9B8ED2, ::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::UnityEngine::InputSystem::LowLevel::MouseState(*)(::PVOID, ::E7F9C9491EE9F059::A11D908F3AC31322, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_WITHBUTTON_OFFSET))(this, A59E604D1E9B8ED2, E5EB06E4FD2C32F7);
		}
		*/

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_Format()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET))();
		}
	};
}
