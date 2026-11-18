#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DD830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineMap_CStringConfigZipLineEntry_TypeDefinitionIndex = 92529;

	class ConfigZipLineMap_CStringConfigZipLineEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEENTRY__CTOR_OFFSET))(this);
		}
	};
}
