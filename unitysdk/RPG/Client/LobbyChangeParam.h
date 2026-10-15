#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJHHGHKGAIL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LobbyMemberData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOBBYCHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD491C60)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyChangeParam_TypeDefinitionIndex = 65774;

	class LobbyChangeParam : public ::System::Object
	{
	public:
		::RPG::Client::LobbyMemberData* ChangeOwner; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* CurrentMembers; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* PreviousMembers; // 0x20
		::CJHHGHKGAIL ChangeType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYCHANGEPARAM_CTOR_OFFSET))(this);
		}

	};
}
