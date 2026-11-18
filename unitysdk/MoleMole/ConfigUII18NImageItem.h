#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUII18NIMAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x180CAA70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUII18NImageItem_TypeDefinitionIndex = 74448;

	class ConfigUII18NImageItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUII18NIMAGEITEM__CTOR_OFFSET))(this);
		}
	};
}
