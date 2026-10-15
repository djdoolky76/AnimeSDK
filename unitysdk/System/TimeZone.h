#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
namespace System { class Object; }
namespace System { class TimeZone; }

#define SYSTEM_TIMEZONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13BF50)
#define SYSTEM_TIMEZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C13BA90)
#define SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1C13BAA0)
#define SYSTEM_TIMEZONE_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1C13BC80)

namespace System
{
	inline static constexpr unsigned int TimeZone_TypeDefinitionIndex = 434;

	class TimeZone : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_tz_lock()
		{
			return (::System::Object**)UnitySDK::FromName("System", "TimeZone")->GetStaticField(0x2ABE0);
		}

		static ::System::TimeZone** StaticGet_currentTimeZone()
		{
			return (::System::TimeZone**)UnitySDK::FromName("System", "TimeZone")->GetStaticField(0x2ABE8);
		}

		static ::System::Int64* StaticGet_timezone_check()
		{
			return (::System::Int64*)UnitySDK::FromName("System", "TimeZone")->GetStaticField(0x8C40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_CCTOR_OFFSET))();
		}

		static ::System::TimeZone* get_CurrentTimeZone()
		{
			return ((::System::TimeZone*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET))();
		}

		::System::DateTime ToLocalTime(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_TOLOCALTIME_OFFSET))(this, a1);
		}

	};
}
