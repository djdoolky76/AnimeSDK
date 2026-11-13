#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDLHODCINBI_LBFGOFIIOKP.h"
#include "unitysdk/EMFDLPNOGOH.h"
#include "unitysdk/KFAIFLHPEIE_KMJEAJDPHNP.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class BFBCEOICLAB;
class EJCCCIGMHOM;
class GCECAGOELDP;
class GIEJPMJGJMC;
class HIJCLODMBPO;
class KJGPHJPPFHI;
class KJGPHJPPFHI_AIJIGENMPPH;
class KJGPHJPPFHI_GBGJFKCLONN;
namespace RPG::Client { class FateAreaInfo; }
namespace RPG::Client { class FateBGMState; }
namespace RPG::Client { class FateExpRewardInfo; }
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class FateHandbookInfo; }
namespace RPG::Client { class FateStatisticsInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB94EF0)
#define RPG_CLIENT_FATEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8E990)
#define RPG_CLIENT_FATEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB8EF30)
#define RPG_CLIENT_FATEMODULE_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1DB8F4F0)
#define RPG_CLIENT_FATEMODULE_FINISHFIRSTSYNCPROMISED_OFFSET UNITYSDK_OFFSET(0x1DB8FA40)
#define RPG_CLIENT_FATEMODULE_GET_AREAINFO_OFFSET UNITYSDK_OFFSET(0x1DB8FF40)
#define RPG_CLIENT_FATEMODULE_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1DB90000)
#define RPG_CLIENT_FATEMODULE_GET_EXPREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1DB787C0)
#define RPG_CLIENT_FATEMODULE_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0x1DB8FF00)
#define RPG_CLIENT_FATEMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x1DB8FFC0)
#define RPG_CLIENT_FATEMODULE_GET_STATISTICSINFO_OFFSET UNITYSDK_OFFSET(0x1DB8FF80)
#define RPG_CLIENT_FATEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1DB8EAA0)
#define RPG_CLIENT_FATEMODULE_LEAVEGAME_OFFSET UNITYSDK_OFFSET(0x1DB8F2D0)
#define RPG_CLIENT_FATEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1DB8ED70)
#define RPG_CLIENT_FATEMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8F980)
#define RPG_CLIENT_FATEMODULE_SETAUTOSHOWROUNDPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8F9C0)
#define RPG_CLIENT_FATEMODULE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x1DB8F320)
#define RPG_CLIENT_FATEMODULE_SETWAITSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8FA00)
#define RPG_CLIENT_FATEMODULE_SWITCHGAMESTATEBYSERVERSTATUS_OFFSET UNITYSDK_OFFSET(0x1DB8F150)
#define RPG_CLIENT_FATEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1DB8F550)
#define RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1DB91580)
#define RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1DB91510)
#define RPG_CLIENT_FATEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1DB8EC10)
#define RPG_CLIENT_FATEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1DB90040)
#define RPG_CLIENT_FATEMODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0x1DB8FA80)
#define RPG_CLIENT_FATEMODULE__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DB950B0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDHOUGU_OFFSET UNITYSDK_OFFSET(0x1DB93C40)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDREIJU_OFFSET UNITYSDK_OFFSET(0x1DB93EB0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTAVAILABLESPECIALAVATARUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB92870)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLEPREPARE_OFFSET UNITYSDK_OFFSET(0x1DB92B10)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLESETTLE_OFFSET UNITYSDK_OFFSET(0x1DB92BF0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB92E20)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB92CD0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x1DB93520)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTEXTRABUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1DB93390)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x1DB926B0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1DB92570)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTMASTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB92790)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERREMOVE_OFFSET UNITYSDK_OFFSET(0x1DB92A30)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB92950)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTREMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0x1DB93D80)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPGOODSLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB936C0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPMGRUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB938D0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPREFRESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB93A20)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB93100)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB92FB0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRANSFEREDMAINTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB93250)
#define RPG_CLIENT_FATEMODULE__ONFATECHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB920A0)
#define RPG_CLIENT_FATEMODULE__ONFATEHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB92360)
#define RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONHOUGUSELECT_OFFSET UNITYSDK_OFFSET(0x1DB94130)
#define RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONREIJUSELECT_OFFSET UNITYSDK_OFFSET(0x1DB94270)
#define RPG_CLIENT_FATEMODULE__ONFATEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB915F0)
#define RPG_CLIENT_FATEMODULE__ONFATESETTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1DB91DE0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPBUYGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB944D0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x1DB94D40)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPLOCKGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB94B30)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPREFRESHGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB948C0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPSELLBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB946C0)
#define RPG_CLIENT_FATEMODULE__ONFATESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB91B00)
#define RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDPREPARESTATE_OFFSET UNITYSDK_OFFSET(0x1DB8F0F0)
#define RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDSETTLESTATE_OFFSET UNITYSDK_OFFSET(0x1DB8F090)
#define RPG_CLIENT_FATEMODULE__ONFATESYNCACTIONRESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1DB92180)
#define RPG_CLIENT_FATEMODULE__ONFATESYNCPENDINGACTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1DB92270)
#define RPG_CLIENT_FATEMODULE__ONFATETAKEEXPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1DB94E20)
#define RPG_CLIENT_FATEMODULE__SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0x1DB919B0)
#define RPG_CLIENT_FATEMODULE__SYNCEXPREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1DB91AA0)
#define RPG_CLIENT_FATEMODULE__SYNCGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1DB91940)
#define RPG_CLIENT_FATEMODULE__SYNCSTATISTICSINFO_OFFSET UNITYSDK_OFFSET(0x1DB91A10)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8F640)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8F6A0)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8F850)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1DB8F8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateModule_TypeDefinitionIndex = 65471;

	class FateModule : public ::RPG::Client::BaseModule
	{
	public:
		::GIEJPMJGJMC* _GameStateMachine; // 0x10
		::RPG::Client::FateExpRewardInfo* _ExpRewardInfo; // 0x18
		::RPG::Client::FateGameData* _GameData; // 0x20
		::RPG::Client::FateStatisticsInfo* _StatisticsInfo; // 0x28
		::RPG::Client::Promises::Promise* _FinishFirstSyncPromise; // 0x30
		::RPG::Client::FateBGMState* _BGMState; // 0x38
		::RPG::Client::FateAreaInfo* _AreaInfo; // 0x40
		::KJGPHJPPFHI* _ActionDispatcher; // 0x48
		::RPG::Client::FateHandbookInfo* _HandbookInfo; // 0x50
		::System::UInt32 DebugSpecificTalkID; // 0x58
		::System::Boolean _IsWaitShowSettlePage; // 0x5C
		::System::Boolean _IsWaitShowEntrancePage; // 0x5D
		::System::Boolean _IsManualSettle; // 0x5E
		::System::Boolean _IsWaitShowRoundPreparePage; // 0x5F
		::System::Boolean _IsWaitShowRoundSettlePage; // 0x60
		::System::Boolean _IsPendingGameSettleSwitch; // 0x61
		::System::Byte _padding0[0x2];
		::EMFDLPNOGOH _ServerGameStatus; // 0x64
		static ::System::Collections::Generic::Dictionary_2<::EMFDLPNOGOH, ::RPG::Client::FateGameStateType>** StaticGet__ServerStatus2GameState()
		{
			return (::System::Collections::Generic::Dictionary_2<::EMFDLPNOGOH, ::RPG::Client::FateGameStateType>**)UnitySDK::FromName("RPG.Client", "FateModule")->GetStaticField(0x5BB20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnFateSwitchToRoundSettleState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDSETTLESTATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateSwitchToRoundPrepareState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDPREPARESTATE_OFFSET))(this, a1);
		}

		::System::Void SwitchGameStateByServerStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SWITCHGAMESTATEBYSERVERSTATUS_OFFSET))(this);
		}

		::System::Void LeaveGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_LEAVEGAME_OFFSET))(this);
		}

		::System::Void SettleGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETTLEGAME_OFFSET))(this, a1);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_ENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowRoundPreparePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETAUTOSHOWROUNDPREPAREPAGE_OFFSET))(this);
		}

		::System::Void SetWaitShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETWAITSHOWSETTLEPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FinishFirstSyncPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_FINISHFIRSTSYNCPROMISED_OFFSET))(this);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__INITREQ_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRoundPreparePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDPREPAREPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRoundSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDSETTLEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET))(this);
		}

		::RPG::Client::FateGameData* get_GameData()
		{
			return ((::RPG::Client::FateGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_GAMEDATA_OFFSET))(this);
		}

		::RPG::Client::FateAreaInfo* get_AreaInfo()
		{
			return ((::RPG::Client::FateAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_AREAINFO_OFFSET))(this);
		}

		::RPG::Client::FateStatisticsInfo* get_StatisticsInfo()
		{
			return ((::RPG::Client::FateStatisticsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_STATISTICSINFO_OFFSET))(this);
		}

		::RPG::Client::FateHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::FateHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::RPG::Client::FateExpRewardInfo* get_ExpRewardInfo()
		{
			return ((::RPG::Client::FateExpRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_EXPREWARDINFO_OFFSET))(this);
		}

		::RPG::Client::FateBGMState* get_BGMState()
		{
			return ((::RPG::Client::FateBGMState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFateQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateSettleScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESETTLESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateChangeLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATECHANGELINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateSyncActionResultScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESYNCACTIONRESULTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateSyncPendingActionScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESYNCPENDINGACTIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateHandlePendingActionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEHANDLEPENDINGACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateActionResultLevelStatusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultLevelPhaseChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELPHASECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultMasterUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTMASTERUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultAvailableSpecialAvatarUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTAVAILABLESPECIALAVATARUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultParamHolderUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultParamHolderRemove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERREMOVE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBattlePrepare(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLEPREPARE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBattleSettle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLESETTLE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBuffUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBuffAmplificationUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFAMPLIFICATIONUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultTraitUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultTraitBuffUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultTransferedMainTraitUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRANSFEREDMAINTRAITUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultExtraBuffSlot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTEXTRABUFFSLOT_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultCoinChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTCOINCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultShopGoodsLockUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPGOODSLOCKUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultShopMgrUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPMGRUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultShopRefreshUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPREFRESHUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultAddHougu(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDHOUGU_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultRemoveHougu(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTREMOVEHOUGU_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultAddReiju(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDREIJU_OFFSET))(this, a1);
		}

		::System::Void _OnFatePendingActionHouguSelect(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONHOUGUSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFatePendingActionReijuSelect(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONREIJUSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopBuyGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPBUYGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopSellBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPSELLBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopRefreshGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPREFRESHGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopLockGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPLOCKGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPLEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateTakeExpRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATETAKEEXPREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActionHandler(::DDLHODCINBI_LBFGOFIIOKP a1, ::KJGPHJPPFHI_GBGJFKCLONN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDLHODCINBI_LBFGOFIIOKP, ::KJGPHJPPFHI_GBGJFKCLONN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActionHandler_1(::KFAIFLHPEIE_KMJEAJDPHNP a1, ::KJGPHJPPFHI_AIJIGENMPPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KFAIFLHPEIE_KMJEAJDPHNP, ::KJGPHJPPFHI_AIJIGENMPPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncGameData(::BFBCEOICLAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBCEOICLAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCGAMEDATA_OFFSET))(this, a1);
		}

		::System::Void _SyncAreaInfo(::EJCCCIGMHOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJCCCIGMHOM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCAREAINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncStatisticsInfo(::HIJCLODMBPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIJCLODMBPO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCSTATISTICSINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncExpRewardInfo(::GCECAGOELDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCECAGOELDP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCEXPREWARDINFO_OFFSET))(this, a1);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__INIT_B__1_0_OFFSET))(this);
		}

	};
}
