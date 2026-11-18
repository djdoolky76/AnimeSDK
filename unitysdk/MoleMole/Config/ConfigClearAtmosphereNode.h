#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCLEARATMOSPHERENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1909A790)
#define MOLEMOLE_CONFIG_CONFIGCLEARATMOSPHERENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1909A850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigClearAtmosphereNode_TypeDefinitionIndex = 79624;

	class ConfigClearAtmosphereNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLEARATMOSPHERENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLEARATMOSPHERENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
