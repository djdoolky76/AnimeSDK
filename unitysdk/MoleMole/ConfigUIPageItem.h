#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIPAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B949F30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIPageItem_TypeDefinitionIndex = 79483;

	class ConfigUIPageItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIPAGEITEM__CTOR_OFFSET))(this);
		}
	};
}
