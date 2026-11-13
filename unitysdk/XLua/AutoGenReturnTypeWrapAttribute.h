#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_AUTOGENRETURNTYPEWRAPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20977930)

namespace XLua
{
	inline static constexpr unsigned int AutoGenReturnTypeWrapAttribute_TypeDefinitionIndex = 5608;

	class AutoGenReturnTypeWrapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_AUTOGENRETURNTYPEWRAPATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
