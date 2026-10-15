#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeZone.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Object; }
namespace System { class TimeZoneInfo; }

#define SYSTEM_CURRENTSYSTEMTIMEZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A62B0)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETTIMEZONEDATA_OFFSET UNITYSDK_OFFSET(0x1C1A6430)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x1C1A63B0)

namespace System
{
	inline static constexpr unsigned int CurrentSystemTimeZone_TypeDefinitionIndex = 435;

	class CurrentSystemTimeZone : public ::System::TimeZone
	{
	public:
		::System::TimeZoneInfo* LocalTimeZone; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_CTOR_OFFSET))(this);
		}

		::System::TimeSpan GetUtcOffset(::System::DateTime a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET))(this, a1);
		}

		static ::System::Boolean GetTimeZoneData(::System::Int32 a1, ::System::Object* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETTIMEZONEDATA_OFFSET))(a1, a2, a3, a4);
		}

	};
}
