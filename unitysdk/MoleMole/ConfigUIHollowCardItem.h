#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIHOLLOWCARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x190C5FE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIHollowCardItem_TypeDefinitionIndex = 58933;

	class ConfigUIHollowCardItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIHOLLOWCARDITEM__CTOR_OFFSET))(this);
		}
	};
}
