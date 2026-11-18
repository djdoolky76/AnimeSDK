#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19251280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CIntFloatEntry_TypeDefinitionIndex = 54270;

	class ConfigZipLine_CIntFloatEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATENTRY__CTOR_OFFSET))(this);
		}
	};
}
