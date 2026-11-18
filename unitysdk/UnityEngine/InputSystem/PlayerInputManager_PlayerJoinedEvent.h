#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERJOINEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CA780)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInputManager_PlayerJoinedEvent_TypeDefinitionIndex = 31776;

	class PlayerInputManager_PlayerJoinedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERJOINEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
