#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/PenButton.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1F4EC180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x977440)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x977400)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int PenState_TypeDefinitionIndex = 31955;

	struct alignas(4) PenState
	{
		::UnityEngine::Vector2 position; // 0x10
		::UnityEngine::Vector2 delta; // 0x18
		::UnityEngine::Vector2 tilt; // 0x20
		::System::Single pressure; // 0x28
		::System::Single twist; // 0x2C
		::System::UInt16 buttons; // 0x30
		::System::UInt16 displayIndex; // 0x32

		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET))();
		}

		/*
		::UnityEngine::InputSystem::LowLevel::PenState WithButton(::UnityEngine::InputSystem::PenButton button, ::System::Boolean state)
		{
			return ((::UnityEngine::InputSystem::LowLevel::PenState(*)(::PVOID, ::UnityEngine::InputSystem::PenButton, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_WITHBUTTON_OFFSET))(this, button, state);
		}
		*/

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_PENSTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
