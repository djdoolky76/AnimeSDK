#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1EE6EE70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x93AC10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EE6EE50)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int WarpMousePositionCommand_TypeDefinitionIndex = 31940;

	struct alignas(4) WarpMousePositionCommand
	{
		// static const ::System::Int32 kSize = 0x10; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::UnityEngine::Vector2 warpPositionInPlayerDisplaySpace; // 0x18

		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPE_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand Create(::UnityEngine::Vector2 position)
		{
			return ((::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_CREATE_OFFSET))(position);
		}
		*/
	};
}
