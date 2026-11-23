#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_AB6BFA28B0FA0161_E1104489AE203078_OFFSET UNITYSDK_OFFSET(0x4141830)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_AB6BFA28B0FA0161__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection_AB6BFA28B0FA0161_TypeDefinitionIndex = 17294;

	class PlayerConnection_AB6BFA28B0FA0161 : public ::System::Object
	{
	public:
		::System::Guid B20169FBD0729417; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_AB6BFA28B0FA0161__CTOR_OFFSET))(this);
		}

		::System::Boolean E1104489AE203078(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_AB6BFA28B0FA0161_E1104489AE203078_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
