#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_CHAR_CTOR_OFFSET UNITYSDK_OFFSET(0x14CB4390)

namespace XLua::Cast
{
	inline static constexpr unsigned int Char_TypeDefinitionIndex = 50294;

	class Char
	{
	public:
		::System::Void _ctor(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_CAST_CHAR_CTOR_OFFSET))(this, a1);
		}

	};
}
