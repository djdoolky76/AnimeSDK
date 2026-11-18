#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12775DD0)
#define MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12775E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigModifyPlugin_TypeDefinitionIndex = 54703;

	class ConfigModifyPlugin : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
