#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_REPLACELITERALSWITHNAMEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xB570050)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int ReplaceLiteralsWithNameAttribute_TypeDefinitionIndex = 48065;

	class ReplaceLiteralsWithNameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_REPLACELITERALSWITHNAMEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
