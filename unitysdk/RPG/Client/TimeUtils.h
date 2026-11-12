#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DateTimePro.h"

#define RPG_CLIENT_TIMEUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEFC7C0)
#define RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1FEFC330)
#define RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1FEFC3D0)
#define RPG_CLIENT_TIMEUTILS_GET_NETRTTMSTIME_OFFSET UNITYSDK_OFFSET(0x1FEFC4E0)
#define RPG_CLIENT_TIMEUTILS_GET_NETSIGNALSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1FEFC560)
#define RPG_CLIENT_TIMEUTILS_GET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1FEFC710)
#define RPG_CLIENT_TIMEUTILS_SET_NETRTTMSTIME_OFFSET UNITYSDK_OFFSET(0x1FEFC520)
#define RPG_CLIENT_TIMEUTILS_SET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1FEFC750)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1FEFC650)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1FEFC6B0)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_OFFSET UNITYSDK_OFFSET(0x1FEFC5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeUtils_TypeDefinitionIndex = 36255;

	class TimeUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__ServerTimeZone()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "TimeUtils")->GetStaticField(0x4420);
		}

		static ::System::Single* StaticGet__NetRttMsTime_k__BackingField()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "TimeUtils")->GetStaticField(0x4424);
		}

		static ::System::DateTime* StaticGet_StartConstTime()
		{
			return (::System::DateTime*)UnitySDK::FromName("RPG.Client", "TimeUtils")->GetStaticField(0x4428);
		}

		static ::System::Boolean* StaticGet__ServerTimeZoneSynced()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TimeUtils")->GetStaticField(0x4430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_CCTOR_OFFSET))();
		}

		static ::System::UInt64 get_ClientNowMsTimeStamp()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWMSTIMESTAMP_OFFSET))();
		}

		static ::System::UInt32 get_ClientNowTimeStamp()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWTIMESTAMP_OFFSET))();
		}

		static ::System::Single get_NetRttMsTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_NETRTTMSTIME_OFFSET))();
		}

		static ::System::Void set_NetRttMsTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_SET_NETRTTMSTIME_OFFSET))(a1);
		}

		static ::System::Single get_NetSignalStrength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_NETSIGNALSTRENGTH_OFFSET))();
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime(::System::UInt32 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime_1(::System::Int64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_1_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime_2(::System::UInt64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_2_OFFSET))(a1);
		}

		static ::System::Single get_ServerTimeZone()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_SERVERTIMEZONE_OFFSET))();
		}

		static ::System::Void set_ServerTimeZone(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_SET_SERVERTIMEZONE_OFFSET))(a1);
		}

	};
}
