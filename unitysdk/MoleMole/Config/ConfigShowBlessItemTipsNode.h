#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGSHOWBLESSITEMTIPSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A03C0F0)
#define MOLEMOLE_CONFIG_CONFIGSHOWBLESSITEMTIPSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03C1B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShowBlessItemTipsNode_TypeDefinitionIndex = 54896;

	class ConfigShowBlessItemTipsNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWBLESSITEMTIPSNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWBLESSITEMTIPSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
