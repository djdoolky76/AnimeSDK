#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_DONOTFAKEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF0F000)

namespace Beebyte::Obfuscator
{
	class DoNotFakeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_DONOTFAKEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
