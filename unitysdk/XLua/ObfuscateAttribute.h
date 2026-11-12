#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_OBFUSCATEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6650A0)

namespace XLua
{
	inline static constexpr unsigned int ObfuscateAttribute_TypeDefinitionIndex = 5607;

	class ObfuscateAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBFUSCATEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
