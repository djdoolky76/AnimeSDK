#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartySettleSourceType.h"
#include "unitysdk/System/Object.h"
class EMJDFLPCDBF;
class EPHKIEHONGB;
class GMCPCKHHPOB;
class GNFJOHCLDFE;
class HILKDNFLNLL;
class HJLECIIEKGI;
class HLNFNACOFFF;
class MKDPFLPICJB;
class POOMINFCCKG;
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { class TrainPartyCardManager; }
namespace RPG::Client::TrainParty { class TrainPartyEventFadeInData; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::Client::TrainParty { class TrainPartyGameRecordManager; }
namespace RPG::Client::TrainParty { class TrainPartyGridsController; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerTeamData; }
namespace RPG::Client::TrainParty { class TrainPartyPreviewInfo; }
namespace RPG::Client::TrainParty { class TrainPartySettleData; }
namespace RPG::Client::TrainParty { class TrainPartyStatusData; }
namespace RPG::GameCore { class PlayTrainPartySimpleTalk; }
namespace RPG::GameCore { class TrainPartyProgressRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CLEARGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xED4FAF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAMEPLAYSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xED4FF20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0xED4F360)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATESETTLEDATA_OFFSET UNITYSDK_OFFSET(0xED51E00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xED4F350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED51110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOREPLACEPASSENGERSKILL_OFFSET UNITYSDK_OFFSET(0xED52E60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOSELECTDIALOGUEOPTION_OFFSET UNITYSDK_OFFSET(0xED52D20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORBIDHANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xED521B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORCEFINISHDIALOGUEACTION_OFFSET UNITYSDK_OFFSET(0xED53930)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETCURTURNTEAMPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xED534C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0xED4F6D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xED52C40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETSELECTABLETEAMDATALIST_OFFSET UNITYSDK_OFFSET(0xED532A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ACTIONCARDMGR_OFFSET UNITYSDK_OFFSET(0xED539F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xED53AB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURMEETINGDATA_OFFSET UNITYSDK_OFFSET(0xED53AD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTUNRROW_OFFSET UNITYSDK_OFFSET(0xED52FD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xED53B30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_EVENTMGR_OFFSET UNITYSDK_OFFSET(0xED53A90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GAMEPLAYMASKBG_OFFSET UNITYSDK_OFFSET(0xED53B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GRIDSINFO_OFFSET UNITYSDK_OFFSET(0xED53A10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ISINCARDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xED509E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_NEEDSELECTPASSENGER_OFFSET UNITYSDK_OFFSET(0xED53AF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_PASSENGERMGR_OFFSET UNITYSDK_OFFSET(0xED53A50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xED53A70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_TRAINSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xED53A30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xED4F3C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISCURTURNLOCKED_OFFSET UNITYSDK_OFFSET(0xED52F20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISNEWTURN_OFFSET UNITYSDK_OFFSET(0xED530F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONCARDSETTLE_OFFSET UNITYSDK_OFFSET(0xED51EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xED52B70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xED52BF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONGAMEPLAYSETTLE_OFFSET UNITYSDK_OFFSET(0xED4FDA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONHANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0xED51A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONLEAVEGAMESCENE_OFFSET UNITYSDK_OFFSET(0xED52200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWEVENTFADEINFINISH_OFFSET UNITYSDK_OFFSET(0xED538D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xED525D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSIMPLETALKFINISH_OFFSET UNITYSDK_OFFSET(0xED53800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONUSECARDFAIL_OFFSET UNITYSDK_OFFSET(0xED52840)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RECORDCURTURNSEEN_OFFSET UNITYSDK_OFFSET(0xED531D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RELEASEHANDLEPENDINGACTIONLOCK_OFFSET UNITYSDK_OFFSET(0xED52AE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_ACTIONCARDMGR_OFFSET UNITYSDK_OFFSET(0xED53A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xED53AC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURMEETINGDATA_OFFSET UNITYSDK_OFFSET(0xED53AE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xED53B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_EVENTMGR_OFFSET UNITYSDK_OFFSET(0xED53AA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GAMEPLAYMASKBG_OFFSET UNITYSDK_OFFSET(0xED53B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GRIDSINFO_OFFSET UNITYSDK_OFFSET(0xED53A20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_NEEDSELECTPASSENGER_OFFSET UNITYSDK_OFFSET(0xED53B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_PASSENGERMGR_OFFSET UNITYSDK_OFFSET(0xED53A60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xED53A80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_TRAINSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xED53A40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_STARTUSECARD_OFFSET UNITYSDK_OFFSET(0xED526F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNCGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xED4F930)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xED4F760)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRIGGERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xED53230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYHANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xED51590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYPLAYSIMPLETALK_OFFSET UNITYSDK_OFFSET(0xED53750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWEVENTFADEIN_OFFSET UNITYSDK_OFFSET(0xED53860)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xED52530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSTARTGAMEPALY_OFFSET UNITYSDK_OFFSET(0xED528A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xED50000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ADDPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xED508A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CHECKISTURNLOCKED_OFFSET UNITYSDK_OFFSET(0xED53030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__HANDLENEXTPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xED515F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ONCARDACTEND_OFFSET UNITYSDK_OFFSET(0xED53990)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__SETCURTURNID_OFFSET UNITYSDK_OFFSET(0xED4F880)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xED52680)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGameInstance_TypeDefinitionIndex = 76509;

	class TrainPartyGameInstance : public ::System::Object
	{
	public:
		::System::Action* _OnSimpleTalkFinishCallback; // 0x10
		::HJLECIIEKGI* _NextPendingAction; // 0x18
		::HJLECIIEKGI* _CurPendingAction; // 0x20
		::System::Action* _OnActionFinishCallback; // 0x28
		::UnityEngine::CanvasGroup* _GameplayMaskBG_k__BackingField; // 0x30
		::RPG::Client::TrainParty::TrainPartyPreviewInfo* _PreviewInfo; // 0x38
		::GNFJOHCLDFE* _GameplaySettleInfo; // 0x40
		::System::Action* _OnShowSettleFinish; // 0x48
		::RPG::Client::TrainParty::TrainPartySettleData* _SettleData; // 0x50
		::RPG::Client::TrainParty::TrainPartyPassengerManager* _PassengerMgr_k__BackingField; // 0x58
		::EMJDFLPCDBF* _EventMgr_k__BackingField; // 0x60
		::RPG::Client::TrainParty::TrainPartyStatusData* _TrainStatusData_k__BackingField; // 0x68
		::RPG::Client::TrainParty::TrainPartyGridsController* _GridsInfo_k__BackingField; // 0x70
		::System::Action* _OnShowEventFadeInFinishCallback; // 0x78
		::RPG::Client::TrainParty::TrainPartyCardManager* _ActionCardMgr_k__BackingField; // 0x80
		::RPG::Client::TrainParty::TrainPartyBuildManager* _BuildMgr_k__BackingField; // 0x88
		::RPG::Client::TrainParty::TrainPartyMeetingData* _CurMeetingData_k__BackingField; // 0x90
		::RPG::Client::TrainParty::TrainPartyGameRecordManager* _RecordMgr_k__BackingField; // 0x98
		::System::Boolean _Inited; // 0xA0
		::System::Boolean _IsOnRoundStart; // 0xA1
		::System::Boolean _IsCurTurnLocked; // 0xA2
		::System::Boolean _NeedSelectPassenger_k__BackingField; // 0xA3
		::System::Boolean IsInCardAct; // 0xA4
		::System::Byte _padding0[0x3];
		::System::UInt32 _LockCount; // 0xA8
		::System::UInt32 _CurTurnID_k__BackingField; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartyGameInstance* CreateGame()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAME_OFFSET))();
		}

		static ::RPG::Client::TrainParty::TrainPartyGameInstance* GetInstance()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETINSTANCE_OFFSET))();
		}

		::System::Void Sync(::MKDPFLPICJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDPFLPICJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncGameplayData(::EPHKIEHONGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHKIEHONGB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNCGAMEPLAYDATA_OFFSET))(this, a1);
		}

		::System::Void ClearGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CLEARGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void OnGameplaySettle(::GNFJOHCLDFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNFJOHCLDFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONGAMEPLAYSETTLE_OFFSET))(this, a1);
		}

		::System::Void Update(::GMCPCKHHPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMCPCKHHPOB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryHandlePendingAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYHANDLEPENDINGACTION_OFFSET))(this);
		}

		::System::Void OnHandlePendingActionFinish(::POOMINFCCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POOMINFCCKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONHANDLEPENDINGACTIONFINISH_OFFSET))(this, a1);
		}

		::System::Void OnCardSettle(::HILKDNFLNLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILKDNFLNLL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONCARDSETTLE_OFFSET))(this, a1);
		}

		::System::Void OnLeaveGameScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONLEAVEGAMESCENE_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartySettleData* CreateSettleData(::HLNFNACOFFF* a1, ::RPG::Client::TrainParty::TrainPartySettleSourceType a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::PVOID, ::HLNFNACOFFF*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATESETTLEDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartySettleData* CreateGameplaySettleData()
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAMEPLAYSETTLEDATA_OFFSET))(this);
		}

		::System::Void TryShowSettleResult(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWSETTLERESULT_OFFSET))(this, a1);
		}

		::System::Void StartUseCard(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_STARTUSECARD_OFFSET))(this, a1);
		}

		::System::Void OnUseCardFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONUSECARDFAIL_OFFSET))(this);
		}

		::System::Void TryStartGamepaly(::RPG::Client::TrainParty::TrainPartyPassengerTeamData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSTARTGAMEPALY_OFFSET))(this, a1);
		}

		::System::Void ForbidHandlePendingAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORBIDHANDLEPENDINGACTION_OFFSET))(this);
		}

		::System::Void ReleaseHandlePendingActionLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RELEASEHANDLEPENDINGACTIONLOCK_OFFSET))(this);
		}

		::System::Void OnShowSettleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWSETTLEFINISH_OFFSET))(this);
		}

		::System::Void OnEnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONENTERGAME_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONEXITGAME_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPreviewInfo* GetPreviewInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPreviewInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETPREVIEWINFO_OFFSET))(this);
		}

		::System::Void DoSelectDialogueOption(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOSELECTDIALOGUEOPTION_OFFSET))(this, a1);
		}

		::System::Void DoReplacePassengerSkill(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOREPLACEPASSENGERSKILL_OFFSET))(this, a1);
		}

		::System::Boolean IsCurTurnLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISCURTURNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsNewTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISNEWTURN_OFFSET))(this);
		}

		::System::Void RecordCurTurnSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RECORDCURTURNSEEN_OFFSET))(this);
		}

		::System::Void TriggerPerformance(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRIGGERPERFORMANCE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerTeamData*>* GetSelectableTeamDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETSELECTABLETEAMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetCurTurnTeamPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETCURTURNTEAMPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Void TryPlaySimpleTalk(::RPG::GameCore::PlayTrainPartySimpleTalk* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayTrainPartySimpleTalk*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYPLAYSIMPLETALK_OFFSET))(this, a1, a2);
		}

		::System::Void OnSimpleTalkFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSIMPLETALKFINISH_OFFSET))(this);
		}

		::System::Void TryShowEventFadeIn(::RPG::Client::TrainParty::TrainPartyEventFadeInData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyEventFadeInData*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWEVENTFADEIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnShowEventFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWEVENTFADEINFINISH_OFFSET))(this);
		}

		::System::Void ForceFinishDialogueAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORCEFINISHDIALOGUEACTION_OFFSET))(this);
		}

		::System::Void _HandleNextPendingAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__HANDLENEXTPENDINGACTION_OFFSET))(this);
		}

		::System::Void _AddPendingAction(::HJLECIIEKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJLECIIEKGI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ADDPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Void _TryShowSettleResult(::RPG::Client::TrainParty::TrainPartySettleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__TRYSHOWSETTLERESULT_OFFSET))(this, a1);
		}

		::System::Void _OnCardActEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ONCARDACTEND_OFFSET))(this);
		}

		::System::Void _SetCurTurnID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__SETCURTURNID_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsTurnLocked(::RPG::GameCore::TrainPartyProgressRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyProgressRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CHECKISTURNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyCardManager* get_ActionCardMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ACTIONCARDMGR_OFFSET))(this);
		}

		::System::Void set_ActionCardMgr(::RPG::Client::TrainParty::TrainPartyCardManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_ACTIONCARDMGR_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyGridsController* get_GridsInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGridsController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GRIDSINFO_OFFSET))(this);
		}

		::System::Void set_GridsInfo(::RPG::Client::TrainParty::TrainPartyGridsController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGridsController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GRIDSINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyStatusData* get_TrainStatusData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyStatusData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_TRAINSTATUSDATA_OFFSET))(this);
		}

		::System::Void set_TrainStatusData(::RPG::Client::TrainParty::TrainPartyStatusData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyStatusData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_TRAINSTATUSDATA_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerManager* get_PassengerMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_PASSENGERMGR_OFFSET))(this);
		}

		::System::Void set_PassengerMgr(::RPG::Client::TrainParty::TrainPartyPassengerManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_PASSENGERMGR_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyGameRecordManager* get_RecordMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameRecordManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_RECORDMGR_OFFSET))(this);
		}

		::System::Void set_RecordMgr(::RPG::Client::TrainParty::TrainPartyGameRecordManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameRecordManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_RECORDMGR_OFFSET))(this, a1);
		}

		::EMJDFLPCDBF* get_EventMgr()
		{
			return ((::EMJDFLPCDBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_EVENTMGR_OFFSET))(this);
		}

		::System::Void set_EventMgr(::EMJDFLPCDBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMJDFLPCDBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_EVENTMGR_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildManager* get_BuildMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_BUILDMGR_OFFSET))(this);
		}

		::System::Void set_BuildMgr(::RPG::Client::TrainParty::TrainPartyBuildManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_BUILDMGR_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyProgressRow* get_CurTunrRow()
		{
			return ((::RPG::GameCore::TrainPartyProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTUNRROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingData* get_CurMeetingData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURMEETINGDATA_OFFSET))(this);
		}

		::System::Void set_CurMeetingData(::RPG::Client::TrainParty::TrainPartyMeetingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURMEETINGDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedSelectPassenger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_NEEDSELECTPASSENGER_OFFSET))(this);
		}

		::System::Void set_NeedSelectPassenger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_NEEDSELECTPASSENGER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInCardPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ISINCARDPERFORMANCE_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* get_GameplayMaskBG()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GAMEPLAYMASKBG_OFFSET))(this);
		}

		::System::Void set_GameplayMaskBG(::UnityEngine::CanvasGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GAMEPLAYMASKBG_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurTurnID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTURNID_OFFSET))(this);
		}

		::System::Void set_CurTurnID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURTURNID_OFFSET))(this, a1);
		}

	};
}
