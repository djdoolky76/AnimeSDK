#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StarFightSeason.h"
#include "unitysdk/System/Object.h"
class JFGCABMMKAB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class StarFightLevelData; }
namespace RPG::GameCore { class ActivityStarFightGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTGROUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD3B50)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0xEBD4560)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xEBD4610)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_ELEMENTLIST_OFFSET UNITYSDK_OFFSET(0xEBD4B30)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_EVALUATEWAVE_OFFSET UNITYSDK_OFFSET(0xEBD4B80)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0xEBD4880)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPICON_OFFSET UNITYSDK_OFFSET(0xEBD48F0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xEBD4990)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0xEBD4810)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xEBD4B10)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0xEBD4AF0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXWAVE_OFFSET UNITYSDK_OFFSET(0xEBD4AD0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xEBD4AB0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISPERFECTPASS_OFFSET UNITYSDK_OFFSET(0xEBD4E90)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xEBD4C20)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xEBD4E40)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_PERFECTWAVE_OFFSET UNITYSDK_OFFSET(0xEBD4940)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0xEBD4F50)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xEBD49D0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xEBD4BD0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_GET_TRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xEBD47C0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xEBD4B20)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0xEBD4B00)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXWAVE_OFFSET UNITYSDK_OFFSET(0xEBD4AE0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xEBD4AC0)
#define RPG_CLIENT_STARFIGHTGROUPDATA_SYNCGROUPINFO_OFFSET UNITYSDK_OFFSET(0xEBD4350)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightGroupData_TypeDefinitionIndex = 69927;

	class StarFightGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityStarFightGroupRow* _GroupRow; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* _RankTextIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::StarFightLevelData*>* _LevelData; // 0x20
		::System::Int32 _HistoryMaxPassDifficulty_k__BackingField; // 0x28
		::System::UInt32 _HardMaxWave_k__BackingField; // 0x2C
		::System::Boolean WaveNewRecord; // 0x30
		::System::Boolean PerfectNewRecord; // 0x31
		::System::Boolean _HardChallenged_k__BackingField; // 0x32
		::System::Byte _padding0[0x1];
		::System::UInt32 _GroupID; // 0x34
		::System::UInt32 _HardMaxLeftTurn_k__BackingField; // 0x38
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncGroupInfo(::JFGCABMMKAB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JFGCABMMKAB*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SYNCGROUPINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StarFightLevelData* GetLevelData(::System::UInt32 a1)
		{
			return ((::RPG::Client::StarFightLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GETLEVELDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPDESC_OFFSET))(this);
		}

		::System::String* get_GroupIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPICON_OFFSET))(this);
		}

		::System::UInt32 get_PerfectWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_PERFECTWAVE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Int32 get_HistoryMaxPassDifficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this);
		}

		::System::Void set_HistoryMaxPassDifficulty(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this, a1);
		}

		::System::UInt32 get_HardMaxWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXWAVE_OFFSET))(this);
		}

		::System::Void set_HardMaxWave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXWAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_HardMaxLeftTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDMAXLEFTTURN_OFFSET))(this);
		}

		::System::Void set_HardMaxLeftTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDMAXLEFTTURN_OFFSET))(this, a1);
		}

		::System::Boolean get_HardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_HARDCHALLENGED_OFFSET))(this);
		}

		::System::Void set_HardChallenged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_SET_HARDCHALLENGED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatar()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_TRIALAVATAR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_ElementList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_ELEMENTLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EvaluateWave()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_EVALUATEWAVE_OFFSET))(this);
		}

		::RPG::GameCore::StarFightSeason get_Season()
		{
			return ((::RPG::GameCore::StarFightSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_ISPERFECTPASS_OFFSET))(this);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTGROUPDATA_GET_RANKLEVEL_OFFSET))(this);
		}

	};
}
