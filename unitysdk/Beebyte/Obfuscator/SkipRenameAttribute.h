#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_SKIPRENAMEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A676B60)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int SkipRenameAttribute_TypeDefinitionIndex = 48067;

	class SkipRenameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_SKIPRENAMEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
