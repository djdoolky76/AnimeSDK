#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/RPG/Client/BaseLobby.h"
class PJMGBLIFDFP;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_CTOR_OFFSET UNITYSDK_OFFSET(0xCE83C30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xCE7A750)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_MODE_OFFSET UNITYSDK_OFFSET(0xCE83C10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xCE79BE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_KICKOUTOPPONENT_OFFSET UNITYSDK_OFFSET(0xCE831A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_LOBBYREADYPROMISE_OFFSET UNITYSDK_OFFSET(0xCE830C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SETMODE_OFFSET UNITYSDK_OFFSET(0xCE832C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SET_MODE_OFFSET UNITYSDK_OFFSET(0xCE83C20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0xCE83B70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCREATED_OFFSET UNITYSDK_OFFSET(0xCE82FD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xCE83550)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xCE83BC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xCE833A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xCE83780)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xCE83470)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCE837C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__TRYRESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xCE83B10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE838D0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPLobby_TypeDefinitionIndex = 78332;

	class MarblePVPLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::RPG::Client::Promises::Promise* _LobbyReadyPromise; // 0x60
		::RPG::Client::ActivityMarble::MarblePVPMatchContext* _Context; // 0x68
		::PJMGBLIFDFP* _RoomExtInfo; // 0x70
		::RPG::Client::ActivityMarble::MarblePVPMode _Mode_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMatchContext* GetContext()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GETCONTEXT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LobbyReadyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_LOBBYREADYPROMISE_OFFSET))(this);
		}

		::System::Void KickOutOpponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_KICKOUTOPPONENT_OFFSET))(this);
		}

		::System::Void SetMode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SETMODE_OFFSET))(this, a1);
		}

		::System::Void _OnContextCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCREATED_OFFSET))(this);
		}

		::System::Void _OnRoomInit(::PJMGBLIFDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONROOMINIT_OFFSET))(this, a1);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnPostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONPOSTINIT_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__UPDATEMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _TryResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__TRYRESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Void _OnContextChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY__ONCONTEXTCHANGED_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMode get_Mode()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_SET_MODE_OFFSET))(this, a1);
		}

		::PJMGBLIFDFP* get_RoomExtInfo()
		{
			return ((::PJMGBLIFDFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPLOBBY_GET_ROOMEXTINFO_OFFSET))(this);
		}

	};
}
