#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA45A50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineMap_CStringConfigZipLineDic_TypeDefinitionIndex = 92530;

	class ConfigZipLineMap_CStringConfigZipLineDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINEMAP_CSTRINGCONFIGZIPLINEDIC__CTOR_OFFSET))(this);
		}
	};
}
