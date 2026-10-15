#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_ADDITIONALPROPERTIESATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B4840)

namespace XLua
{
	inline static constexpr unsigned int AdditionalPropertiesAttribute_TypeDefinitionIndex = 5611;

	class AdditionalPropertiesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_ADDITIONALPROPERTIESATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
