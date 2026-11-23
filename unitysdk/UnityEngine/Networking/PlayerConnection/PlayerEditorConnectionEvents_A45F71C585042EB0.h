#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_A45F71C585042EB0_A8C9A9140F64B972_OFFSET UNITYSDK_OFFSET(0x418DB80)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_A45F71C585042EB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_A45F71C585042EB0_TypeDefinitionIndex = 17687;

	class PlayerEditorConnectionEvents_A45F71C585042EB0 : public ::System::Object
	{
	public:
		::System::Guid B20169FBD0729417; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_A45F71C585042EB0__CTOR_OFFSET))(this);
		}

		::System::Boolean A8C9A9140F64B972(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_A45F71C585042EB0_A8C9A9140F64B972_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
