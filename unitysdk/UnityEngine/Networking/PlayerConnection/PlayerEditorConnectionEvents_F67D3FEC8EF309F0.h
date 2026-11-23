#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F67D3FEC8EF309F0_A3BC0225F28145B1_OFFSET UNITYSDK_OFFSET(0x418DB80)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F67D3FEC8EF309F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_F67D3FEC8EF309F0_TypeDefinitionIndex = 17686;

	class PlayerEditorConnectionEvents_F67D3FEC8EF309F0 : public ::System::Object
	{
	public:
		::System::Guid B20169FBD0729417; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F67D3FEC8EF309F0__CTOR_OFFSET))(this);
		}

		::System::Boolean A3BC0225F28145B1(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F67D3FEC8EF309F0_A3BC0225F28145B1_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
