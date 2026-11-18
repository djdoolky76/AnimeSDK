#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }

#define SYSTEM_FORMATTABLESTRING_SYSTEM_IFORMATTABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3900A0)
#define SYSTEM_FORMATTABLESTRING_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E3900D0)
#define SYSTEM_FORMATTABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E390100)

namespace System
{
	inline static constexpr unsigned int FormattableString_TypeDefinitionIndex = 144;

	class FormattableString : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING__CTOR_OFFSET))(this);
		}

		::System::String* System_IFormattable_ToString(::System::String* ignored, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_SYSTEM_IFORMATTABLE_TOSTRING_OFFSET))(this, ignored, formatProvider);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_TOSTRING_1_OFFSET))(this);
		}
	};
}
