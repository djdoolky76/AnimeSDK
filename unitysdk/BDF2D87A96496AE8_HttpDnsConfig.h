#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BDF2D87A96496AE8_HTTPDNSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x2A0AF20)

inline static constexpr unsigned int BDF2D87A96496AE8_HttpDnsConfig_TypeDefinitionIndex = 15886;

class BDF2D87A96496AE8_HttpDnsConfig : public ::System::Object
{
public:
	::System::Boolean httpdns_enable; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 httpdns_cache_expire_time; // 0x14
	::System::String* httpdns_env; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDF2D87A96496AE8_HTTPDNSCONFIG__CTOR_OFFSET))(this);
	}
};
