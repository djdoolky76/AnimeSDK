#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildStageStatus.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CNCHEGIMEJM;
class KFGPEAIMBJK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildStage; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class EvolveBuildStageRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB577C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x1DB5FDF0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0x1DB602A0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET UNITYSDK_OFFSET(0x1DB60870)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x1DB61450)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1DB5FC30)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DB5F650)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET UNITYSDK_OFFSET(0x1DB5F840)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1DB5F960)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET UNITYSDK_OFFSET(0x1DB5FA00)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0x1DB609E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET UNITYSDK_OFFSET(0x1DB5A8E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x1DB609A0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DB4F820)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET UNITYSDK_OFFSET(0x1DB5F580)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x1DB60A20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1DB54760)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET UNITYSDK_OFFSET(0x1DB5F460)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB5D390)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x1DB5FC10)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET UNITYSDK_OFFSET(0x1DB60990)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET UNITYSDK_OFFSET(0x1DB5F9B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET UNITYSDK_OFFSET(0x1DB5FA50)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB4F1E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0x1DB60F60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1DB60A00)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0x1DB609C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1DB415C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0x1DB546C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1DB5A740)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB5F7A0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x1DB5F7F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1DB5F8B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET UNITYSDK_OFFSET(0x1DB5F730)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET UNITYSDK_OFFSET(0x1DB5F6C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1DB5F600)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x1DB4F4C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET UNITYSDK_OFFSET(0x1DB4F510)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1DB4F6B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x1DB5E000)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0x1DB609F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x1DB609B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x1DB60B80)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x1DB5FC20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0x1DB61200)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1DB60A10)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0x1DB609D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DB60E80)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage_TypeDefinitionIndex = 65250;

	class EvolveBuildStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KFGPEAIMBJK*>* _SortedRanks; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _Periods_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildStageRow* _Row; // 0x20
		::RPG::Client::EvolveBuildCollectionGear* _SelectedWeapon; // 0x28
		::RPG::Client::EvolveBuildStage* _NextStage_k__BackingField; // 0x30
		::System::UInt32 _HighScore_k__BackingField; // 0x38
		::System::Boolean _ShowNewRecordMark_k__BackingField; // 0x3C
		::System::Boolean _HasNoRandomBonus_k__BackingField; // 0x3D
		::System::Boolean _ShouldPlayUnlockAnim_k__BackingField; // 0x3E
		::System::Void _ctor(::RPG::GameCore::EvolveBuildStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_LockToastParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET))(this);
		}

		::System::UInt32 get_InitialWeaponID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBonusShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBonusNumFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET))(this);
		}

		::System::String* get_TeamBonusIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_TeamBonusMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DevilDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_TeamBonusMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET))(this);
		}

		::System::Int32 get_Difficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsWeaponSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET))(this);
		}

		::Il2CppArray<::CNCHEGIMEJM*>* get_SkillRecommendations()
		{
			return ((::Il2CppArray<::CNCHEGIMEJM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendGearIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FirstWinQuest()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>* get_RecommendGears()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildStage* get_NextStage()
		{
			return ((::RPG::Client::EvolveBuildStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET))(this);
		}

		::System::Void set_NextStage(::RPG::Client::EvolveBuildStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRandomPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetMonsterIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET))(this);
		}

		::System::String* GetRankName(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET))(this, a1);
		}

		::System::Void SetNextStage(::RPG::Client::EvolveBuildStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsFirstQuestFinishedOrClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Periods()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET))(this);
		}

		::System::UInt32 get_HighScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET))(this);
		}

		::System::Void set_HighScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowNewRecordMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET))(this);
		}

		::System::Void set_ShowNewRecordMark(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET))(this, a1);
		}

		::System::Boolean get_HasNoRandomBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET))(this);
		}

		::System::Void set_HasNoRandomBonus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildStageStatus get_Status()
		{
			return ((::RPG::Client::EvolveBuildStageStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGear* get_SelectedWeapon()
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET))(this);
		}

		::System::Void set_SelectedWeapon(::RPG::Client::EvolveBuildCollectionGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET))(this);
		}

	};
}
