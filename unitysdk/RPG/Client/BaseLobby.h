#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJHHGHKGAIL.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/JPJAJPOGCJJ.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_JoinRestriction.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/System/Object.h"
class ABAIDFKODPJ;
class FMHEHLIFNGJ;
class FPEGJJJKNAL;
class HMJOPNLILHK;
class LMLNNHKJEIP;
class PJMGBLIFDFP;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0xC7EC820)
#define RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0xC7EC5B0)
#define RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xC7EA640)
#define RPG_CLIENT_BASELOBBY_CTOR_OFFSET UNITYSDK_OFFSET(0xC7EEFD0)
#define RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7EA460)
#define RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7EA8A0)
#define RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC7EA950)
#define RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xC7EA750)
#define RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xC7EEE50)
#define RPG_CLIENT_BASELOBBY_GET_ID_OFFSET UNITYSDK_OFFSET(0xC7EED50)
#define RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xC7EEFB0)
#define RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET UNITYSDK_OFFSET(0xC7EED90)
#define RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET UNITYSDK_OFFSET(0xC7EEF30)
#define RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET UNITYSDK_OFFSET(0xC7EAD20)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC7EEE10)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0xC7EEE30)
#define RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7EA020)
#define RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xC7EEDF0)
#define RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xC7EEE70)
#define RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xC7EDDB0)
#define RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC7EED70)
#define RPG_CLIENT_BASELOBBY_INIT_OFFSET UNITYSDK_OFFSET(0xC7E9D70)
#define RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET UNITYSDK_OFFSET(0xC7EB230)
#define RPG_CLIENT_BASELOBBY_INVITE_OFFSET UNITYSDK_OFFSET(0xC7EB1E0)
#define RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET UNITYSDK_OFFSET(0xC7EA7F0)
#define RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET UNITYSDK_OFFSET(0xC7EA9E0)
#define RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET UNITYSDK_OFFSET(0xC7EAD80)
#define RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET UNITYSDK_OFFSET(0xC7EAA80)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0xC7EB940)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET UNITYSDK_OFFSET(0xC7EB6A0)
#define RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET UNITYSDK_OFFSET(0xC7ECE40)
#define RPG_CLIENT_BASELOBBY_QUIT_OFFSET UNITYSDK_OFFSET(0xC7ECC00)
#define RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xC7EEE60)
#define RPG_CLIENT_BASELOBBY_SET_ID_OFFSET UNITYSDK_OFFSET(0xC7EED60)
#define RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xC7EEFC0)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC7EEE20)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0xC7EEE40)
#define RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC7EEE90)
#define RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xC7EEE00)
#define RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xC7EEE80)
#define RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC7EED80)
#define RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET UNITYSDK_OFFSET(0xC7EC340)
#define RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0xC7EBF40)
#define RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xC7EBCA0)
#define RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET UNITYSDK_OFFSET(0xC7EDA30)
#define RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7EDB40)
#define RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET UNITYSDK_OFFSET(0xC7ED1A0)
#define RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xC7EE6D0)
#define RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET UNITYSDK_OFFSET(0xC7EE010)
#define RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET UNITYSDK_OFFSET(0xC7EE060)
#define RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET UNITYSDK_OFFSET(0xC7EB340)
#define RPG_CLIENT_BASELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xC7EDEB0)
#define RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET UNITYSDK_OFFSET(0xC7EEA90)
#define RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET UNITYSDK_OFFSET(0xC7EE9A0)
#define RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xC7EE510)
#define RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xC7EDF90)
#define RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xC7EDF50)
#define RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xC7EDF00)
#define RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC7EDFD0)
#define RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0xC7EECB0)
#define RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET UNITYSDK_OFFSET(0xC7EE550)
#define RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xC7EDE30)
#define RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC7ED2D0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xC7EE2C0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET UNITYSDK_OFFSET(0xC7EA060)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby_TypeDefinitionIndex = 65768;

	class BaseLobby : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _MatchResultMembers_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _CreateSessionPromise; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _UIDToInviteTimeStamp; // 0x28
		::System::Collections::Generic::List_1<::LMLNNHKJEIP*>* _MatchResultMultiPlayerInfos_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _Members_k__BackingField; // 0x38
		::System::UInt32 _ChatInviteID; // 0x40
		::RPG::Client::LobbyState _CurrentStatus_k__BackingField; // 0x44
		::System::Int32 _MaxMemberCount; // 0x48
		::System::Boolean _CreateSession; // 0x4C
		::System::Boolean _IsDestroyed_k__BackingField; // 0x4D
		::System::Byte _padding0[0x2];
		::System::UInt64 _ID_k__BackingField; // 0x50
		::FJPMJPEKLJL _Type_k__BackingField; // 0x58
		::RPG::Client::LobbyState _PreviousStatus_k__BackingField; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt64 a1, ::FJPMJPEKLJL a2, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a3, ::System::UInt32 a4, ::PJMGBLIFDFP* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::FJPMJPEKLJL, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*, ::System::UInt32, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET))(this);
		}

		::System::Void ChangeState(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyMemberData* GetMemberData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAllMemberReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET))(this);
		}

		::System::Int32 GetCurMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetInviteTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean IsAnyPlayerInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET))(this);
		}

		::System::Void KickOut(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KickOutPromise(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET))(this, a1);
		}

		::System::Void Invite(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* InvitePromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _DoInvitePromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET))(this, a1);
		}

		::System::Void ModifySelfInfo(::CJHHGHKGAIL a1, ::FMHEHLIFNGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJHHGHKGAIL, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::CJHHGHKGAIL a1, ::FMHEHLIFNGJ* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::CJHHGHKGAIL, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void StartMatch(::FMHEHLIFNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* StartMatchPromise(::FMHEHLIFNGJ* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET))(this, a1);
		}

		::System::Void StartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET))(this);
		}

		::System::Void CancelMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CancelMatchPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET))(this);
		}

		::System::Void Quit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* QuitPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET))(this);
		}

		::System::Void SyncMatchResult(::HMJOPNLILHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMJOPNLILHK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET))(this, a1);
		}

		::System::Void SyncFightGameState(::ABAIDFKODPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABAIDFKODPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void SyncLobbyInfoScNotify(::FPEGJJJKNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPEGJJJKNAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnRoomInit(::PJMGBLIFDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET))(this, a1);
		}

		::System::Void _OnPostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET))(this);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::FMHEHLIFNGJ* _CreatePlayUnitExtInfo(::System::Object* a1)
		{
			return ((::FMHEHLIFNGJ*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET))(this, a1);
		}

		::System::Void _CreatePSSession(::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET))(this, a1);
		}

		::System::Void _SyncMatchResultMembers(::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncMembers(::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _SyncMemberInfo(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1, ::LMLNNHKJEIP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*, ::LMLNNHKJEIP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveInvalidMembers(::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean _ContainMemberInfo(::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a1, ::RPG::Client::LobbyMemberData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncLobbyState(::JPJAJPOGCJJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPJAJPOGCJJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET))(this, a1);
		}

		::System::Void _OnKickOutRsp(::System::UInt16 a1, ::System::Object* a2, ::RPG::Client::Promises::Promise* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInviteRsp(::System::UInt16 a1, ::System::Object* a2, ::System::UInt32 a3, ::RPG::Client::Promises::Promise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::UInt32, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET))(this);
		}

		::System::UInt64 get_ID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ID_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL get_Type()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyMemberData* get_SelfMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET))(this);
		}

		::System::Boolean get_IsSelfLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_Members()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_MatchResultMembers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET))(this);
		}

		::System::Void set_MatchResultMembers(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LMLNNHKJEIP*>* get_MatchResultMultiPlayerInfos()
		{
			return ((::System::Collections::Generic::List_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this);
		}

		::System::Void set_MatchResultMultiPlayerInfos(::System::Collections::Generic::List_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyState get_CurrentStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyState get_PreviousStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxMemberCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLobbyMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET))(this, a1);
		}

	};
}
