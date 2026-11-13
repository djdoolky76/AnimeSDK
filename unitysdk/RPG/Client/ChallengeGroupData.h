#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CKCJOCJGHKC;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceEntranceViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRewardViewModel; }
namespace RPG::GameCore { class ChallengeGeneralConfigRow; }
namespace RPG::GameCore { class ChallengeGroupConfigRow; }
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEGROUPDATA_ADDCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B703AB0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F7230)
#define RPG_CLIENT_CHALLENGEGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7049B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETAUTOSETTLEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1B6FEAA0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCHALLENGEINDEX_OFFSET UNITYSDK_OFFSET(0x1B703C60)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCOMPLETETARGETSTARSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B703370)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCUMULATIVEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x1B703FB0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETMAXFINISHLEVEL_OFFSET UNITYSDK_OFFSET(0x1B704630)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETNEXTCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1B703E40)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1B704700)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETTOTALTARGETSTARSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B704950)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B703510)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_CHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x1B6F48E0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B703140)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B703A10)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B703590)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1B703210)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0x1B703610)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0x1B703670)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B7030A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISEARLYACCESSAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B703990)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISSCHEDULECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B6F39E0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_LASTAUTOUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B7036D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1B7032D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1B703320)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B6FB110)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATAID_OFFSET UNITYSDK_OFFSET(0x1B703280)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1B6F3A40)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_THEMEPICPATH_OFFSET UNITYSDK_OFFSET(0x1B703940)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEENTRANCE_OFFSET UNITYSDK_OFFSET(0x1B703A70)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEID_OFFSET UNITYSDK_OFFSET(0x1B6F0680)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEREWARD_OFFSET UNITYSDK_OFFSET(0x1B703A90)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCE_OFFSET UNITYSDK_OFFSET(0x1B703A60)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TOTALSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B703190)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B6EA200)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x1B7009A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASSTARREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x1B700460)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B7008E0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDREACHED_OFFSET UNITYSDK_OFFSET(0x1B7041F0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1B704270)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISFIRSTCHALLENGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B704430)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B7003B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAGS_OFFSET UNITYSDK_OFFSET(0x1B704860)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x1B7048D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_LASTAUTOUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B7037D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEENTRANCE_OFFSET UNITYSDK_OFFSET(0x1B703A80)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEREWARD_OFFSET UNITYSDK_OFFSET(0x1B703AA0)
#define RPG_CLIENT_CHALLENGEGROUPDATA__CHECKCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x1B703D10)
#define RPG_CLIENT_CHALLENGEGROUPDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0x1B7042C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeGroupData_TypeDefinitionIndex = 64526;

	class ChallengeGroupData : public ::System::Object
	{
	public:
		::CKCJOCJGHKC* _Tierce_k__BackingField; // 0x10
		::RPG::GameCore::ChallengeGroupConfigRow* Row; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* _ChallengeDatas; // 0x20
		::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* _TierceReward_k__BackingField; // 0x28
		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* _TierceEntrance_k__BackingField; // 0x30
		::RPG::GameCore::ChallengeGeneralConfigRow* _GeneralConfigRow; // 0x38
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x40
		::System::UInt32 ID; // 0x48
		::System::Byte _padding0[0x4];
		::System::UInt64 _TakenRewardBits; // 0x50
		// static const ::System::Object MAX_CHALLENGE_STAR; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsScheduleChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISSCHEDULECHALLENGE_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_GROUPNAME_OFFSET))(this);
		}

		::System::UInt32 get_PreMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_PREMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_ScheduleDataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATAID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* get_ChallengeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_CHALLENGEDATAS_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_Type()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_TotalStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TOTALSTARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_CURRENTSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_HasObtainedBadge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASOBTAINEDBADGE_OFFSET))(this);
		}

		::System::Boolean get_HasTakenSpecialReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASTAKENSPECIALREWARD_OFFSET))(this);
		}

		::System::UInt32 get_LastAutoUnlockProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_LASTAUTOUNLOCKPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastAutoUnlockProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_LASTAUTOUNLOCKPROGRESS_OFFSET))(this, a1);
		}

		::System::String* get_ThemePicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_THEMEPICPATH_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISEARLYACCESSAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_TierceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEID_OFFSET))(this);
		}

		::CKCJOCJGHKC* get_Tierce()
		{
			return ((::CKCJOCJGHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCE_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* get_TierceEntrance()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEENTRANCE_OFFSET))(this);
		}

		::System::Void set_TierceEntrance(::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEENTRANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* get_TierceReward()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEREWARD_OFFSET))(this);
		}

		::System::Void set_TierceReward(::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEREWARD_OFFSET))(this, a1);
		}

		::System::Boolean AddChallenge(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ADDCHALLENGE_OFFSET))(this, a1);
		}

		::System::Int32 GetChallengeIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCHALLENGEINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeData* GetNextChallengeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETNEXTCHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasStarRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_HASSTARREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsFirstChallengeUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISFIRSTCHALLENGEUNLOCK_OFFSET))(this);
		}

		::System::UInt32 GetMaxFinishLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETMAXFINISHLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetShowMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETSHOWMAXLEVEL_OFFSET))(this);
		}

		::System::Int32 GetAutoSettleMaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETAUTOSETTLEMAXLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChallengeMazeRewardLineRow*>* GetCumulativeRewardInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChallengeMazeRewardLineRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCUMULATIVEREWARDINFOS_OFFSET))(this);
		}

		::System::Void SetTakenRewardFlags(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAGS_OFFSET))(this, a1);
		}

		::System::Void SetTakenRewardFlag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAG_OFFSET))(this, a1);
		}

		::System::Boolean IsCumulativeRewardReached(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDREACHED_OFFSET))(this, a1);
		}

		::System::Boolean IsCumulativeRewardTaken(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::UInt32 GetCompleteTargetStarsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCOMPLETETARGETSTARSCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetTotalTargetStarsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETTOTALTARGETSTARSCOUNT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasChallengeFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEFINISH_OFFSET))(this);
		}

		::System::Void _CheckChallengeDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__CHECKCHALLENGEDATAS_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__ISFINISHPREMISSION_OFFSET))(this);
		}

	};
}
