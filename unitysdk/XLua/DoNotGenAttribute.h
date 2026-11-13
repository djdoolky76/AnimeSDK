#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_DONOTGENATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20977970)

namespace XLua
{
	inline static constexpr unsigned int DoNotGenAttribute_TypeDefinitionIndex = 5615;

	class DoNotGenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DONOTGENATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
