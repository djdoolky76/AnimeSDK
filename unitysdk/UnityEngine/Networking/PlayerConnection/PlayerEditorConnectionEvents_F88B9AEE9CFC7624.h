#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F88B9AEE9CFC7624_B2C0F14CE6D6C5DB_OFFSET UNITYSDK_OFFSET(0x418DB80)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F88B9AEE9CFC7624__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_F88B9AEE9CFC7624_TypeDefinitionIndex = 17688;

	class PlayerEditorConnectionEvents_F88B9AEE9CFC7624 : public ::System::Object
	{
	public:
		::System::Guid B20169FBD0729417; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F88B9AEE9CFC7624__CTOR_OFFSET))(this);
		}

		::System::Boolean B2C0F14CE6D6C5DB(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_F88B9AEE9CFC7624_B2C0F14CE6D6C5DB_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
