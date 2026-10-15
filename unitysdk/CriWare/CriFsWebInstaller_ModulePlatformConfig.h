#pragma once
#include "unitysdk/unitysdk.h"

#define CRIWARE_CRIFSWEBINSTALLER_MODULEPLATFORMCONFIG_GET_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x16719CE0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_ModulePlatformConfig_TypeDefinitionIndex = 40124;

	struct alignas(4) CriFsWebInstaller_ModulePlatformConfig
	{
		::System::Byte reserved; // 0x10
		/*
		static ::CriWare::CriFsWebInstaller_ModulePlatformConfig get_defaultConfig()
		{
			return ((::CriWare::CriFsWebInstaller_ModulePlatformConfig(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_MODULEPLATFORMCONFIG_GET_DEFAULTCONFIG_OFFSET))();
		}
		*/

	};
}
