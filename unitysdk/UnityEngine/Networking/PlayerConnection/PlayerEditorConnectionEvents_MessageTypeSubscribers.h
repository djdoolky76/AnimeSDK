#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"
namespace System { class String; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageEvent; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4099C0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_GET_MESSAGETYPEID_OFFSET UNITYSDK_OFFSET(0x1F4098B0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_SET_MESSAGETYPEID_OFFSET UNITYSDK_OFFSET(0x1F409A20)

namespace UnityEngine::Networking::PlayerConnection
{
	class PlayerEditorConnectionEvents_MessageTypeSubscribers : public ::System::Object
	{
	public:
		::System::String* m_messageTypeId; // 0x10
		::System::Int32 subscriberCount; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* messageCallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_CTOR_OFFSET))(this);
		}

		::System::Guid get_MessageTypeId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_GET_MESSAGETYPEID_OFFSET))(this);
		}

		::System::Void set_MessageTypeId(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_SET_MESSAGETYPEID_OFFSET))(this, a1);
		}

	};
}
