#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
namespace RPG::Client { class TimeManager; }
namespace System { class String; }

#define RPG_CLIENT_TIMEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D261F30)
#define RPG_CLIENT_TIMEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D261F20)
#define RPG_CLIENT_TIMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D261EB0)
#define RPG_CLIENT_TIMEMANAGER_GETNEXTDAILYUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1D261850)
#define RPG_CLIENT_TIMEMANAGER_GETNEXTMONDAYDAILYUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1D261AD0)
#define RPG_CLIENT_TIMEMANAGER_GET_DAYTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D261C60)
#define RPG_CLIENT_TIMEMANAGER_GET_GAMELAUNCHTIME_OFFSET UNITYSDK_OFFSET(0x1D261C70)
#define RPG_CLIENT_TIMEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D261EF0)
#define RPG_CLIENT_TIMEMANAGER_GET_NEXTDAILYUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1D2617B0)
#define RPG_CLIENT_TIMEMANAGER_GET_NOWDATETIME_OFFSET UNITYSDK_OFFSET(0x1D2612B0)
#define RPG_CLIENT_TIMEMANAGER_GET_NOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D261680)
#define RPG_CLIENT_TIMEMANAGER_GET_NOWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D261750)
#define RPG_CLIENT_TIMEMANAGER_GET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1D261C50)
#define RPG_CLIENT_TIMEMANAGER_HASTIMESTAMPREACHED_OFFSET UNITYSDK_OFFSET(0x1D261620)
#define RPG_CLIENT_TIMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1D261D80)
#define RPG_CLIENT_TIMEMANAGER_ISINSAMEDAILYUPDATEPERIOD_OFFSET UNITYSDK_OFFSET(0x1D261320)
#define RPG_CLIENT_TIMEMANAGER_SETDAYTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D260F30)
#define RPG_CLIENT_TIMEMANAGER_SETRTT_OFFSET UNITYSDK_OFFSET(0x1D260CE0)
#define RPG_CLIENT_TIMEMANAGER_SETSERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1D260E50)
#define RPG_CLIENT_TIMEMANAGER_SETSERVERTIME_OFFSET UNITYSDK_OFFSET(0x1D260C70)
#define RPG_CLIENT_TIMEMANAGER_SET_GAMELAUNCHTIME_OFFSET UNITYSDK_OFFSET(0x1D261CA0)
#define RPG_CLIENT_TIMEMANAGER_TIMESTAMPCROSSDAILYUPDATE_OFFSET UNITYSDK_OFFSET(0x1D260F80)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeManager_TypeDefinitionIndex = 70256;

	class TimeManager : public ::System::Object
	{
	public:
		::System::UInt64 _ServerTimeStampMs; // 0x10
		::System::Double _ReceiveTimeMillseconds; // 0x18
		::System::Int32 _DayTimeOffset; // 0x20
		::System::Single _ServerTimeZone; // 0x24
		static ::System::String** StaticGet__GameLaunchTime()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TimeManager")->GetStaticField(0x20900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_CCTOR_OFFSET))();
		}

		::System::Void SetServerTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETSERVERTIME_OFFSET))(this, a1);
		}

		::System::Void SetRTT(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETRTT_OFFSET))(this, a1);
		}

		::System::Void SetServerTimeZone(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETSERVERTIMEZONE_OFFSET))(this, a1);
		}

		::System::Void SetDayTimeOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETDAYTIMEOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean TimeStampCrossDailyUpdate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_TIMESTAMPCROSSDAILYUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean IsInSameDailyUpdatePeriod(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_ISINSAMEDAILYUPDATEPERIOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasTimeStampReached(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_HASTIMESTAMPREACHED_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_NowDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NOWDATETIME_OFFSET))(this);
		}

		::System::UInt32 get_NowTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NOWTIMESTAMP_OFFSET))(this);
		}

		::System::UInt64 get_NowMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NOWMSTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_NextDailyUpdateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NEXTDAILYUPDATETIME_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetNextDailyUpdateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GETNEXTDAILYUPDATETIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro GetNextMondayDailyUpdateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GETNEXTMONDAYDAILYUPDATETIME_OFFSET))(this, a1);
		}

		::System::Single get_ServerTimeZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_SERVERTIMEZONE_OFFSET))(this);
		}

		::System::Int32 get_DayTimeOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_DAYTIMEOFFSET_OFFSET))(this);
		}

		::System::String* get_GameLaunchTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_GAMELAUNCHTIME_OFFSET))(this);
		}

		::System::Void set_GameLaunchTime(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SET_GAMELAUNCHTIME_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::TimeManager* get_Instance()
		{
			return ((::RPG::Client::TimeManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_INSTANCE_OFFSET))();
		}

	};
}
