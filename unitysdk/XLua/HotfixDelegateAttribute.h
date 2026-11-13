#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_HOTFIXDELEGATEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x209779C0)

namespace XLua
{
	inline static constexpr unsigned int HotfixDelegateAttribute_TypeDefinitionIndex = 5619;

	class HotfixDelegateAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_HOTFIXDELEGATEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
