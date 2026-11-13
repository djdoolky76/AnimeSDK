#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

#define MIHOYO_SDK_TIMEHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD31370)
#define MIHOYO_SDK_TIMEHELPER_CLIENTNOWSECONDS_OFFSET UNITYSDK_OFFSET(0x1DD31060)
#define MIHOYO_SDK_TIMEHELPER_CLIENTNOW_OFFSET UNITYSDK_OFFSET(0x1DD30FD0)
#define MIHOYO_SDK_TIMEHELPER_GETNOWTICK_OFFSET UNITYSDK_OFFSET(0x1DD31100)
#define MIHOYO_SDK_TIMEHELPER_MILLISECONDSTODATETIME_OFFSET UNITYSDK_OFFSET(0x1DD13CA0)
#define MIHOYO_SDK_TIMEHELPER_NOW_OFFSET UNITYSDK_OFFSET(0x1DD31280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TimeHelper_TypeDefinitionIndex = 47168;

	class TimeHelper : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_epoch()
		{
			return (::System::Int64*)UnitySDK::FromName("MiHoYo.SDK", "TimeHelper")->GetStaticField(0x8BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_CCTOR_OFFSET))();
		}

		static ::System::Int64 ClientNow()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_CLIENTNOW_OFFSET))();
		}

		static ::System::Int64 ClientNowSeconds()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_CLIENTNOWSECONDS_OFFSET))();
		}

		static ::System::UInt32 GetNowTick()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_GETNOWTICK_OFFSET))();
		}

		static ::System::Int64 Now()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_NOW_OFFSET))();
		}

		static ::System::DateTime MillisecondsToDateTime(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_MILLISECONDSTODATETIME_OFFSET))(a1);
		}

	};
}
