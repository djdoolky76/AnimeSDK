#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIGAMESTARTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF5FE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIGameStartItem_TypeDefinitionIndex = 40715;

	class ConfigUIGameStartItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIGAMESTARTITEM__CTOR_OFFSET))(this);
		}
	};
}
