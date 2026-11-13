#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_AUTOGENTAGATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20977940)

namespace XLua
{
	inline static constexpr unsigned int AutoGenTagAttribute_TypeDefinitionIndex = 5611;

	class AutoGenTagAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_AUTOGENTAGATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
