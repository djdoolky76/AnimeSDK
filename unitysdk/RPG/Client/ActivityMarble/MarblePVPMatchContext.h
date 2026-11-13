#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleMatchContext.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/RPG/Client/LobbyState.h"
class GFHCKBHCNDF;
class LMLNNHKJEIP;
class PJMGBLIFDFP;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CANCELSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1C7F6510)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CREATEPVPMATCH_OFFSET UNITYSDK_OFFSET(0x1C7F6180)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F5F70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_CANSTART_OFFSET UNITYSDK_OFFSET(0x1C7F6EB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x1C7F6E60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0x1C7F6E10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1C7F7090)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x1C7F6F00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_ONROOMINIT_OFFSET UNITYSDK_OFFSET(0x1C7F6130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_REQUESTSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1C7F6560)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETINITINFO_OFFSET UNITYSDK_OFFSET(0x1C7F5FC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETMODE_OFFSET UNITYSDK_OFFSET(0x1C7EEF40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1C7F70A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1C7F64A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATEOTHERPLAYER_OFFSET UNITYSDK_OFFSET(0x1C7F68F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESELFPLAYER_OFFSET UNITYSDK_OFFSET(0x1C7F6680)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x1C7EEFF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C7F6BD0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPMatchContext_TypeDefinitionIndex = 78342;

	class MarblePVPMatchContext : public ::RPG::Client::ActivityMarble::MarbleMatchContext
	{
	public:
		::GFHCKBHCNDF* _InitInfo; // 0x70
		::RPG::Client::ActivityMarble::MarblePVPMode _Mode_k__BackingField; // 0x78
		::RPG::Client::LobbyState _CurrentStatus; // 0x7C
		::System::Boolean _PendingStartBattle; // 0x80
		::System::Void _ctor(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Void SetInitInfo(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETINITINFO_OFFSET))(this, a1);
		}

		::System::Void OnRoomInit(::PJMGBLIFDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_ONROOMINIT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMatch(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CREATEPVPMATCH_OFFSET))(a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		::System::Void CancelStartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CANCELSTARTBATTLE_OFFSET))(this);
		}

		::System::Void SetMode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETMODE_OFFSET))(this, a1);
		}

		::System::Void RequestStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_REQUESTSTARTGAME_OFFSET))(this);
		}

		::System::Void UpdateSelfPlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESELFPLAYER_OFFSET))(this, a1);
		}

		::System::Void UpdateOtherPlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATEOTHERPLAYER_OFFSET))(this, a1);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__UPDATEMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHING_OFFSET))(this);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHED_OFFSET))(this);
		}

		::System::Boolean get_CanStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_CANSTART_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPManagerBase* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManagerBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_PVPMGR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMode get_Mode()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SET_MODE_OFFSET))(this, a1);
		}

	};
}
