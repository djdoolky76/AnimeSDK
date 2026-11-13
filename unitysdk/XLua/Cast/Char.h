#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_CHAR_CTOR_OFFSET UNITYSDK_OFFSET(0xE7BC4C0)

namespace XLua::Cast
{
	inline static constexpr unsigned int Char_TypeDefinitionIndex = 51345;

	class Char
	{
	public:
		::System::Void _ctor(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_CAST_CHAR_CTOR_OFFSET))(this, a1);
		}

	};
}
