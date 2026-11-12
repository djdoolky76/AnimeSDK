#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_CSHARPCALLLUAATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D665000)

namespace XLua
{
	inline static constexpr unsigned int CSharpCallLuaAttribute_TypeDefinitionIndex = 5605;

	class CSharpCallLuaAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSHARPCALLLUAATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
