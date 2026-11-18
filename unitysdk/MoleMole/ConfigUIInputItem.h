#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIINPUTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x180CAA90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIInputItem_TypeDefinitionIndex = 59475;

	class ConfigUIInputItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIINPUTITEM__CTOR_OFFSET))(this);
		}
	};
}
