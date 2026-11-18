#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERLEFTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6EE90)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInputManager_PlayerLeftEvent_TypeDefinitionIndex = 31777;

	class PlayerInputManager_PlayerLeftEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERLEFTEVENT__CTOR_OFFSET))(this);
		}
	};
}
