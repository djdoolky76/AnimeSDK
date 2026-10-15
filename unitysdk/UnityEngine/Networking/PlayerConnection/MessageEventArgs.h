#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_MESSAGEEVENTARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F407880)

namespace UnityEngine::Networking::PlayerConnection
{
	class MessageEventArgs : public ::System::Object
	{
	public:
		::System::Int32 playerId; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* data; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_MESSAGEEVENTARGS_CTOR_OFFSET))(this);
		}

	};
}
