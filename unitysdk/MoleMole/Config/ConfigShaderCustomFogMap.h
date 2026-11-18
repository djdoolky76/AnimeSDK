#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D7250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomFogMap_TypeDefinitionIndex = 41214;

	class ConfigShaderCustomFogMap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGMAP__CTOR_OFFSET))(this);
		}
	};
}
