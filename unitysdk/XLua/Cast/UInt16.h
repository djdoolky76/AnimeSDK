#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_UINT16_CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFE40)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt16_TypeDefinitionIndex = 50296;

	class UInt16
	{
	public:
		::System::Void _ctor(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT16_CTOR_OFFSET))(this, a1);
		}

	};
}
