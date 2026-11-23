#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TA/EnvironmentSystem/ESTimeManager_A15B472E486E3BF0.h"
#include "unitysdk/TA/EnvironmentSystem/ESTimeManager_F4729B50BC507256.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ADD_ONENTERDAY_OFFSET UNITYSDK_OFFSET(0x28B5920)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ADD_ONENTERNIGHT_OFFSET UNITYSDK_OFFSET(0x28B59C0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_CURDAYTYPE_OFFSET UNITYSDK_OFFSET(0x1C068D0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x16A7BD0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x1C4F070)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_LASTTIMEOFDAY24_OFFSET UNITYSDK_OFFSET(0x20A5040)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x1919AE0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1C268F0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_TIMEOFDAY24OVERRIDEBYTIMELINE_OFFSET UNITYSDK_OFFSET(0x28B5A60)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_TIMEOFDAY24OVERRIDEBYVOLUME_OFFSET UNITYSDK_OFFSET(0x28B5A70)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_TIMEOFDAY24_OFFSET UNITYSDK_OFFSET(0x28B5A80)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_VOLUMEOVERRIDEDTIMEOFDAY24_OFFSET UNITYSDK_OFFSET(0x28B5B30)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_YEARS_OFFSET UNITYSDK_OFFSET(0x16A7BE0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x28B5180)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_INTERNALTICK_OFFSET UNITYSDK_OFFSET(0x28B51F0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ISDAYTIME_OFFSET UNITYSDK_OFFSET(0x28B5260)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ISDAY_OFFSET UNITYSDK_OFFSET(0x28B52E0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ISNIGHTTIME_OFFSET UNITYSDK_OFFSET(0x28B5330)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_REFRESHGAMETIME_OFFSET UNITYSDK_OFFSET(0x28B53B0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_REMOVE_ONENTERDAY_OFFSET UNITYSDK_OFFSET(0x28B5BD0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_REMOVE_ONENTERNIGHT_OFFSET UNITYSDK_OFFSET(0x28B5C70)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_LASTTIMEOFDAY24_OFFSET UNITYSDK_OFFSET(0x2328C80)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_TIMEOFDAY24OVERRIDEBYTIMELINE_OFFSET UNITYSDK_OFFSET(0x2623640)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_TIMEOFDAY24OVERRIDEBYVOLUME_OFFSET UNITYSDK_OFFSET(0x2623630)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_TIMEOFDAY24_OFFSET UNITYSDK_OFFSET(0x1F7B0F0)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x28B5750)
#define TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x28B58F0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESTimeManager_TypeDefinitionIndex = 16250;

	class ESTimeManager : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* OnTimeChaned; // 0x10
		::System::Action_1<::System::Int32>* OnHourPassed; // 0x18
		::System::Action* OnDayPassed; // 0x20
		::System::Action* OnYearPassed; // 0x28
		::System::Action* OnEnterDay; // 0x30
		::System::Action* OnEnterNight; // 0x38
		::TA::EnvironmentSystem::ESTimeManager_F4729B50BC507256 _curState; // 0x40
		::System::Int32 _seconds; // 0x44
		::System::Int32 _minutes; // 0x48
		::System::Int32 _hours; // 0x4C
		::System::Int32 _days; // 0x50
		::System::Int32 _years; // 0x54
		::System::Single _hourOfDayLengthInMinutes; // 0x58
		::System::Int32 lastHourUpdate; // 0x5C
		::TA::EnvironmentSystem::ESTimeManager_A15B472E486E3BF0 dayType; // 0x60
		::System::Single _timeOfDay24; // 0x64
		::System::Single _LastTimeOfDay24_k__BackingField; // 0x68
		::System::Nullable_1<::System::Single> _TimeOfDay24OverrideByVolume_k__BackingField; // 0x6C
		::System::Nullable_1<::System::Single> _TimeOfDay24OverrideByTimeline_k__BackingField; // 0x74
		::System::Boolean HasTimeChanged; // 0x7C
		::System::Boolean _initialized; // 0x7D
		::System::Byte _padding0[0x2];
		::System::Single _timeScale; // 0x80

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void set_TimeOfDay24OverrideByTimeline(::System::Nullable_1<::System::Single> E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_TIMEOFDAY24OVERRIDEBYTIMELINE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_TimeOfDay24(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_TIMEOFDAY24_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_VolumeOverridedTimeOfDay24()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_VOLUMEOVERRIDEDTIMEOFDAY24_OFFSET))(this);
		}

		::System::Int32 get_Days()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_DAYS_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_TICK_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_TimeOfDay24OverrideByVolume()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_TIMEOFDAY24OVERRIDEBYVOLUME_OFFSET))(this);
		}

		::System::Int32 get_Minutes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_MINUTES_OFFSET))(this);
		}

		::System::Void RefreshGameTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_REFRESHGAMETIME_OFFSET))(this);
		}

		::System::Single get_TimeOfDay24()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_TIMEOFDAY24_OFFSET))(this);
		}

		::TA::EnvironmentSystem::ESTimeManager_A15B472E486E3BF0 get_CurDayType()
		{
			return ((::TA::EnvironmentSystem::ESTimeManager_A15B472E486E3BF0(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_CURDAYTYPE_OFFSET))(this);
		}

		::System::Void set_LastTimeOfDay24(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_LASTTIMEOFDAY24_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void remove_OnEnterNight(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_REMOVE_ONENTERNIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Nullable_1<::System::Single> get_TimeOfDay24OverrideByTimeline()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_TIMEOFDAY24OVERRIDEBYTIMELINE_OFFSET))(this);
		}

		::System::Int32 get_Hours()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_HOURS_OFFSET))(this);
		}

		static ::System::Boolean IsNightTime(::System::Single FF0A37159A523E06)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ISNIGHTTIME_OFFSET))(FF0A37159A523E06);
		}

		::System::Void add_OnEnterNight(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ADD_ONENTERNIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void add_OnEnterDay(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ADD_ONENTERDAY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_LastTimeOfDay24()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_LASTTIMEOFDAY24_OFFSET))(this);
		}

		::System::Void remove_OnEnterDay(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_REMOVE_ONENTERDAY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ISDAY_OFFSET))(this);
		}

		::System::Int32 get_Seconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_SECONDS_OFFSET))(this);
		}

		::System::Int32 get_Years()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_GET_YEARS_OFFSET))(this);
		}

		static ::System::Boolean IsDayTime(::System::Single FF0A37159A523E06)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_ISDAYTIME_OFFSET))(FF0A37159A523E06);
		}

		::System::Single InternalTick()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_INTERNALTICK_OFFSET))(this);
		}

		::System::Void set_TimeOfDay24OverrideByVolume(::System::Nullable_1<::System::Single> E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESTIMEMANAGER_SET_TIMEOFDAY24OVERRIDEBYVOLUME_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
