#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_CHAR_CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFD80)

namespace XLua::Cast
{
	class Char
	{
	public:
		::System::Void _ctor(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_CAST_CHAR_CTOR_OFFSET))(this, a1);
		}

	};
}
