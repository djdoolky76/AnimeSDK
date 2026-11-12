#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
class CDABDPPPHBN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET UNITYSDK_OFFSET(0xD970090)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET UNITYSDK_OFFSET(0xD96DDA0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET UNITYSDK_OFFSET(0xD970170)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xD96BB90)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET UNITYSDK_OFFSET(0xD96DBE0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET UNITYSDK_OFFSET(0xD96FF00)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET UNITYSDK_OFFSET(0xD96FDD0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0xD96F7B0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD96F3D0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET UNITYSDK_OFFSET(0xD96FA30)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET UNITYSDK_OFFSET(0xD970210)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET UNITYSDK_OFFSET(0xD96E7E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xD96FC40)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xD96F0B0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0xD96B220)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xD96D460)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET UNITYSDK_OFFSET(0xD96FCF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET UNITYSDK_OFFSET(0xD96FE90)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xD96F850)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xD970030)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xD96B6F0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xD96F760)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xD96F4E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xD96DA70)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xD96F8E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xD96EF60)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET UNITYSDK_OFFSET(0xD96FAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityUtils_TypeDefinitionIndex = 65616;

	class FightActivityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>* GetInScheduleFightGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::CDABDPPPHBN*>* GetNewReddotGroups()
		{
			return ((::System::Collections::Generic::List_1<::CDABDPPPHBN*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDsByStageID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET))(a1);
		}

		static ::RPG::Client::ScheduleData* GetFightGroupScheduleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsInFightActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET))();
		}

		static ::System::Boolean IsInFightActivityEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean IsExtraRewardAvail()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET))();
		}

		static ::RPG::Client::QuestData* GetExtraRewardQuestData()
		{
			return ((::RPG::Client::QuestData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET))();
		}

		static ::System::UInt32 get_ExtraRewardQuestID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPrepareSubmissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET))();
		}

		static ::System::Boolean IsPremissionFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET))();
		}

		static ::System::Boolean IsMessageSubmissionFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET))();
		}

		static ::System::UInt32 GetGoToMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsPremissionTook()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET))();
		}

		static ::System::UInt32 GetMessageGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarDataByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentBattleRoundLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET))();
		}

		static ::System::UInt32 GetEndlessWinWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET))();
		}

		static ::System::UInt32 GetUniqueReddotIDByGroupID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetEndlessWaveOffset(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardWaves(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardQuest(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET))(a1);
		}

		static ::System::Boolean HasEndlessQuestReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET))(a1);
		}

		static ::System::Boolean HasEndlessAvailExtraReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET))(a1, a2);
		}

		static ::System::Boolean EndlessExtraRewardAllReceive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET))(a1);
		}

		static ::System::UInt32 GetEndlessBoostWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET))();
		}

		static ::System::Single GetInfoTipsTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET))();
		}

	};
}
