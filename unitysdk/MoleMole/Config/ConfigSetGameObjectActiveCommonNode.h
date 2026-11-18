#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETGAMEOBJECTACTIVECOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A03C000)
#define MOLEMOLE_CONFIG_CONFIGSETGAMEOBJECTACTIVECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03C070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetGameObjectActiveCommonNode_TypeDefinitionIndex = 79537;

	class ConfigSetGameObjectActiveCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* GameObjectKey; // 0x18
		::MoleMole::Config::BoolUISpecialNum* IsActive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETGAMEOBJECTACTIVECOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETGAMEOBJECTACTIVECOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
