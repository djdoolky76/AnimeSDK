#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIIKFKNEHHG.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class BNLDPBNNINH;
class DODPFANHNDG;
class EBLJHPOGCHJ;
class INAOPPNJBAC;
class LGEDKNLBCAN;
class MPHGCHAIDMP;
class POBNHFMGBMO;
namespace RPG::Client { class ChimeraDuelAchievementDataManager; }
namespace RPG::Client { class ChimeraDuelChimeraInfo; }
namespace RPG::Client { class ChimeraDuelChimeraLevelInfo; }
namespace RPG::Client { class ChimeraDuelGameInfo; }
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client { class ChimeraDuelMasterInfo; }
namespace RPG::Client { class ChimeraDuelPlayerData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class ChimeraDuelSkillInfo; }
namespace RPG::Client { class ChimeraDuelTalkInfo; }
namespace RPG::Client { class ChimeraDuelTools_ShowcaseBattleSetup; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBoard; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }
namespace System { class Object; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCB40330)
#define RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB40030)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xCB3F540)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xCB3F2E0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET UNITYSDK_OFFSET(0xCB3F3A0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0xCB3F520)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0xCB3F4A0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xCB3F500)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xCB3F620)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xCB3F5A0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xCB3F5C0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET UNITYSDK_OFFSET(0xCB3A5C0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xCB3F560)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0xCB3F580)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xCB3F4E0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xCB3F4C0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xCB3F480)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET UNITYSDK_OFFSET(0xCB38EE0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0xCB3F340)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET UNITYSDK_OFFSET(0xCB3F400)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0xCB3F420)
#define RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCB3FE30)
#define RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCB3F6A0)
#define RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCB3FB70)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3D250)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3CED0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET UNITYSDK_OFFSET(0xCB3B570)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xCB39B70)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET UNITYSDK_OFFSET(0xCB3B7F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3E850)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3EBC0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3DF70)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3E180)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3E4A0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET UNITYSDK_OFFSET(0xCB3BA40)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET UNITYSDK_OFFSET(0xCB3BAC0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET UNITYSDK_OFFSET(0xCB2E6B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xCB2EB20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xCB3F550)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0xCB3F530)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0xCB3F4B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xCB3F510)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xCB3F5B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xCB3F570)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0xCB3F590)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xCB3F4F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xCB3F4D0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xCB3F490)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET UNITYSDK_OFFSET(0xCB3F410)
#define RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCB38F20)
#define RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCB399F0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xCB3BF90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xCB3D460)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xCB3D120)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xCB3B6A0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xCB39CA0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3B060)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3B170)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3B3E0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xCB3BD10)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCB3A620)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3AF60)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3F0F0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xCB3F220)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xCB3EFC0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xCB3EA90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3EE30)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3E390)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0xCB3E6F0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xCB402E0)
#define RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET UNITYSDK_OFFSET(0xCB39B00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelModule_TypeDefinitionIndex = 63306;

	class ChimeraDuelModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* _MainPuzzleBoard_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::LGEDKNLBCAN*>* _PendingSessionChanges; // 0x18
		::System::Tuple* _NextChallengeBattle_k__BackingField; // 0x20
		::EBLJHPOGCHJ* _FriendPvpInfo_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::INAOPPNJBAC*>* _SendPacketProxies; // 0x30
		::RPG::Client::ChimeraDuelPlayerData* _PlayerData_k__BackingField; // 0x38
		::RPG::Client::Promises::Promise* _RequestingStartGame; // 0x40
		::RPG::Client::ChimeraDuelAchievementDataManager* _AchievementDataManager_k__BackingField; // 0x48
		::POBNHFMGBMO* _RankInfo_k__BackingField; // 0x50
		::BNLDPBNNINH* _RoundInfo_k__BackingField; // 0x58
		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* _NextShowcaseBattle_k__BackingField; // 0x60
		::RPG::Client::ChimeraDuelGameInfo* _GameInfo_k__BackingField; // 0x68
		::RPG::Client::ChimeraDuelTalkInfo* _TalkInfo_k__BackingField; // 0x70
		::RPG::Client::ChimeraDuelGameSession* _GameSession_k__BackingField; // 0x78
		::System::Boolean _IsRequestingGetData; // 0x80
		::System::Boolean _IsAnticipatingSessionChanges; // 0x81
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::INAOPPNJBAC*>* get_SendPacketProxies()
		{
			return ((::System::Collections::Generic::List_1<::INAOPPNJBAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CancelRequestsOnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET))(this);
		}

		::System::Void SendGetDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET))(this);
		}

		::System::Void _OnChimeraDuelGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelSyncChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelUnlockMasterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelGetFriendListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelSaveFriendPvpLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelSetFriendDefendLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendFinishMasterChallengeCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET))(this, a1);
		}

		::System::Void _OnChimeraDuelFinishMasterChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendSelectGameCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SendStartGamePromised(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET))(this, a1);
		}

		::System::Void _TryResolvePromisedStartGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET))(this, a1);
		}

		::System::Void SendStartGameRequest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET))(this, a1);
		}

		::System::Void _OnChimeraDuelStartGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelEndGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendEndRoundShopStageRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET))(this);
		}

		::System::Void _OnChimeraDuelEndRoundShopStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendEndRoundBattleStageRequest(::DIIKFKNEHHG a1, ::DODPFANHNDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DIIKFKNEHHG, ::DODPFANHNDG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelEndRoundBattleStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopLockChimeraRequest(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopLockItemRequest(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelShopLockScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopRefreshRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET))(this);
		}

		::System::Void _OnCmdChimeraDuelShopRefreshScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopBuyChimeraRequest(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCmdChimeraDuelShopBuyChimeraScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopBuyItemRequest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelShopBuyItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendTeamSellChimeraRequest(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelSellChimeraScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendTeamChangeLineup(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCmdChimeraDuelChangeLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelSelectGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChimeraDuelChimeraInfo* get_ChimeraInfo()
		{
			return ((::RPG::Client::ChimeraDuelChimeraInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterInfo* get_MasterInfo()
		{
			return ((::RPG::Client::ChimeraDuelMasterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelSkillInfo* get_SkillInfo()
		{
			return ((::RPG::Client::ChimeraDuelSkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo* get_ChimeraLevelInfo()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelTalkInfo* get_TalkInfo()
		{
			return ((::RPG::Client::ChimeraDuelTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET))(this);
		}

		::System::Void set_TalkInfo(::RPG::Client::ChimeraDuelTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET))(this, a1);
		}

		::MPHGCHAIDMP* get_TriggerEventInfo()
		{
			return ((::MPHGCHAIDMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET))(this);
		}

		::BNLDPBNNINH* get_RoundInfo()
		{
			return ((::BNLDPBNNINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET))(this);
		}

		::System::Void set_RoundInfo(::BNLDPBNNINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLDPBNNINH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameInfo* get_GameInfo()
		{
			return ((::RPG::Client::ChimeraDuelGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET))(this);
		}

		::System::Void set_GameInfo(::RPG::Client::ChimeraDuelGameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET))(this, a1);
		}

		::POBNHFMGBMO* get_RankInfo()
		{
			return ((::POBNHFMGBMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::POBNHFMGBMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBNHFMGBMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelPlayerData* get_PlayerData()
		{
			return ((::RPG::Client::ChimeraDuelPlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::ChimeraDuelPlayerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSession* get_GameSession()
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET))(this);
		}

		::System::Void set_GameSession(::RPG::Client::ChimeraDuelGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET))(this, a1);
		}

		::EBLJHPOGCHJ* get_FriendPvpInfo()
		{
			return ((::EBLJHPOGCHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET))(this);
		}

		::System::Void set_FriendPvpInfo(::EBLJHPOGCHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBLJHPOGCHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelAchievementDataManager* get_AchievementDataManager()
		{
			return ((::RPG::Client::ChimeraDuelAchievementDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_AchievementDataManager(::RPG::Client::ChimeraDuelAchievementDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelAchievementDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET))(this, a1);
		}

		::System::Tuple* get_NextChallengeBattle()
		{
			return ((::System::Tuple*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET))(this);
		}

		::System::Void set_NextChallengeBattle(::System::Tuple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* get_NextShowcaseBattle()
		{
			return ((::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET))(this);
		}

		::System::Void set_NextShowcaseBattle(::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* get_MainPuzzleBoard()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET))(this);
		}

		::System::Void set_MainPuzzleBoard(::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* get_MainPuzzleStateMachine()
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET))(this);
		}

		::System::Boolean get_IsInLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Boolean HasAnyResidentRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

	};
}
