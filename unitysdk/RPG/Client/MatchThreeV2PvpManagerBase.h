#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IILCHDOMOME;
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5A55E0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_GET_LOBBYSERVICE_OFFSET UNITYSDK_OFFSET(0xD5BFF90)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_INIT_OFFSET UNITYSDK_OFFSET(0xD5A55F0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_JOINANDOPENLOBBY_OFFSET UNITYSDK_OFFSET(0xD5BFFB0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_SET_LOBBYSERVICE_OFFSET UNITYSDK_OFFSET(0xD5BFFA0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTBIRDID_OFFSET UNITYSDK_OFFSET(0xD5ACAD0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTPROPS_OFFSET UNITYSDK_OFFSET(0xD5ACBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpManagerBase_TypeDefinitionIndex = 66047;

	class MatchThreeV2PvpManagerBase : public ::System::Object
	{
	public:
		::IILCHDOMOME* _LobbyService_k__BackingField; // 0x10
		// static const ::System::Object _DEFAULT_BIRD_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_CTOR_OFFSET))(this);
		}

		::IILCHDOMOME* get_LobbyService()
		{
			return ((::IILCHDOMOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_GET_LOBBYSERVICE_OFFSET))(this);
		}

		::System::Void set_LobbyService(::IILCHDOMOME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILCHDOMOME*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_SET_LOBBYSERVICE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_INIT_OFFSET))(this);
		}

		::System::Void JoinAndOpenLobby(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_JOINANDOPENLOBBY_OFFSET))(this, a1);
		}

		::System::UInt32 _GetDefaultBirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTBIRDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* _GetDefaultProps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTPROPS_OFFSET))(this);
		}

	};
}
