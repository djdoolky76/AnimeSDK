#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_UINT32_CTOR_OFFSET UNITYSDK_OFFSET(0x14CB4470)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt32_TypeDefinitionIndex = 50298;

	class UInt32
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT32_CTOR_OFFSET))(this, a1);
		}

	};
}
