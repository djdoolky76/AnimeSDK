#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_INT64USERDATAATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x209779D0)

namespace XLua
{
	inline static constexpr unsigned int Int64UserDataAttribute_TypeDefinitionIndex = 5609;

	class Int64UserDataAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_INT64USERDATAATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
