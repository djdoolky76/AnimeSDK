#pragma once
#include "unitysdk/unitysdk.h"

#define XLUA_CAST_FLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x15B75D50)

namespace XLua::Cast
{
	inline static constexpr unsigned int Float_TypeDefinitionIndex = 51352;

	class Float
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_CAST_FLOAT_CTOR_OFFSET))(this, a1);
		}

	};
}
