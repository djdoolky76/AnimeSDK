#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_UINT64_CTOR_OFFSET UNITYSDK_OFFSET(0xE7BC5C0)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt64_TypeDefinitionIndex = 51351;

	class UInt64
	{
	public:
		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT64_CTOR_OFFSET))(this, a1);
		}

	};
}
