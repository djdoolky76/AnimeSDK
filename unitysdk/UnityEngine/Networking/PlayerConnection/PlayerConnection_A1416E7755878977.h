#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_A1416E7755878977_E90CE70106D19809_OFFSET UNITYSDK_OFFSET(0x4141830)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_A1416E7755878977__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection_A1416E7755878977_TypeDefinitionIndex = 17295;

	class PlayerConnection_A1416E7755878977 : public ::System::Object
	{
	public:
		::System::Guid B20169FBD0729417; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_A1416E7755878977__CTOR_OFFSET))(this);
		}

		::System::Boolean E90CE70106D19809(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_A1416E7755878977_E90CE70106D19809_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
