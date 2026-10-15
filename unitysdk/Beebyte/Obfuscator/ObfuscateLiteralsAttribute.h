#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_OBFUSCATELITERALSATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF0F010)

namespace Beebyte::Obfuscator
{
	class ObfuscateLiteralsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_OBFUSCATELITERALSATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
