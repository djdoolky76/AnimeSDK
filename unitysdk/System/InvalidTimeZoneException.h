#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C2C690)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C2C6F0)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C2C740)

namespace System
{
	inline static constexpr unsigned int InvalidTimeZoneException_TypeDefinitionIndex = 11535;

	class InvalidTimeZoneException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
