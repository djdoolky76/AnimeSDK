#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x1EE6ECB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x93ABA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EE6EC90)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InitiateUserAccountPairingCommand_TypeDefinitionIndex = 31917;

	struct alignas(4) InitiateUserAccountPairingCommand
	{
		// static const ::System::Int32 kSize = 0x8; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10

		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPE_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_GET_TYPESTATIC_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand Create()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INITIATEUSERACCOUNTPAIRINGCOMMAND_CREATE_OFFSET))();
		}
		*/
	};
}
