#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FENMFIBCEMO.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
class GEGKPEHKGCB;
class IGLLJCAMGMO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance_ChallengeProgress; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1B7084B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F7C50)
#define RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B707490)
#define RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x1B707F40)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1B7070C0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B707410)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET UNITYSDK_OFFSET(0x1B7071B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B707310)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B7072C0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_HASSETTLEREWARD_OFFSET UNITYSDK_OFFSET(0x1B707080)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B707160)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B706EF0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x1B707060)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1B7070A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET UNITYSDK_OFFSET(0x1B707450)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1B7070E0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1B6F83A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B7072A0)
#define RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0x1B707390)
#define RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET UNITYSDK_OFFSET(0x1B708850)
#define RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1B707BB0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B709680)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0x1B707D20)
#define RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1B707550)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1B7070D0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_HASSETTLEREWARD_OFFSET UNITYSDK_OFFSET(0x1B707090)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x1B707070)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1B7070B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B7072B0)
#define RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x1B707590)
#define RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1B6F8A60)
#define RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x1B709760)
#define RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x1B7096D0)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET UNITYSDK_OFFSET(0x1B709270)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET UNITYSDK_OFFSET(0x1B708F20)
#define RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1B709620)
#define RPG_CLIENT_CHALLENGEINSTANCE__HASANYAVATARDEAD_OFFSET UNITYSDK_OFFSET(0x1B709090)
#define RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET UNITYSDK_OFFSET(0x1B706F50)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x1B709980)
#define RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x1B709E40)
#define RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x1B709870)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET UNITYSDK_OFFSET(0x1B709FF0)
#define RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0x1B709F50)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1B709710)
#define RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B707AA0)
#define RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B70A060)
#define RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__71_0_OFFSET UNITYSDK_OFFSET(0x1B70A280)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance_TypeDefinitionIndex = 64527;

	class ChallengeInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IGLLJCAMGMO*>* KillMonsters; // 0x10
		::RPG::Client::ChallengeInstance_ChallengeProgress* _LastProgressBeforeEnterBattle; // 0x18
		::RPG::Client::ChallengeInstance_ChallengeProgress* _CurrentProgress; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _MonsterIDs; // 0x28
		::System::Action* _ErrorExitCallback; // 0x30
		::RPG::Client::ChallengeData* _ChallengeDataRef_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeTargetState>* CachedTargetStatesBeforeChallenge; // 0x40
		::System::Boolean _IsUsingFirstTeam; // 0x48
		::System::Boolean _IsSecondTeamStart; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 ScoreSecond; // 0x4C
		::System::Boolean _IsWin_k__BackingField; // 0x50
		::System::Boolean _NeedShowSecondEnvironmentDialog; // 0x51
		::System::Boolean _HasSettleReward_k__BackingField; // 0x52
		::System::Boolean _IsSettled_k__BackingField; // 0x53
		::FENMFIBCEMO _Status_k__BackingField; // 0x54
		::System::Boolean _IsFirstEnterChallenge; // 0x58
		::System::Boolean IsNewRecord; // 0x59
		::System::Boolean CachedChallengeIsFinish; // 0x5A
		::System::Byte _padding1[0x1];
		::System::UInt32 DeadAvatarNum; // 0x5C
		::System::UInt32 ScoreFirst; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISSETTLED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSettleReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_HASSETTLEREWARD_OFFSET))(this);
		}

		::System::Void set_HasSettleReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_HASSETTLEREWARD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeData* get_ChallengeDataRef()
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CHALLENGEDATAREF_OFFSET))(this);
		}

		::System::Void set_ChallengeDataRef(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_CHALLENGEDATAREF_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTSTAGENUM_OFFSET))(this);
		}

		::FENMFIBCEMO get_Status()
		{
			return ((::FENMFIBCEMO(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::FENMFIBCEMO a1)
		{
			return ((::System::Void(*)(::PVOID, ::FENMFIBCEMO))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_TurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_TURNCOST_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance_ChallengeProgress* get_CurrentProgress()
		{
			return ((::RPG::Client::ChallengeInstance_ChallengeProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ChallengeInstance_ChallengeProgress* get_LastProgressBefore()
		{
			return ((::RPG::Client::ChallengeInstance_ChallengeProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GET_LASTPROGRESSBEFORE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void Sync(::GEGKPEHKGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGKPEHKGCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SYNC_OFFSET))(this, a1);
		}

		::System::Void Settle(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETTLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* GetChallengeAvatarDatas()
		{
			return ((::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_GETCHALLENGEAVATARDATAS_OFFSET))(this);
		}

		::System::Void CacheChallengeTargetState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CACHECHALLENGETARGETSTATE_OFFSET))(this, a1);
		}

		::System::Void SaveProgressBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SAVEPROGRESSBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshChallengeTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_REFRESHCHALLENGETARGET_OFFSET))(this);
		}

		::System::Void SetErrorExitCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_SETERROREXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_UPDATETARGETSTATUS_OFFSET))(this, a1);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void _SyncExtraInfo(::GEGKPEHKGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGKPEHKGCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnTeamDataRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ONTEAMDATAREFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 _GetTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 _GetCurStageTurnCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGETURNCOST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IGLLJCAMGMO*>* _GetCurStageKilledMonster()
		{
			return ((::System::Collections::Generic::List_1<::IGLLJCAMGMO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__GETCURSTAGEKILLEDMONSTER_OFFSET))(this);
		}

		::System::Boolean _IsAllMonsterCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__ISALLMONSTERCLEARED_OFFSET))(this);
		}

		::System::Boolean _HasAnyAvatarDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__HASANYAVATARDEAD_OFFSET))(this);
		}

		::System::Void _ShowEnvironmentHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SHOWENVIRONMENTHINT_OFFSET))(this);
		}

		::System::Void _ShowChallengeMazeHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SHOWCHALLENGEMAZEHINT_OFFSET))(this);
		}

		::System::Void _TryReSettleChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__TRYRESETTLECHALLENGE_OFFSET))(this);
		}

		::System::Void _SyncProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::IGLLJCAMGMO*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::IGLLJCAMGMO*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE__SYNCPROGRESS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __OnHideLoadingPage_b__71_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___ONHIDELOADINGPAGE_B__71_0_OFFSET))(this);
		}

	};
}
