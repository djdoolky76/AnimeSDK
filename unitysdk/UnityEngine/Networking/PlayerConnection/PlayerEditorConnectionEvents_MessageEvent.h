#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x4183D60)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_MessageEvent_TypeDefinitionIndex = 17683;

	class PlayerEditorConnectionEvents_MessageEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
