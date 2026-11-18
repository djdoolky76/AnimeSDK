#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19251260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CFloatIntEntry_TypeDefinitionIndex = 54287;

	class ConfigZipLine_CFloatIntEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTENTRY__CTOR_OFFSET))(this);
		}
	};
}
