#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class SilverWolfExploreData; }
namespace RPG::Client { class SilverWolfRaidData; }
namespace RPG::Client { class SilverWolfShootData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class SilverWolfTabGroupRow; }
namespace System { class String; }

#define RPG_CLIENT_SILVERWOLFGROUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB2E980)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0xEB2F010)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_HASREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xEB2F580)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPCLOSE_OFFSET UNITYSDK_OFFSET(0xEB2F230)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPFINISH_OFFSET UNITYSDK_OFFSET(0xEB2F1A0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xEB2F2C0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPSTART_OFFSET UNITYSDK_OFFSET(0xEB2F0D0)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xEB2EF30)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xEB2F060)
#define RPG_CLIENT_SILVERWOLFGROUPDATA_GET_UNFINISHMISSION_OFFSET UNITYSDK_OFFSET(0xEB2F320)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfGroupData_TypeDefinitionIndex = 69903;

	class SilverWolfGroupData : public ::System::Object
	{
	public:
		::RPG::Client::SilverWolfExploreData* ExploreData; // 0x10
		::RPG::Client::SilverWolfRaidData* RaidData; // 0x18
		::RPG::Client::SilverWolfShootData* ShootData; // 0x20
		::RPG::GameCore::SilverWolfTabGroupRow* GroupRow; // 0x28
		::System::UInt32 GroupId; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_Conditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_CONDITIONS_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_SORTID_OFFSET))(this);
		}

		::System::Boolean get_IsGroupFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsGroupClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPCLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsGroupStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPSTART_OFFSET))(this);
		}

		::System::Boolean get_IsGroupInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_ISGROUPINSCHEDULE_OFFSET))(this);
		}

		::System::String* get_UnfinishMission()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_UNFINISHMISSION_OFFSET))(this);
		}

		::System::Boolean get_HasRewardAvail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFGROUPDATA_GET_HASREWARDAVAIL_OFFSET))(this);
		}

	};
}
