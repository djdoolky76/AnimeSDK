#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_INT64_CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFE00)

namespace XLua::Cast
{
	inline static constexpr unsigned int Int64_TypeDefinitionIndex = 50299;

	class Int64
	{
	public:
		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_CAST_INT64_CTOR_OFFSET))(this, a1);
		}

	};
}
