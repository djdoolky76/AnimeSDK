#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B928DC0)
#define MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B928E80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayOverloadBarAnimationNode_TypeDefinitionIndex = 79498;

	class ConfigPlayOverloadBarAnimationNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean IsPlay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
