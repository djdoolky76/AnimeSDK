#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1E4509E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x8FF3C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E4509C0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int RequestResetCommand_TypeDefinitionIndex = 31936;

	struct alignas(4) RequestResetCommand
	{
		// static const ::System::Int32 kSize = 0x8; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10

		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPE_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::RequestResetCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::RequestResetCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_CREATE_OFFSET))();
		}
		*/
	};
}
