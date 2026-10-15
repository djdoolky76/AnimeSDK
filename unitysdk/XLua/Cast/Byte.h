#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_BYTE_CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFD60)

namespace XLua::Cast
{
	class Byte
	{
	public:
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_CAST_BYTE_CTOR_OFFSET))(this, a1);
		}

	};
}
