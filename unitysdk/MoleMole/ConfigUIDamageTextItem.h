#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIDAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD15B40)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIDamageTextItem_TypeDefinitionIndex = 88389;

	class ConfigUIDamageTextItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIDAMAGETEXTITEM__CTOR_OFFSET))(this);
		}
	};
}
