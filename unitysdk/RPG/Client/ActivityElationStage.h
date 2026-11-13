#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class ActivityElationStage; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityElationStageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISNEW_OFFSET UNITYSDK_OFFSET(0x1DBE6CB0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISUNLOCKANIMHASSEEN_OFFSET UNITYSDK_OFFSET(0x1DBE8A10)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1DBE7DE0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEA620)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GERSELECTABLEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x1DBE9710)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETMODIFIEDAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x1DBE92A0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1DBE9550)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1DBE94B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETSORTEDMONSTERS_OFFSET UNITYSDK_OFFSET(0x1DBE8FA0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x1DBE99B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1DBE95C0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1DBE8520)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_FINISHEDROUNDS_OFFSET UNITYSDK_OFFSET(0x1DBE5AD0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_GIFTBOXLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1DBE8690)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_HASHISTORY_OFFSET UNITYSDK_OFFSET(0x1DBE8610)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DBE62B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1DBE8420)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISFRESH_OFFSET UNITYSDK_OFFSET(0x1DBE89B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISPERFECTFINISHED_OFFSET UNITYSDK_OFFSET(0x1DBE8650)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISSPECIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1DBE8470)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DBE88A0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINDOWN_OFFSET UNITYSDK_OFFSET(0x1DBE83B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINUP_OFFSET UNITYSDK_OFFSET(0x1DBE8340)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCOUT_OFFSET UNITYSDK_OFFSET(0x1DBE82D0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MAXROUNDS_OFFSET UNITYSDK_OFFSET(0x1DBE5A80)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0x1DBE8570)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DBE8260)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NEWMODIFIEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1DBE84D0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1DBE8730)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_REMAININGROUNDS_OFFSET UNITYSDK_OFFSET(0x1DBE5B10)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TARGETLIST_OFFSET UNITYSDK_OFFSET(0x1DBE54E0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TUTORIALGUIDEGROUPID_OFFSET UNITYSDK_OFFSET(0x1DBE85C0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DBE8F30)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0x1DBE8B70)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKUNLOCKANIMHASSEEN_OFFSET UNITYSDK_OFFSET(0x1DBE8D50)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x1DBEA0B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_SETLEVELRESULT_OFFSET UNITYSDK_OFFSET(0x1DBE7EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationStage_TypeDefinitionIndex = 62896;

	class ActivityElationStage : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityElationStageRow* _Meta; // 0x10
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x18
		::System::UInt32 _FinishedRounds; // 0x20
		::System::Boolean _ExistingHistory; // 0x24
		::System::Boolean _IsPerfectFinished; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 _RemainingRounds; // 0x28
		::System::Void _ctor(::RPG::GameCore::ActivityElationStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityElationStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDescOut()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCOUT_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDescInUp()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINUP_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDescInDown()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINDOWN_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISSPECIALLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_NewModifiedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NEWMODIFIEDAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_EVENTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MONSTERLIST_OFFSET))(this);
		}

		::System::UInt32 get_MaxRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MAXROUNDS_OFFSET))(this);
		}

		::System::UInt32 get_TutorialGuideGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TUTORIALGUIDEGROUPID_OFFSET))(this);
		}

		::System::Boolean get_HasHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_HASHISTORY_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISPERFECTFINISHED_OFFSET))(this);
		}

		::System::UInt32 get_RemainingRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_REMAININGROUNDS_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_FINISHEDROUNDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GiftBoxLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_GIFTBOXLEVELLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TARGETLIST_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_RANK_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsFresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISFRESH_OFFSET))(this);
		}

		::System::Boolean CheckIsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISNEW_OFFSET))(this);
		}

		::System::Boolean CheckIsUnlockAnimHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISUNLOCKANIMHASSEEN_OFFSET))(this);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKHASSEEN_OFFSET))(this);
		}

		::System::Void MarkUnlockAnimHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKUNLOCKANIMHASSEEN_OFFSET))(this);
		}

		::System::Void SetLevelResult(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_SETLEVELRESULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsTargetComplete(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_ISTARGETCOMPLETE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetSortedMonsters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETSORTEDMONSTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* GetModifiedAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETMODIFIEDAVATARDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetNewModifiedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARID_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* GetNewModifiedAvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GerSelectableAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GERSELECTABLEAVATARDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTEAMSAVE_OFFSET))(this);
		}

		::System::Void SaveTeam(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_SAVETEAM_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityElationStage* Create(::RPG::GameCore::ActivityElationStageRow* a1)
		{
			return ((::RPG::Client::ActivityElationStage*(*)(::RPG::GameCore::ActivityElationStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CREATE_OFFSET))(a1);
		}

	};
}
