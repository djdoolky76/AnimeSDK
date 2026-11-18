#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B18FD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowManualAccelerate_TypeDefinitionIndex = 69255;

	class ConfigHollowManualAccelerate : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean DisableAccelerate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWMANUALACCELERATE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
