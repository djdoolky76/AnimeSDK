#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UITEXTLINK_HREFCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF2EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITextLink_HrefClickEvent_TypeDefinitionIndex = 74692;

	class UITextLink_HrefClickEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_HREFCLICKEVENT__CTOR_OFFSET))(this);
		}
	};
}
