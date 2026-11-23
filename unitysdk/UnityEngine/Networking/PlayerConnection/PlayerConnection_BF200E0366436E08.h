#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BF200E0366436E08_F101FD40B990AC5E_OFFSET UNITYSDK_OFFSET(0x38C12E0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BF200E0366436E08__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection_BF200E0366436E08_TypeDefinitionIndex = 17296;

	class PlayerConnection_BF200E0366436E08 : public ::System::Object
	{
	public:
		::System::Boolean E4161ECA62431A53; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BF200E0366436E08__CTOR_OFFSET))(this);
		}

		::System::Void F101FD40B990AC5E(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* F0D3F87128A7C4CA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BF200E0366436E08_F101FD40B990AC5E_OFFSET))(this, F0D3F87128A7C4CA);
		}
	};
}
