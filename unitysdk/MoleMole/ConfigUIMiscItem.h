#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIMISCITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x180CAB50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMiscItem_TypeDefinitionIndex = 88316;

	class ConfigUIMiscItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMISCITEM__CTOR_OFFSET))(this);
		}
	};
}
