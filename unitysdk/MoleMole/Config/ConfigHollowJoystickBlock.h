#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B18EC0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19B18F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowJoystickBlock_TypeDefinitionIndex = 56943;

	class ConfigHollowJoystickBlock : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Block; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
