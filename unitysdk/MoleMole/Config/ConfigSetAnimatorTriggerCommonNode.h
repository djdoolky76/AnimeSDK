#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192AA140)
#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192AA1B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetAnimatorTriggerCommonNode_TypeDefinitionIndex = 77804;

	class ConfigSetAnimatorTriggerCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* AnimCompKey; // 0x18
		::MoleMole::Config::StringUISpecialNum* ParamName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
