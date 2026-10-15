#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_SBYTE_CTOR_OFFSET UNITYSDK_OFFSET(0x14CB4430)

namespace XLua::Cast
{
	inline static constexpr unsigned int SByte_TypeDefinitionIndex = 50293;

	class SByte
	{
	public:
		::System::Void _ctor(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + XLUA_CAST_SBYTE_CTOR_OFFSET))(this, a1);
		}

	};
}
