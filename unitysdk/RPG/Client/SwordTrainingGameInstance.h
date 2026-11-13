#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHJOFLJGNKN.h"
#include "unitysdk/GFEKOONGJBL.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"
class BCPMPHNADMN;
class BJKPJIBNPHC;
class CEJHJJNCHCJ;
class CHOPOIIJCPD;
class DOMKIHFLHCB;
class EINKHFKDCCD;
class FBKIJNOFIAH;
class GELEHDAJMED;
class GIJKCHKMPJG;
class HCHNKKNDJCN;
class HFKKEDPMKKF;
class HFMLKIIOGBP;
class IEALCLFLDMP;
class JADFEJKNOCO;
class KHKMBEMDJNN;
class KLNGFBHIADA;
class LBBNBAEKGCJ;
class LNEGONHCNCE;
class NBEKHGCNJFD;
class NOJDNFNJLMP;
class NPGJDCIBFDD;
class PJMEOOFGEJO;
namespace RPG::Client { class ActivitySwordTrainingEndingHIntInfo; }
namespace RPG::Client { class ActivitySwordTrainingExamInfo; }
namespace RPG::Client { class SwordTrainProcessActionListData; }
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::Client { class SwordTrainingGameSettleData; }
namespace RPG::Client { class SwordTrainingMoodData; }
namespace RPG::Client { class SwordTrainingPowerRankData; }
namespace RPG::Client { class SwordTrainingPowerRankInfo; }
namespace RPG::Client { class SwordTrainingSkillInfo; }
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::Client { class SwordTrainingStatusData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionManager; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace RPG::Client::SwordTraining { class SwordTrainingPartnerManager; }
namespace RPG::Client::SwordTraining { class SwordTrainingRandomEventData; }
namespace RPG::Client::SwordTraining { class SwordTrainingRecordWrapper; }
namespace RPG::GameCore { class SwordTrainingProgressRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDACTIONHINT_OFFSET UNITYSDK_OFFSET(0x1CD06E60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0x1CD05D20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0x1CD035E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD034C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD05DD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1CCFBDA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETALLPOWERRANKROWLIST_OFFSET UNITYSDK_OFFSET(0x1CD07010)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETBATTLEPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x1CD07080)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x1CCFCC30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCURRENTPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0x1CD06FC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETDISPLAYMOODVALUE_OFFSET UNITYSDK_OFFSET(0x1CCFC5B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0x1CD07880)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETLATESTEXAMTURNROW_OFFSET UNITYSDK_OFFSET(0x1CD07460)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPHASEVALUE_OFFSET UNITYSDK_OFFSET(0x1CD072F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET UNITYSDK_OFFSET(0x1CD06F60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x1CD06F00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETREMAINDAYSTONEXTEXAM_OFFSET UNITYSDK_OFFSET(0x1CD070D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTRAININGRECORDER_OFFSET UNITYSDK_OFFSET(0x1CD06CF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET UNITYSDK_OFFSET(0x1CD06C80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0x1CD07DC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0x1CD07D20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1CD07D40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1CD07C10)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CCFB550)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0x1CD07D60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0x1CD07C30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET UNITYSDK_OFFSET(0x1CCFEE00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1CD07B70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0x1CD07BF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0x1CD07D00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0x1CD07DE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1CD07C70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0x1CD07B50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0x1CD07B30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET UNITYSDK_OFFSET(0x1CD07BB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0x1CD07C50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0x1CD07D80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0x1CD07CE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0x1CD07DA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0x1CD07B90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1CD07CC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0x1CD07BD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x1CD036C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ISGAMERESTARTED_OFFSET UNITYSDK_OFFSET(0x1CD07410)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_NEEDSHOWPHASESWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0x1CD071E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x1CD060A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x1CD06100)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET UNITYSDK_OFFSET(0x1CD06180)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1CD06040)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET UNITYSDK_OFFSET(0x1CD04E30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET UNITYSDK_OFFSET(0x1CD06BD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVEACTIONHINT_OFFSET UNITYSDK_OFFSET(0x1CD06EB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVERANDOMEVENT_OFFSET UNITYSDK_OFFSET(0x1CD06E00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0x1CD04F60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET UNITYSDK_OFFSET(0x1CD07750)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD076B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0x1CD07DD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0x1CD07D30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1CD07D50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1CD07C20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0x1CD07D70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0x1CD07C40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1CD07B80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0x1CD07C00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0x1CD07D10)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0x1CD07DF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0x1CD07B60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0x1CD07B40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET UNITYSDK_OFFSET(0x1CD07BC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0x1CD07C60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0x1CD07D90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0x1CD07CF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0x1CD07DB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0x1CD07BA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1CD07CD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0x1CD07BE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET UNITYSDK_OFFSET(0x1CD04DA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET UNITYSDK_OFFSET(0x1CD04D00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x1CD03A60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_TRYSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1CD074E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET UNITYSDK_OFFSET(0x1CD06D50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CD04FB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1CD07A30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x1CD044C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET UNITYSDK_OFFSET(0x1CD05A30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD05B90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET UNITYSDK_OFFSET(0x1CD04050)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET UNITYSDK_OFFSET(0x1CD078D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET UNITYSDK_OFFSET(0x1CD07970)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET UNITYSDK_OFFSET(0x1CD04390)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0x1CD04330)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x1CD03E70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x1CD04410)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET UNITYSDK_OFFSET(0x1CD040B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1CD07540)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameInstance_TypeDefinitionIndex = 63393;

	class SwordTrainingGameInstance : public ::System::Object
	{
	public:
		::DOMKIHFLHCB* _EffectMgr_k__BackingField; // 0x10
		::NOJDNFNJLMP* GameContext; // 0x18
		::RPG::Client::SwordTraining::SwordTrainingActionSelection* _CurSelection_k__BackingField; // 0x20
		::RPG::Client::SwordTraining::SwordTrainingActionManager* _TrainingActionMgr_k__BackingField; // 0x28
		::RPG::Client::SwordTrainingGameSettleData* _SettleData_k__BackingField; // 0x30
		::LNEGONHCNCE* _RecordMgr_k__BackingField; // 0x38
		::RPG::Client::SwordTraining::SwordTrainingActionData* _CurActionData_k__BackingField; // 0x40
		::RPG::Client::SwordTrainingSkillInfo* SkillInfo; // 0x48
		::RPG::Client::SwordTrainingPowerRankInfo* PowerRankInfo; // 0x50
		::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* _RecordWrapper; // 0x58
		::RPG::Client::SwordTrainingStatusChangeInfo* _ChangeInfo; // 0x60
		::RPG::Client::SwordTrainProcessActionListData* CurProcessActions; // 0x68
		::RPG::Client::SwordTrainingStatusData* _StatusData_k__BackingField; // 0x70
		::RPG::Client::SwordTrainingMoodData* _MoodData_k__BackingField; // 0x78
		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* _PendingEvent_k__BackingField; // 0x80
		::RPG::Client::ActivitySwordTrainingEndingHIntInfo* EndingHintInfo; // 0x88
		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* _PartnerMgr_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::System::UInt32>* PartnerSDKReportList; // 0x98
		::RPG::Client::ActivitySwordTrainingExamInfo* ExamInfo; // 0xA0
		::PJMEOOFGEJO* _GameStateMgr_k__BackingField; // 0xA8
		::System::UInt32 _CurTurnID_k__BackingField; // 0xB0
		::System::Boolean _IsRestore; // 0xB4
		::System::Boolean _IsAutoShowTrainingPageProcess; // 0xB5
		::System::Byte _padding0[0x2];
		::System::UInt32 _CurDay_k__BackingField; // 0xB8
		::System::Boolean _IsExamTurn_k__BackingField; // 0xBC
		::System::Boolean _Inited; // 0xBD
		::System::Boolean _HasExtraAction_k__BackingField; // 0xBE
		::System::Boolean _IsTrainingTurn_k__BackingField; // 0xBF
		::System::UInt32 _ActionHintID_k__BackingField; // 0xC0
		::System::UInt32 _LastExamTurnID; // 0xC4
		::System::UInt32 _StoryLineID_k__BackingField; // 0xC8
		::GFEKOONGJBL _DailyPhaseType_k__BackingField; // 0xCC
		::GFEKOONGJBL _CurDailyPhaseType_k__BackingField; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameInstance* CreateGame(::EINKHFKDCCD* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::SwordTrainingGameInstance*(*)(::EINKHFKDCCD*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET))(a1, a2);
		}

		::System::Void Sync(::EINKHFKDCCD* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EINKHFKDCCD*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncTurnActions(::CEJHJJNCHCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEJHJJNCHCJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET))(this, a1);
		}

		::System::Void SyncEnding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET))(this);
		}

		::System::Void OnRestoreGame(::EINKHFKDCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINKHFKDCCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET))(this, a1);
		}

		::System::Void Update(::GIJKCHKMPJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIJKCHKMPJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void OnEnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONENTERGAME_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONEXITGAME_OFFSET))(this);
		}

		::System::Void OnGameSettle(::CHOPOIIJCPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHOPOIIJCPD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET))(this, a1);
		}

		::System::Void OnTurnSettle(::KHKMBEMDJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKMBEMDJNN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET))(this, a1);
		}

		::System::Void FinishGameState(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingProgressRow* GetTurnRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingStatusChangeInfo* GetChangeInfo()
		{
			return ((::RPG::Client::SwordTrainingStatusChangeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCHANGEINFO_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* GetTrainingRecorder()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRecordWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTRAININGRECORDER_OFFSET))(this);
		}

		::System::UInt32 GetDisplayMoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETDISPLAYMOODVALUE_OFFSET))(this);
		}

		::System::Void UpdateEndingInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET))(this, a1);
		}

		::System::Void AddRandomEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveRandomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVERANDOMEVENT_OFFSET))(this);
		}

		::System::Void AddActionHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDACTIONHINT_OFFSET))(this);
		}

		::System::Void RemoveActionHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVEACTIONHINT_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankRowByPowerValue(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankByRankID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetCurrentPowerRankRow()
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCURRENTPOWERRANKROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* GetAllPowerRankRowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETALLPOWERRANKROWLIST_OFFSET))(this);
		}

		::System::UInt32 GetBattlePowerValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETBATTLEPOWERVALUE_OFFSET))(this);
		}

		::System::UInt32 GetRemainDaysToNextExam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETREMAINDAYSTONEXTEXAM_OFFSET))(this);
		}

		::System::Boolean NeedShowPhaseSwitchDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_NEEDSHOWPHASESWITCHDIALOG_OFFSET))(this);
		}

		::System::Int32 GetPhaseValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPHASEVALUE_OFFSET))(this);
		}

		::System::Boolean IsGameRestarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ISGAMERESTARTED_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingProgressRow* GetLatestExamTurnRow()
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETLATESTEXAMTURNROW_OFFSET))(this);
		}

		::System::Void TryStartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_TRYSTARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void SetPerformanceContext(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPerformanceContext_1(::RPG::Client::SwordTrainingPerformanceType a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetIsAutoShowTrainingPageProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean GetIsAutoShowTrainingPageProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET))(this);
		}

		::System::Void _RefreshActionTurnInfo(::IEALCLFLDMP* a1, ::HFMLKIIOGBP* a2, ::GELEHDAJMED* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IEALCLFLDMP*, ::HFMLKIIOGBP*, ::GELEHDAJMED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshExamTurnInfo(::KLNGFBHIADA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNGFBHIADA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshTurn(::LBBNBAEKGCJ* a1, ::HFMLKIIOGBP* a2, ::GELEHDAJMED* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LBBNBAEKGCJ*, ::HFMLKIIOGBP*, ::GELEHDAJMED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshStatusInfo(::HCHNKKNDJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCHNKKNDJCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshActionInfo(::HFMLKIIOGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFMLKIIOGBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshSkillInfo(::BCPMPHNADMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCPMPHNADMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshPowerRankInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshStoryInfo(::HFKKEDPMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void _InitStateByPendingAction(::NPGJDCIBFDD* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPGJDCIBFDD*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET))(this, a1, a2);
		}

		::NBEKHGCNJFD* _FetchStoryGameState(::JADFEJKNOCO* a1)
		{
			return ((::NBEKHGCNJFD*(*)(::PVOID, ::JADFEJKNOCO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void _OnMoodChange(::FBKIJNOFIAH* a1, ::BHJOFLJGNKN a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::FBKIJNOFIAH*, ::BHJOFLJGNKN, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnStatusChanged(::BHJOFLJGNKN a1, ::BJKPJIBNPHC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHJOFLJGNKN, ::BJKPJIBNPHC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _StartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsTrainingTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET))(this);
		}

		::System::Void set_IsTrainingTurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExamTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET))(this);
		}

		::System::Void set_IsExamTurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET))(this, a1);
		}

		::GFEKOONGJBL get_DailyPhaseType()
		{
			return ((::GFEKOONGJBL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_DailyPhaseType(::GFEKOONGJBL a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFEKOONGJBL))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingStatusData* get_StatusData()
		{
			return ((::RPG::Client::SwordTrainingStatusData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET))(this);
		}

		::System::Void set_StatusData(::RPG::Client::SwordTrainingStatusData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingMoodData* get_MoodData()
		{
			return ((::RPG::Client::SwordTrainingMoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET))(this);
		}

		::System::Void set_MoodData(::RPG::Client::SwordTrainingMoodData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingMoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionManager* get_TrainingActionMgr()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET))(this);
		}

		::System::Void set_TrainingActionMgr(::RPG::Client::SwordTraining::SwordTrainingActionManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET))(this, a1);
		}

		::DOMKIHFLHCB* get_EffectMgr()
		{
			return ((::DOMKIHFLHCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET))(this);
		}

		::System::Void set_EffectMgr(::DOMKIHFLHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOMKIHFLHCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingProgressRow* get_CurTurnRow()
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET))(this);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurTurnID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET))(this);
		}

		::System::Void set_CurTurnID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* get_PartnerMgr()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingPartnerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET))(this);
		}

		::System::Void set_PartnerMgr(::RPG::Client::SwordTraining::SwordTrainingPartnerManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingPartnerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET))(this, a1);
		}

		::LNEGONHCNCE* get_RecordMgr()
		{
			return ((::LNEGONHCNCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET))(this);
		}

		::System::Void set_RecordMgr(::LNEGONHCNCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNEGONHCNCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET))(this, a1);
		}

		::PJMEOOFGEJO* get_GameStateMgr()
		{
			return ((::PJMEOOFGEJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET))(this);
		}

		::System::Void set_GameStateMgr(::PJMEOOFGEJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMEOOFGEJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType get_CurrentState()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* get_CurActionData()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET))(this);
		}

		::System::Void set_CurActionData(::RPG::Client::SwordTraining::SwordTrainingActionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET))(this, a1);
		}

		::GFEKOONGJBL get_CurDailyPhaseType()
		{
			return ((::GFEKOONGJBL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_CurDailyPhaseType(::GFEKOONGJBL a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFEKOONGJBL))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionSelection* get_CurSelection()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET))(this);
		}

		::System::Void set_CurSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* get_PendingEvent()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRandomEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET))(this);
		}

		::System::Void set_PendingEvent(::RPG::Client::SwordTraining::SwordTrainingRandomEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingGameSettleData* get_SettleData()
		{
			return ((::RPG::Client::SwordTrainingGameSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET))(this);
		}

		::System::Void set_SettleData(::RPG::Client::SwordTrainingGameSettleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionHintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET))(this);
		}

		::System::Void set_ActionHintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasExtraAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET))(this);
		}

		::System::Void set_HasExtraAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET))(this, a1);
		}

	};
}
