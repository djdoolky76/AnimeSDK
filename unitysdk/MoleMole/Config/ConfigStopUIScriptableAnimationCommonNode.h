#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x190A80C0)
#define MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopUIScriptableAnimationCommonNode_TypeDefinitionIndex = 53099;

	class ConfigStopUIScriptableAnimationCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* AnimationKey; // 0x18
		::MoleMole::Config::StringUISpecialNum* PlayerKey; // 0x20
		::MoleMole::Config::BoolUISpecialNum* ForceCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
