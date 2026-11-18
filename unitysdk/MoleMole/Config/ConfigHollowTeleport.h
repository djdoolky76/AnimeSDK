#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131E6750)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x131E67C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowTeleport_TypeDefinitionIndex = 54884;

	class ConfigHollowTeleport : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single DelayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
