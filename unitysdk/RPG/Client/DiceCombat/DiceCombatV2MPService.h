#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/Multiplayer/BaseMPGameService.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
class CJGNCPIDGNH;
class COMJKPOMILA;
class FMHEHLIFNGJ;
class KFGPAHIEDKH;
class PJMGBLIFDFP;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xCC9E1A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET UNITYSDK_OFFSET(0xCC9D2D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET UNITYSDK_OFFSET(0xCC9D960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xCC9DF20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9D270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xCC9D280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_INVITETOASTUIPATH_OFFSET UNITYSDK_OFFSET(0xCC9E130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET UNITYSDK_OFFSET(0xCC9E420)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xCC9D8F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xCC9D870)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xCC9D810)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCC9D470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET UNITYSDK_OFFSET(0xCC9E5B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET UNITYSDK_OFFSET(0xCC9E730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET UNITYSDK_OFFSET(0xCC9E670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xCC9DDE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPVPSTAGEID_OFFSET UNITYSDK_OFFSET(0xCC9E070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__ONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xCC9D4E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2MPService_TypeDefinitionIndex = 76202;

	class DiceCombatV2MPService : public ::RPG::Client::Multiplayer::BaseMPGameService
	{
	public:
		::System::Action* _OnServerConnected; // 0x28
		::System::Action_1<::COMJKPOMILA*>* _OnGeneralNotify; // 0x30
		::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* _OnOnGeneralRsp; // 0x38
		::System::Void _ctor(::CJGNCPIDGNH* a1, ::KFGPAHIEDKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJGNCPIDGNH*, ::KFGPAHIEDKH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CTOR_OFFSET))(this, a1, a2);
		}

		::FJPMJPEKLJL get_GameMode()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Boolean CheckCanEnterMPGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CHECKCANENTERMPGAME_OFFSET))(this);
		}

		::System::Void OnStateChanged(::RPG::Client::Multiplayer::MPSessionState a1, ::RPG::Client::Multiplayer::MPSessionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnGeneralNotify(::COMJKPOMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COMJKPOMILA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ONGENERALNOTIFY_OFFSET))(this, a1);
		}

		::FMHEHLIFNGJ* CreateMPPlayerExtInfo()
		{
			return ((::FMHEHLIFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPPLAYEREXTINFO_OFFSET))(this);
		}

		::PJMGBLIFDFP* CreateMPRoomExtInfo()
		{
			return ((::PJMGBLIFDFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_CREATEMPROOMEXTINFO_OFFSET))(this);
		}

		::System::String* get_InviteToastUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_GET_INVITETOASTUIPATH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* AcceptInvitation(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ACCEPTINVITATION_OFFSET))(this, a1);
		}

		::System::Boolean IsInActivityGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_ISINACTIVITYGAME_OFFSET))(this);
		}

		::System::Void RegisterGuest(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_1<::COMJKPOMILA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_1<::COMJKPOMILA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_REGISTERGUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterGuest(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_1<::COMJKPOMILA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_1<::COMJKPOMILA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_UNREGISTERGUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInviteRobotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE_SETINVITEROBOTID_OFFSET))(this, a1);
		}

		::System::Void _OnEnterLobby()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__ONENTERLOBBY_OFFSET))(this);
		}

		::System::UInt32 _GetPlayerAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPLAYERAVATARID_OFFSET))(this);
		}

		::System::UInt32 _GetPVPStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2MPSERVICE__GETPVPSTAGEID_OFFSET))(this);
		}

	};
}
