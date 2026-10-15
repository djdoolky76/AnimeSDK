#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODPJEOGDIKF.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LOBBYINTERACTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD491CD0)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTPARAM_OFFSET UNITYSDK_OFFSET(0xD491D20)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0xD491D00)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_SOURCEUID_OFFSET UNITYSDK_OFFSET(0xD491CE0)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTPARAM_OFFSET UNITYSDK_OFFSET(0xD491D30)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0xD491D10)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_SOURCEUID_OFFSET UNITYSDK_OFFSET(0xD491CF0)

namespace RPG::Client
{
	class LobbyInteractParam : public ::System::Object
	{
	public:
		::ODPJEOGDIKF _InteractType_k__BackingField; // 0x10
		::System::UInt32 _SourceUID_k__BackingField; // 0x14
		::System::UInt32 _InteractParam_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::ODPJEOGDIKF a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ODPJEOGDIKF))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SourceUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_SOURCEUID_OFFSET))(this);
		}

		::System::Void set_SourceUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_SOURCEUID_OFFSET))(this, a1);
		}

		::ODPJEOGDIKF get_InteractType()
		{
			return ((::ODPJEOGDIKF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTTYPE_OFFSET))(this);
		}

		::System::Void set_InteractType(::ODPJEOGDIKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODPJEOGDIKF))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_InteractParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTPARAM_OFFSET))(this);
		}

		::System::Void set_InteractParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTPARAM_OFFSET))(this, a1);
		}

	};
}
