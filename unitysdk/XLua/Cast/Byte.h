#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_BYTE_CTOR_OFFSET UNITYSDK_OFFSET(0xE7BC4A0)

namespace XLua::Cast
{
	inline static constexpr unsigned int Byte_TypeDefinitionIndex = 51343;

	class Byte
	{
	public:
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_CAST_BYTE_CTOR_OFFSET))(this, a1);
		}

	};
}
