#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_BLACKLISTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20977950)

namespace XLua
{
	inline static constexpr unsigned int BlackListAttribute_TypeDefinitionIndex = 5606;

	class BlackListAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_BLACKLISTATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
