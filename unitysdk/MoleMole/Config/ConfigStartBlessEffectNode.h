#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGSTARTBLESSEFFECTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B92CAD0)
#define MOLEMOLE_CONFIG_CONFIGSTARTBLESSEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92CB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStartBlessEffectNode_TypeDefinitionIndex = 74969;

	class ConfigStartBlessEffectNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTARTBLESSEFFECTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTARTBLESSEFFECTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
