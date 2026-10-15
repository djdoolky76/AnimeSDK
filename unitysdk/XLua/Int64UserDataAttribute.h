#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_INT64USERDATAATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2DB0)

namespace XLua
{
	class Int64UserDataAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_INT64USERDATAATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
