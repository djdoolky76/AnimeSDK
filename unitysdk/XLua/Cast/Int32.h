#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_INT32_CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFDE0)

namespace XLua::Cast
{
	inline static constexpr unsigned int Int32_TypeDefinitionIndex = 50297;

	class Int32
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_CAST_INT32_CTOR_OFFSET))(this, a1);
		}

	};
}
