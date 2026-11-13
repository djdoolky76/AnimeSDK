#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ChallengeData_ChallengeOpenResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALIOECIFDKK;
class IPALENCIHFB;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeRecommendData; }
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client { class CheckItemReachPlayerLevel; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x1B6FB9E0)
#define RPG_CLIENT_CHALLENGEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6FED10)
#define RPG_CLIENT_CHALLENGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F4F00)
#define RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6FB3C0)
#define RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x1B6FE660)
#define RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x1B6FE410)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0x1B6FD1F0)
#define RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0x1B6FD260)
#define RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET UNITYSDK_OFFSET(0x1B6FBA60)
#define RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x1B6FD6A0)
#define RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B6FD590)
#define RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1B6FE380)
#define RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET UNITYSDK_OFFSET(0x1B6FC300)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1B6FD750)
#define RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1B6F8E60)
#define RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET UNITYSDK_OFFSET(0x1B6FC870)
#define RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B6FE9C0)
#define RPG_CLIENT_CHALLENGEDATA_GETVORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1B6FD2D0)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B6FB250)
#define RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x1B6FAEB0)
#define RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B6FB000)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B6FAD50)
#define RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FAC10)
#define RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B6FABD0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B6FB070)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x1B6FAC30)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET UNITYSDK_OFFSET(0x1B6FB2A0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISRELATEDTIERCEOPEN_OFFSET UNITYSDK_OFFSET(0x1B6F9430)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1B6FAF30)
#define RPG_CLIENT_CHALLENGEDATA_GET_ISTIERCEFINISHED_OFFSET UNITYSDK_OFFSET(0x1B6F65A0)
#define RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1B6FB200)
#define RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B6FAF90)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1B6FB1B0)
#define RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET UNITYSDK_OFFSET(0x1B6FB160)
#define RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B6FB090)
#define RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B6F44E0)
#define RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B6FABF0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0x1B6FAED0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0x1B6FAEF0)
#define RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1B6F6160)
#define RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET UNITYSDK_OFFSET(0x1B6F9510)
#define RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET UNITYSDK_OFFSET(0x1B6FAE90)
#define RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0x1B6FAF10)
#define RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x1B6FBC80)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET UNITYSDK_OFFSET(0x1B6FBF70)
#define RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x1B6FBD10)
#define RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1B6FE960)
#define RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1B6FC1D0)
#define RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B6FE910)
#define RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x1B6FAEC0)
#define RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FAC20)
#define RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B6FABE0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B6FB080)
#define RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x1B6FADA0)
#define RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1B6FAC00)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET UNITYSDK_OFFSET(0x1B6FAEE0)
#define RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET UNITYSDK_OFFSET(0x1B6FAF00)
#define RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET UNITYSDK_OFFSET(0x1B6FAEA0)
#define RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET UNITYSDK_OFFSET(0x1B6FAF20)
#define RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x1B6FE8C0)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1B6FB300)
#define RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x1B6FB460)
#define RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1B6F5740)
#define RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1B6FE2D0)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET UNITYSDK_OFFSET(0x1B6FDF90)
#define RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET UNITYSDK_OFFSET(0x1B6F5A40)
#define RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B6FC490)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B6FC670)
#define RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0x1B6FC220)
#define RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B6FC380)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData_TypeDefinitionIndex = 64523;

	class ChallengeData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengeMazeConfigRow* _Row_k__BackingField; // 0x10
		::RPG::Client::ChallengeRecommendData* _ChallengeRecommendData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>* _ChallengeTargets; // 0x20
		::RPG::Client::ChallengeGroupData* ChallengeGroupDataRef; // 0x28
		::RPG::Client::CheckItemReachPlayerLevel* _PlayerLevelCheckItem; // 0x30
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x38
		::System::Boolean _IsFinish_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 _Stars_k__BackingField; // 0x44
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::UInt32 _ScoreFirst_k__BackingField; // 0x4C
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x50
		::System::UInt32 _ScoreSecond_k__BackingField; // 0x54
		::System::UInt32 _ChallengeTimes_k__BackingField; // 0x58
		::System::Int32 IndexInGroup; // 0x5C
		::System::UInt32 _TargetBitSet_k__BackingField; // 0x60
		static ::System::UInt32* StaticGet__AutoSettleFinishBitSet()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ChallengeData")->GetStaticField(0x15990);
		}

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_CCTOR_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeMazeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_GROUPTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STAGENUM_OFFSET))(this);
		}

		::System::Boolean get_IsFirstOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFIRSTOPEN_OFFSET))(this);
		}

		::System::Void set_IsFirstOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFIRSTOPEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Stars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_STARS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGETIMES_OFFSET))(this);
		}

		::System::Void set_ChallengeTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_CHALLENGETIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_ScoreFirst()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCOREFIRST_OFFSET))(this);
		}

		::System::Void set_ScoreFirst(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCOREFIRST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScoreSecond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_SCORESECOND_OFFSET))(this);
		}

		::System::Void set_ScoreSecond(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_SCORESECOND_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_TARGETBITSET_OFFSET))(this);
		}

		::System::Void set_TargetBitSet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_TARGETBITSET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTierceFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISTIERCEFINISHED_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_PreMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PREMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_PreLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PRELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_PreChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_PRECHALLENGEID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeCountDown()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_CHALLENGECOUNTDOWN_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISPERFECTFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsRelatedTierceOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GET_ISRELATEDTIERCEOPEN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGETSTATUS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateTarget(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_UPDATETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void AutoSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_AUTOSETTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* GetChallengeTargetDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETCHALLENGETARGETDATALIST_OFFSET))(this);
		}

		::System::Boolean HasRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasTargetRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean HasTargetRewardNotFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_HASTARGETREWARDNOTFINISH_OFFSET))(this);
		}

		::System::Boolean IsPreMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISPREMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean GetIsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETISOPEN_OFFSET))(this);
		}

		::RPG::Client::ChallengeData_ChallengeOpenResult GetOpenResult()
		{
			return ((::RPG::Client::ChallengeData_ChallengeOpenResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETOPENRESULT_OFFSET))(this);
		}

		::System::UInt32 GetBattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTID_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventRow* GetBattleEventRow()
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETBATTLEEVENTROW_OFFSET))(this);
		}

		::System::Int32 GetVoracityInvasionLevel(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETVORACITYINVASIONLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERDATABYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetEventCountByStageIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETEVENTCOUNTBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* GetMonsterWeakListByStageIndex(::System::Int32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETMONSTERWEAKLISTBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllMonsterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETALLMONSTERIDS_OFFSET))(this);
		}

		::System::Void SyncArchiveExtInfo(::ALIOECIFDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIOECIFDKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, a1);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::IPALENCIHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPALENCIHFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, a1);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChallengeRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::ChallengeRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetExtraMonsterIDByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEXTRAMONSTERIDBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetEventIDListByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETEVENTIDLISTBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMonsterLevelByEventID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERLEVELBYEVENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetMonsterIDByEventID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__GETMONSTERIDBYEVENTID_OFFSET))(this, a1);
		}

		::System::Boolean _IsReachPlayerLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISREACHPLAYERLEVEL_OFFSET))(this);
		}

		::System::Boolean _IsAutoSettleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISAUTOSETTLEUNLOCK_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISFINISHPRECHALLENGE_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA__ISFINISHPREMISSION_OFFSET))(this);
		}

	};
}
