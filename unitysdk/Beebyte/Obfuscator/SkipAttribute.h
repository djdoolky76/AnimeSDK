#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_SKIPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A676B50)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int SkipAttribute_TypeDefinitionIndex = 48066;

	class SkipAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_SKIPATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
