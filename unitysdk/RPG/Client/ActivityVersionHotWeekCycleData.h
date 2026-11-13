#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityVersionHotData.h"
namespace RPG::Client { class ActivityVersionHotWeekCycleData_VersionCycleTimeSchedule; }
namespace RPG::GameCore { class ActivityHotVersionStatRow; }

#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x18D12820)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D12D20)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x18D12C00)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D12DC0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18D12830)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_NOTBEGIN_OFFSET UNITYSDK_OFFSET(0x18D12AF0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET__CYCLETIME_READONLY_OFFSET UNITYSDK_OFFSET(0x18D129D0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET__NOWSTAMP_OFFSET UNITYSDK_OFFSET(0x18D12A30)
#define RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET__WEEKINDEX_OFFSET UNITYSDK_OFFSET(0x18D12E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityVersionHotWeekCycleData_TypeDefinitionIndex = 62931;

	class ActivityVersionHotWeekCycleData : public ::RPG::Client::ActivityVersionHotData
	{
	public:
		::RPG::Client::ActivityVersionHotWeekCycleData_VersionCycleTimeSchedule* _CycleTime; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivityHotVersionStatRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityHotVersionStatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_NotBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_NOTBEGIN_OFFSET))(this);
		}

		::System::Boolean get_Ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_ENDED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::ActivityVersionHotWeekCycleData_VersionCycleTimeSchedule* get__CycleTime_ReadOnly()
		{
			return ((::RPG::Client::ActivityVersionHotWeekCycleData_VersionCycleTimeSchedule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET__CYCLETIME_READONLY_OFFSET))(this);
		}

		::System::UInt32 get__NowStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET__NOWSTAMP_OFFSET))(this);
		}

		::System::UInt32 get__WeekIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTWEEKCYCLEDATA_GET__WEEKINDEX_OFFSET))(this);
		}

	};
}
