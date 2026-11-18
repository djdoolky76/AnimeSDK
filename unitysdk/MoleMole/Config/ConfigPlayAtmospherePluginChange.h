#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPLAYATMOSPHEREPLUGINCHANGE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A767DB0)
#define MOLEMOLE_CONFIG_CONFIGPLAYATMOSPHEREPLUGINCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A767E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayAtmospherePluginChange_TypeDefinitionIndex = 69691;

	class ConfigPlayAtmospherePluginChange : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYATMOSPHEREPLUGINCHANGE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYATMOSPHEREPLUGINCHANGE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
