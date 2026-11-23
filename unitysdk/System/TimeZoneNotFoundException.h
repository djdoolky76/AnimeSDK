#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;

#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BBCE90)
#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3BBCE10)

namespace System
{
	inline static constexpr unsigned int TimeZoneNotFoundException_TypeDefinitionIndex = 11148;

	class TimeZoneNotFoundException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this);
		}
	};
}
