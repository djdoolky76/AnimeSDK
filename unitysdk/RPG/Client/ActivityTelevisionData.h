#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityTelevisionData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityTelevisionLevelRow; }
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DCD5D80)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DCD5E40)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD6600)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0x1DCD5F50)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELSCORE_OFFSET UNITYSDK_OFFSET(0x1DCD5EB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1DCD6120)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DCD67A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x1DCD6920)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXBUFFLAYER_OFFSET UNITYSDK_OFFSET(0x1DCD67E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1DCD67C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x1DCD6940)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFMULLIST_OFFSET UNITYSDK_OFFSET(0x1DCD6890)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_PROGRESSMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DCD60D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x1DCD6820)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTROW_OFFSET UNITYSDK_OFFSET(0x1DCD6900)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1DCD68E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1DCD64F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1DCD6800)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DCD6870)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISDEATH_OFFSET UNITYSDK_OFFSET(0x1DCD63F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISPRELEVELFINISHED_OFFSET UNITYSDK_OFFSET(0x1DCD6290)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISREVEALED_OFFSET UNITYSDK_OFFSET(0x1DCD5FA0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1DCD5A40)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_NOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x1DCD5AB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1DCD67B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x1DCD6930)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXBUFFLAYER_OFFSET UNITYSDK_OFFSET(0x1DCD67F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1DCD67D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_QUESTROW_OFFSET UNITYSDK_OFFSET(0x1DCD6910)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1DCD68F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1DCD6810)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DCD6880)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1DCD5EF0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITLEVELINFO_OFFSET UNITYSDK_OFFSET(0x1DCD6730)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1DCD66A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionData_TypeDefinitionIndex = 63408;

	class ActivityTelevisionData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityTelevisionStageRow* _Row_k__BackingField; // 0x10
		::RPG::Client::ScheduleData* _ScheduleData; // 0x18
		::RPG::GameCore::ActivityTelevisionQuestRow* _QuestRow_k__BackingField; // 0x20
		::RPG::GameCore::ActivityTelevisionLevelRow* _LevelRow_k__BackingField; // 0x28
		::System::UInt32 _MaxBuffLayer_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::UInt32 _Season_k__BackingField; // 0x38
		::System::UInt32 _MaxLevel_k__BackingField; // 0x3C
		::System::UInt32 _Score_k__BackingField; // 0x40
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::RPG::GameCore::ActivityTelevisionStageRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ActivityTelevisionData* Create(::System::UInt32 a1, ::RPG::GameCore::ActivityTelevisionStageRow* a2)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::System::UInt32, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 GetLevelScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELSCORE_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ActivityTelevisionLevelRow* GetLevelRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELROW_OFFSET))(this, a1);
		}

		::System::Boolean IsRevealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISREVEALED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean IsPreLevelFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISPRELEVELFINISHED_OFFSET))(this);
		}

		::System::Boolean IsDeath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISDEATH_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean NotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_NOTCHALLENGED_OFFSET))(this);
		}

		::System::Void _InitStageInfo(::RPG::GameCore::ActivityTelevisionStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITSTAGEINFO_OFFSET))(this, a1);
		}

		::System::Void _InitLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITLEVELINFO_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBuffLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXBUFFLAYER_OFFSET))(this);
		}

		::System::Void set_MaxBuffLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXBUFFLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SCORE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_Season()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SEASON_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_PROGRESSMISSIONID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MazeBuffMulList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFMULLIST_OFFSET))(this);
		}

		::RPG::GameCore::ActivityTelevisionStageRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityTelevisionStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ActivityTelevisionStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityTelevisionQuestRow* get_QuestRow()
		{
			return ((::RPG::GameCore::ActivityTelevisionQuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTROW_OFFSET))(this);
		}

		::System::Void set_QuestRow(::RPG::GameCore::ActivityTelevisionQuestRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_QUESTROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityTelevisionLevelRow* get_LevelRow()
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_LEVELROW_OFFSET))(this);
		}

		::System::Void set_LevelRow(::RPG::GameCore::ActivityTelevisionLevelRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_LEVELROW_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

	};
}
