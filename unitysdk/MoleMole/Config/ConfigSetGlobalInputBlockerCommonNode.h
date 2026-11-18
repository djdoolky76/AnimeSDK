#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B1BFC0)
#define MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1C030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetGlobalInputBlockerCommonNode_TypeDefinitionIndex = 64917;

	class ConfigSetGlobalInputBlockerCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* UIControllerKey; // 0x18
		::MoleMole::Config::BoolUISpecialNum* UICtrlForceSet; // 0x20
		::MoleMole::Config::BoolUISpecialNum* IsBlockInput; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
