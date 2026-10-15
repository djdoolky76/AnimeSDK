#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_BLACKLISTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2D30)

namespace XLua
{
	class BlackListAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_BLACKLISTATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
