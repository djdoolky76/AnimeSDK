#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGSETSECTION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B92A080)
#define MOLEMOLE_CONFIG_CONFIGSETSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92A140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetSection_TypeDefinitionIndex = 53980;

	class ConfigSetSection : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETSECTION__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETSECTION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
