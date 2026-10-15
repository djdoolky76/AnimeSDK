#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_CSHARPCALLLUAATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2D40)

namespace XLua
{
	class CSharpCallLuaAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSHARPCALLLUAATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
