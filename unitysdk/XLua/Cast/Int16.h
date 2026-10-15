#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_INT16_CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFDC0)

namespace XLua::Cast
{
	class Int16
	{
	public:
		::System::Void _ctor(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_CAST_INT16_CTOR_OFFSET))(this, a1);
		}

	};
}
